soma = 0
cont = 0
print('\nInsira o codigo da Operação')
print('Soma - 1')
print('Subtração - 2')
print('Multiplicação - 3')
print('Sair - 0')
code = int(input())

if code == 0:
    SystemExit

#Soma
while code == 1:
    
    num = float(input('\nInsira numero: '))

    soma = soma + num

    if soma > num:
        print('\n soma = ',soma )

    if cont >= 2:
        print('\nDeseja continuar? 1 - sim 0 - nao')
        code = int(input())

    if code == 0:
        print('\nA soma deu: ',soma,'\n')
        SystemExit
    
    cont = cont + 1
    
soma = 1


#subtração
while code == 2:
    
    num = float(input('\nInsira numero: '))

    if cont == 0:
        soma = num 
    
    else:
        soma = soma - num

    if cont == 1 or cont > 1:
        print('\n soma = ',soma )

    if cont >= 2:
        print('\nDeseja continuar? 2 - sim 0 - nao')
        code = int(input())

    if code == 0:
        print('\nA soma deu: ',soma,'\n')
        SystemExit
    
    cont = cont + 1

soma = 1


#Multiplicação
while code == 3:
    
    num = float(input('\nInsira numero: '))

    soma = soma * num

    if soma > num:
        print('\n soma = ',soma )

    if cont >= 2:
        print('\nDeseja continuar? 3 - sim 0 - nao')
        code = int(input())

    if code == 0:
        print('\nA soma deu: ',soma,'\n')
        SystemExit
    
    cont = cont + 1


