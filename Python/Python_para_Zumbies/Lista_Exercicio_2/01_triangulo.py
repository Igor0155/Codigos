a = int(input('\nLado A: '))
b = int(input('\nLado B: '))
c = int(input('\nLado C: '))

if a > b + c or b > a + c or c > a + b:
    print('\nNao pode ser um triangulo')
    print('\nUm dos lados e maior doq a soma dos outros\n')

elif a == b and b == c and a == c:
    print('\nEquilátero\n')

elif a == b or b == c or a == c:
    print('Isósceles')

else:
    print('Escaleno')
