aux = 0

while aux == 0:
    notas = float(input('\nInsira as notas <0 - 10 >: '))

    if notas < 0 or notas > 10:
        print('\nValor invalido')
    else:
        aux = 1
