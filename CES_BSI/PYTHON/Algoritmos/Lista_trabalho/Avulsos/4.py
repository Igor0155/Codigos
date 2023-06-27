# Ler um vetor com 20 idades e exibir a
# maior e menor.

# Pegando as idades
def idade():
    lista = []
    num = 0

    for i in range(20):
        num = int(input(f"Insira a {i+1}º idade: "))
        lista.append(num)

    return lista

# exibindo as idades
def exibir(lista):

    print(f"Menor idade: {min(lista)} anos\nMaior idade: {max(lista)} anos")

# definindo a lista
lista = idade()

# chamando a func
exibir(lista)
