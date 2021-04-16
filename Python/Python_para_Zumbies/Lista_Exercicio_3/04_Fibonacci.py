num = int(input('\nInsira o numero:'))
a, b = 1, 1
aux = 1

while aux <= num-2:
    a, b = b, a+b
    aux = aux + 1

print(b)
