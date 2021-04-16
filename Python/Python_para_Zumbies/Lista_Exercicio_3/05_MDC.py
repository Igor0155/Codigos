num1 = int(input('\nInsira o 1 numero: '))
num2 = int(input('\nInsira o 2 numero: '))

while num1 % num2 != 0:
    num1, num2 = num2, num1 % num2

print(f'\nMdc = {num2}\n')
