# Faça um programa que leia um número indeterminado de notas. Após esta entrada de
# dados, faça o seguinte:
# • Mostre a quantidade de notas que foram lidas.
# • Exiba todas as notas na ordem em que foram informadas.
# • Exiba todas as notas na ordem inversa à que foram informadas, uma abaixo do outra.
# • Calcule e mostre a soma das notas.
# • Calcule e mostre a média das notas.
# • Calcule e mostre a quantidade de notas acima da média calculada.

import random


def pegar_nota():

    limit = int(input("Insira o numero de notas a serem lidas: "))
    notas = []
    aux = 0

    for i in range(1, limit):
        aux = random.randint(1, 100)
        notas.append(aux)

    return notas


def mostrar(notas):
    print(f"Foram lidas {len(notas) + 1} notas")
    print(f"Notas que foram inseridas: {notas} ")
    print(f"notas na ordem inversa: ")
    notas.reverse()
    for i in range(len(notas)):
        print(notas[i])


def calculo(notas):
    soma = 0
    # fazendo a soma das notas
    for i in range(len(notas)):
        soma += notas[i]

    # fazendo a media das notas
    media = soma / (len(notas) + 1)
    acima = 0
    # pegando nota acima da media
    for i in range(len(notas)):
        if notas[i] > media:
            acima += 1

    # mostrando os resultados
    print(f"Soma das notas: {soma}")
    print(f"Média das notas: {round(media, 2)}")
    print(f"Existem {acima} notas acima da média calculada")


notas = pegar_nota()

mostrar(notas)

calculo(notas)
