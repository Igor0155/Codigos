
# Populando a lista
def entrada(num, list):
    num = 0
    list = []
    for i in range(0, 10):
        print(f"Insira o {i+1}º numero")
        num = int(input())
        list.insert(i, num)
    return list

# Saida da multiplicação dos valores da lista


def saida(list):
    aux = 0

    for i in range(len(list)):
        if aux == 0:
            list[i] = list[i] * 3
        elif aux % 2 == 0:
            list[i] = list[i] * 3
        else:
            list[i] = list[i]
        aux = aux + 1
    return list


# criando variaveis e listas
list = []
num = 0
end = []

list = entrada(num=num, list=list)
end = saida(list)
print(list)
