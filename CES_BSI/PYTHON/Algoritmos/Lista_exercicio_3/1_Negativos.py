"""
Esse programa pega 10 números digitados
pelo usuário e imprime os números negativos

"""

Values = []

for i in range(10):
    # print(i)
    number = float(input(f'Insira o {i+1}º Valor: '))

    if (number < 0):
        Values.append(number)

print('Os valores negativos são:')
for Value in Values:
    print(Value)
