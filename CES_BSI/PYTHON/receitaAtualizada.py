import os
import re

# Dicionário para armazenar as receitas
receitas = {}
nome_arquivo_texto = "receitas.txt"

# Carregar receitas do arquivo de texto
def carregar_receitas():
    if os.path.exists(nome_arquivo_texto):
        with open(nome_arquivo_texto, "r") as f:
            linha = f.readline()
            while linha:
                if not linha.strip():
                    linha = f.readline()
                    continue
                nome = re.match(r"## (.+)", linha)
                if nome:
                    nome = nome.group(1)
                    ingredientes = []
                    linha = f.readline()
                    while not linha.startswith("### Modo de preparo"):
                        ingrediente = re.match(r"- (.+)", linha)
                        if ingrediente:
                            ingredientes.append(ingrediente.group(1))
                        linha = f.readline()
                    modo_preparo = []
                    while linha.strip():
                        modo_preparo.append(linha.strip())
                        linha = f.readline()
                    receitas[nome] = {"nome": nome, "ingredientes": ingredientes, "modo_preparo": modo_preparo}
                linha = f.readline()



# Gerar arquivo de texto
def gerar_arquivo_receitas():
  
  nome_arquivo = nome_arquivo_texto
  
  with open(nome_arquivo, "w") as f:
    for nome in receitas:
      f.write(f"## {receitas[nome]['nome']}\n")
      f.write("### Ingredientes\n")
      for ingrediente in receitas[nome]['ingredientes']:
        f.write(f"- {ingrediente}\n")
      f.write("### Modo de preparo\n")
      for passo in receitas[nome]['modo_preparo']:
        f.write(f"{passo}\n")
      f.write("\n")


#função que grava receita
def gravar_receita():    
  global nome
  nome = input("Insira o Nome da Receita: ")
  if nome in receitas:
        print('Esse nome já está sendo usado em outra receita, tente novamente!!')
        return  
  ingredientes = []
  while True: 
    ingrediente = input("Insira o Ingrediente (ou 'sair'): ")
    if ingrediente == 'sair':
      break
    ingredientes.append(ingrediente)
  modoPreparo = []
  while True:
    preparo = input("Modo de preparo (ou 'sair'): ")
    if preparo == 'sair':
      break
    modoPreparo.append(preparo)
  receita = {"nome": nome, "ingredientes": ingredientes, "modo_preparo": modoPreparo}
  receitas[nome] = receita

  print("\nReceita salva com sucesso!\n")
  
  gerar_arquivo_receitas()

# Uma função que identifica uma receita e imprime essa receita
def consultar_receita():
    nome = input("Insira o Nome da Receita: ")
    if nome not in receitas:
        print(f"Não existe nenhuma receita com o nome: '{nome}'.")
        return
    receita = receitas[nome]
    print(f"\nNome Receita: {receita['nome']}")
    print("Ingredientes: ")
    count = 1
    for ingrediente in receita['ingredientes']:
        print(f"{count}º - {ingrediente}")
        count += 1
    print("Modo de Preparo:")
    for passo in receita['modo_preparo']:
        print(passo)
        
# função que lista todas as receitas
def listar_receitas():
  count = 1   
  if not receitas:
    print("Nenhuma Receita Encontrada.")
    return

  print(f"\nForam Encontradas {len(receitas)} receitas:")
  for nome in receitas:
    print(f"{count}º - {nome}")
    count += 1

# Limpar receitas
def limpar_arquivo():
  nome = nome_arquivo_texto
  if os.path.exists(nome):
      with open(nome, 'w') as f:
        pass
      receitas.clear()
  
  print("Arquivo limpo com sucesso!")
  
# Remover arquivo
def remover_arquivo():
  nome = nome_arquivo_texto
  if os.path.exists(nome):
    os.remove(nome)
    receitas.clear()
    print('Arquivo removido com sucesso!!')
  else:
        print('Arquivo não encontrado!')
  
  
  
def validacao_arquivo_receita():
      nome = nome_arquivo_texto
      if not receitas:
        if os.path.exists(nome):
          with open(nome, "r") as f:
            tamanho_arquivo = os.stat(nome).st_size
            if f.tell() == tamanho_arquivo:
              print("O arquivo está vazio.")
            else:
                carregar_receitas()
            
  
print('ReceitaAtualizada.py:')
validacao_arquivo_receita()

# Menu Principal
while True:
  print("""
    1 - Criar Receita
    2 - Consultar Receita
    3 - Listar Receitas
    4 - Limpar Arquivo
    5 - Remover Arquivo
    6 - Sair
    """)
  opcao = int(input("Digite a opção desejada: "))

  
  if opcao not in range(1, 7):
    print("Opção não existente")
    continue
  if opcao == 1:
    gravar_receita()
  elif opcao == 2:
    consultar_receita()
  elif opcao == 3:
    listar_receitas()
  elif opcao == 4:
    limpar_arquivo()
  elif opcao == 5:
    remover_arquivo()
  elif opcao == 6:
    print("Saindo...")
    break
  else:
    print("Opção invalida")
