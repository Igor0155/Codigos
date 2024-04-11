import struct
import os


formtRegistroBin = 'if10s'
nomeArq = 'vendas.bin'
nomeArqTemp = 'vendas_temp.bin'

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
    codigoVendedor = int(input("Insira o Código do Vendedor: "))
    valorVenda = float(input("Insira o Valor da Venda: "))
    mesAno = input("Insira o mês e ano no formato 'mm/aaaa': ")

    with open(nomeArq, 'ab') as arq:
        registro = struct.pack(formtRegistroBin, codigoVendedor, valorVenda, mesAno.encode('utf-8'))
        arq.write(registro)
        print('\nVendedor Adicionado com sucesso!')
    

# Função para excluir um vendedor do arquivo
def excluir_vendedor():
    codigoVendedor = int(input("Insira o código do vendedor para excluir: "))
    mesAno = input("Insira o mês e ano do registro para excluir: ")
    
    if os.path.exists(nomeArq):
        with open(nomeArq, 'r+b') as arqOrig:
            tamanho_registro = struct.calcsize(formtRegistroBin)
            while True:
                posicao_atual = arqOrig.tell()
                registro = arqOrig.read(tamanho_registro)
                if not registro:
                    break
                regDecodificado = struct.unpack(formtRegistroBin, registro)
                if regDecodificado[0] == codigoVendedor or regDecodificado[2].decode('utf-8') == mesAno:
                    
                    # arq.seek(-struct.calcsize(formtRegistroBin), os.SEEK_CUR)
                    arqOrig.seek(posicao_atual)
                    # arqTemp.write(registro)
                
                    arqOrig.write(b'\x00' * tamanho_registro)
                    print("Registro excluído com sucesso.")
                    return
        # os.remove(nomeArq)
        # os.replace(nomeArqTemp, nomeArq)
        print("Registro não encontrado.")
    else:
        print("Registro não encontrado.")
    

# Função para alterar o valor total da venda
def alterar_valor_venda():
    codigoVendedor = int(input("Insira o código do vendedor: "))
    novoValorVenda = float(input("Insira o novo valor da venda: "))
    mesAno = input("Insira o mês e ano (mm/aaaa) do registro para alterar: ")
    if os.path.exists(nomeArq):
        with open(nomeArq, 'r+b') as arq:
            while True:
                posicaoAtual = arq.tell()
                registro = arq.read(struct.calcsize(formtRegistroBin))
                if not registro:
                    break
                registroDecodificado = struct.unpack(formtRegistroBin, registro)
                if registroDecodificado[0] == codigoVendedor and registroDecodificado[2].decode('utf-8') == mesAno:
                    
                    arq.seek(posicaoAtual + 4)
                    
                    arq.write(struct.pack('f', novoValorVenda))
                    print("Alterado com sucesso.")
                    return
        print("Registro não encontrado.")
    else:
        print("Registro não encontrado.")

# Função para imprimir os registros 
def imprimir_registros():
    if os.path.exists(nomeArq):
        with open(nomeArq, 'rb') as arq:
            while True:
                registro = arq.read(struct.calcsize(formtRegistroBin))
                if not registro:
                    break
                codigo_vendedor, valor_venda, mes_ano = struct.unpack(formtRegistroBin, registro)
                print(f"Código do Vendedor: {codigo_vendedor}, Valor da Venda: {valor_venda}, Mês/Ano: {mes_ano.decode('utf-8')}")
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
            print(f"O vendedor com maior valor de venda é o vendedor {codigoVendedor} com o valor de venda de R${maiorValor}.")
        else:
            print("Nenhum registro encontrado.")
    else:
        print("Nenhum registro encontrado.")
        



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
        print('Opção inválida, tente novamente!!!')
    