import struct
import os
import re

formtRegistroBin = 'if10s'
nomeArq = 'vendas.bin'

# Função para criar o arquivo de dados
def criacao_arq():
    if os.path.exists(nomeArq):
        print('\nO Arquivo já existe!')
    else:        
        with open(nomeArq, 'wb') as arq:
            pass
        print('\nArquivo Criado com sucesso!')

# Função para incluir um vendedor no arquivo
def adicionar_vendedores():
    if os.path.exists(nomeArq):
        codigoVendedor = int(input("Insira o Código do Vendedor <0 - Sair>: "))
        if codigoVendedor == 0:
            return
        valorVenda = float(input("Insira o Valor da Venda: "))
        mesAno = input("Insira o mês e ano no formato 'mm/aaaa': ")
        # Validação do código do vendedor
        if codigoVendedor <= 0:
            print("\nErro: O código do vendedor deve ser um número inteiro positivo.")
            return
        # Validação do formato do mês/ano
        if not re.match(r'^\d{2}/\d{4}$', mesAno):
            print("\nErro: O formato do mês/ano deve ser 'mm/aaaa'.")
            return
        mes, ano = mesAno.split("/")
        mes = mes.zfill(2)
        data = f"{mes}/{ano}"
        # Lê todos os registros do arquivo e armazena em uma lista de tuplas
        registros = []
        with open(nomeArq, 'rb') as arq:
            while True:
                registro = arq.read(struct.calcsize(formtRegistroBin))
                if not registro:
                    break
                registros.append(struct.unpack(formtRegistroBin, registro))
            # Verifica se já existe um registro com o mesmo código de vendedor e mês/ano na lista
            for reg in registros:
                if reg[0] == codigoVendedor and reg[2].decode("utf-8").strip("\x00")  == data:
                    print("\nErro: Já existe um registro com o mesmo código de vendedor e mês/ano.")
                    return
        # Se não houver registros duplicados, adiciona o novo registro
        with open(nomeArq, 'ab') as arq:
            registro = struct.pack(formtRegistroBin, codigoVendedor, valorVenda, mesAno.encode('utf-8'))
            arq.write(registro)
            print('\nVendedor Adicionado com sucesso!')
    else:
        print("\nArquivo não encontrado.\nCrie um arquivo para poder adicionar um vendedor")

# Função para excluir um vendedor do arquivo
def excluir_vendedor():
    codigoVendedor = int(input("Insira o código do vendedor para excluir  <0 - Sair>: "))
    if codigoVendedor == 0:
        return
    mesAno = input("Insira o mês e ano do registro para excluir: ")
    # Validação do formato do mês/ano
    if not re.match(r'^\d{2}/\d{4}$', mesAno):
        print("\nErro: O formato do mês/ano deve ser 'mm/aaaa'.")
        return    
    if os.path.exists(nomeArq):
        with open(nomeArq, 'r+b') as arqOrig:
            tamanhoRegistro = struct.calcsize(formtRegistroBin)
            while True:
                posicao_atual = arqOrig.tell()
                registro = arqOrig.read(tamanhoRegistro)
                if not registro:
                    break
                regDecodificado = struct.unpack(formtRegistroBin, registro)
                if regDecodificado[0] == codigoVendedor or regDecodificado[2].decode('utf-8') == mesAno:
                    arqOrig.seek(posicao_atual)
                    arqOrig.write(b'\x00' * tamanhoRegistro)
                    print("\nRegistro excluído com sucesso.")
                    return
        print("\nRegistro não encontrado.")
    else:
        print("\nRegistro não encontrado.")

# Função para alterar o valor total da venda
def alterar_valor_venda():
    codigoVendedor = int(input("Insira o código do vendedor <0 - Sair>: "))
    if codigoVendedor == 0:
        return
    novoValorVenda = float(input("Insira o novo valor da venda: "))
    mesAno = input("Insira o mês e ano (Mês/Ano) do registro para alterar: ")   
    # Validação do formato do mês/ano
    if not re.match(r'^\d{2}/\d{4}$', mesAno):
        print("\nErro: O formato do mês/ano deve ser 'mm/aaaa'.")
        return    
    mes, ano = mesAno.split("/")
    mes = mes.zfill(2)
    data = f"{mes}/{ano}"    
    if os.path.exists(nomeArq):
        with open(nomeArq, "r+b") as arq:
            tamanhoRegistro = struct.calcsize(formtRegistroBin)
            while True:
                registro = arq.read(tamanhoRegistro)
                if not registro:
                    break
                registroDecod = struct.unpack(formtRegistroBin, registro)
                # retirar os bytes nulos finais da string
                dataReg = registroDecod[2].decode("utf-8").strip("\x00")  
                if registroDecod[0] == codigoVendedor and dataReg == data:
                    arq.seek(-tamanhoRegistro, os.SEEK_CUR)
                    registro_alterado = struct.pack(formtRegistroBin, codigoVendedor, novoValorVenda, data.encode("utf-8"))
                    arq.write(registro_alterado)
                    print("\nRegistro alterado com sucesso!")
                    return
    else:
        print("\nArquivo não encontrado!")
    print(f"\nRegistro não encontrado para o vendedor {codigoVendedor} e a data {mesAno}.")

# Função para imprimir os registros 
def imprimir_registros():
    if os.path.exists(nomeArq):
        with open(nomeArq, 'rb') as arq:
            arq.seek(0)
            while True:
                registro = arq.read(struct.calcsize(formtRegistroBin))
                if not registro:
                    break
                codigoVendedor, valorVenda, mesAno = struct.unpack(formtRegistroBin, registro)
                if codigoVendedor != 0:
                    print(f"Código do Vendedor: {codigoVendedor}, Valor da Venda: {valorVenda}, Mês/Ano: {mesAno.decode('utf-8')}")
    else:
        print("Nenhum registro encontrado.")

# Função para consultar o vendedor com maior valor de venda
def consultar_maior_venda():
    maiorValor = 0
    codigoVendedor = None
    if os.path.exists(nomeArq):
        with open(nomeArq, 'rb') as arq:
            while True:
                registro = arq.read(struct.calcsize(formtRegistroBin))
                if not registro:
                    break
                _, valorVenda, _ = struct.unpack(formtRegistroBin, registro)
                if valorVenda > maiorValor:
                    maiorValor = valorVenda
                    posicao_atual = arq.tell()
                    arq.seek(posicao_atual - struct.calcsize(formtRegistroBin))
                    codigoVendedor, _, _ = struct.unpack(formtRegistroBin, arq.read(struct.calcsize(formtRegistroBin)))
        if codigoVendedor is not None:
            print(f"\nO vendedor com maior valor de venda é o vendedor {codigoVendedor} com o valor de venda de R${maiorValor}.")
        else:
            print("\nNenhum registro encontrado.")
    else:
        print("\nNenhum registro encontrado.")   
    
opcoes = {
        1: criacao_arq,
        2: adicionar_vendedores,
        3: excluir_vendedor,
        4: alterar_valor_venda,
        5: imprimir_registros,
        6: consultar_maior_venda,
        7: exit
    }

while True:
    print("""
Menu:
    1 - Criar arquivo de dados
    2 - Incluir vendedor
    3 - Excluir vendedor
    4 - Alterar valor total da venda de um vendedor
    5 - Imprimir registros
    6 - Consultar vendedor com maior valor de venda
    7 - Finalizar programa         
          """)

    selecionado = int(input("\nEscolha uma opção: "))
    if selecionado in opcoes:
        opcoes[selecionado]()
    else:
        print('\nOpção inválida, tente novamente!!!')