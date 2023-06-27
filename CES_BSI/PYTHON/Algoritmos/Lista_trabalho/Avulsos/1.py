# Ler uma lista de 5 números inteiros e
# mostre cada número juntamente com a
# sua posição na lista.

def ler_num():
    lista = []
    num = 0
    for i in range(5):
        num = int(input(f"Insira o {i+1}º Número: "))
        lista.append(num)
        num = 0

    return lista


lista1 = ler_num()

for i in range(len(lista1)):
    print(f"{i+1}º => {lista1[i]} ")


# print(lista1)
