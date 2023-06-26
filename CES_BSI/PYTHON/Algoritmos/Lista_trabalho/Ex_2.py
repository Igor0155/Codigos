def separar(list):
    aux = 0
    for i in range(len(list)):
        if aux == 0:
            list[i] = list[i].upper()
        if list[i] == ' ':
            list[i+1] = list[i+1].upper()
        aux = aux + 1

    return list


text = input('Insira o texto: \n:: ')

list = list(text)

list = separar(list)

text1 = "".join(list)

print(text1)
