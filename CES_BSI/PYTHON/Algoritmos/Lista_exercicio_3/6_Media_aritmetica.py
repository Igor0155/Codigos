"""
algoritmo que calcula a média aritmética 
de vários valores inteiros positivos
"""

sum = 0
aux = 0
count = 0

while aux >= 0:
    num = int(input(f'Insira o {count+1}º número: '))

    if (num < 0):
        aux = num
    else:
        count += 1
        sum += num

average = sum / count

print(f'A média é: {average}')
