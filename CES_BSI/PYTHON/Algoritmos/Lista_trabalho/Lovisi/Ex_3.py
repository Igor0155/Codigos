def vogal(list):
    a = e = i = o = u = 0
    for it in range(len(list)):
        if list[it].upper() == 'A':
            a = a + 1
        elif list[it].upper() == 'E':
            e = e + 1
        elif list[it].upper() == 'I':
            i = i + 1
        elif list[it].upper() == 'O':
            o = o + 1
        elif list[it].upper() == 'U':
            u = u + 1
    return print(f"A = {a}\nE = {e}\nI = {i}\nO = {o}\nU = {u}")


text = input('Insira o texto: \n:: ')

list = list(text)

print(vogal(list))

# print(list)
