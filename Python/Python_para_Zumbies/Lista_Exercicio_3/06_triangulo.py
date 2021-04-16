num = int(input('\nInsira o numero:'))

aux = 1
while aux * (aux+1) * (aux + 2) < num:
    aux = aux + 1

print(aux * (aux+1) * (aux + 2) == num)
