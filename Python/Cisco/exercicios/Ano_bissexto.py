
#input
ano = int(input('\nInsira o ano: '))

#atribuindo o resto da divisao a result
result = ano % 4

#varificando o resto da dividao e o ano
if ano < 1582:
    print('\nEste ano nao entra no calendario grego\n\n')

elif result == 0:
    print('\nbissexto\n')

elif result != 0:
    print('\ncomum\n')

