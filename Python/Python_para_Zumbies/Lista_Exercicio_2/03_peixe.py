peso = float(input('\nInforme o peso dos peixes (kg): '))

if peso > 50:
    excesso = peso - 50
    multa = excesso*4

    print('\nO Excesso foi de:', excesso, 'kg e uma multa de R$', multa, '\n')

else:
    print('\nNão houve excesso de peso!!\n')
