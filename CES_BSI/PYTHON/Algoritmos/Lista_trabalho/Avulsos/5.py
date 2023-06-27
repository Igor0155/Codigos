# Inicialize uma lista de 20 números inteiros. Armazene
# os números pares em uma lista PAR e os números
# ímpares em uma lista IMPAR. Imprima as listas PAR
# e IMPAR.


import random


# Adicionando numeros aleatorios na lista
def numeros():
    lista = []
    num = 0
    for i in range(20):
        num = random.randint(1, 100)
        lista.append(num)
    return lista


# Separando numeros impar e par
def separar(lista):
    list_impar = []
    list_par = []

    for i in range(len(lista)):
        if lista[i] % 2 == 0:
            list_par.append(lista[i])
        else:
            list_impar.append(lista[i])

    print(f"Lista Par: {list_par}")
    print(f"Lista Impar: {list_impar}")


# criando lista
lista = numeros()

# chamando a func
separar(lista)
