aux = 0

while aux == 0:
    notas = float(input('\nInsira as notas <0 - 10 >: '))

    if notas < 0 or notas > 10:
        print('\nValor invalido')
    else:
        aux = 1

# Outro jeito
#nota = float(input('Digite uma nota: '))
# while nota < 0 or nota > 10:
#  print ('Notas entre 0 e 10: ')
#  nota = float(input('Digite uma nota: '))
