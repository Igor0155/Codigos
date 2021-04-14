
velo = int(input('\nInsira a velociadade do carro: '))

if velo > 110:
    print('\nVoce foi multado! \n')
    multa = 5*(velo - 110)
    #F indica que o numero entre chaves e float e tem q ser assim {var:.2f}
    print(f'O valor da multa foi de: R$ {multa:.2f} \n')
else:
    print('\nSiga em frente\n')