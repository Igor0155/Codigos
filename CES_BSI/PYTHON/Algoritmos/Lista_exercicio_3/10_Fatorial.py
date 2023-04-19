"""
algoritmo que lê um número 'n' que indica quantos 
valores devem ser lidos a seguir. Para cada número
lido, mostrando o valor lido e o fatorial deste valor.

"""

num = int(input('Insira um numero: '))

for i in range(1, num + 1):

    num2 = int(input(f'Insira o {i}º de {num} números: '))
    
    sum = 1
    
    for x in range(1, num2 + 1):
        sum *= x

    print(f'\nNumero lido: {num2}.\nFatoração: {sum}\n')
