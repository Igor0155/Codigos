num1 = float(input('\nNumero 1: '))
num2 = float(input('\nNumero 2: '))
num3 = float(input('\nNumero 3: '))
aux2 = 0
aux = 0

if num1 > aux:
    aux = num1

if num2 > aux:
    aux = num2

if num3 > aux:
    aux = num3

if num1 <= num2 and num1 <= num3:
    aux2 = num1
elif num2 <= num3:
    aux2 = num2
else:
    aux2 = num3

print(f'\nO maior numero e o: {aux:.1f} e o menor e o:', aux2, ' \n\n')
