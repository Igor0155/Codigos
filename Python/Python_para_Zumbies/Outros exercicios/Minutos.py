#Calcula a conta de telefone

minutos = float(input('\nInsira a quantidade de minutos: '))

if minutos < 200:
    print('\nO valor dos minutos sao 0,20C\n')
    total = minutos *0.2
    print(f'Preco total de R${total:.2f}\n')

elif minutos >= 200 and minutos <=400:
    print('\nO valor dos minutos sao 0,18C\n')
    total = minutos *0.18
    print(f'Preco total de R${total:.2f}\n')

elif minutos >400 and minutos <800:
    print('\nO valor dos minutos sao 0,15C\n')
    total = minutos *0.15
    print(f'Preco total de R${total:.2f}\n')

elif minutos >= 800:
    print('\nO valor dos minutos sao 0,08C\n')
    total = minutos *0.08
    print(f'Preco total de R${total:.2f}\n')
