
#definindo as variaveis
num_par = 0
num_impar = 0

#definindo auxcom 1 para  ja entrar no loop
aux = 1


while aux != 0:

    #input do numero    
    num= int(input('\nInsira um numero ou 0 para sair: '))

    #se o numero for diderente de 0 ele e examindo
    if num != 0:
        if num % 2 == 1:
            num_impar += 1
        else:
            num_par +=1
    
    #atribuindo onumero do input na condicao do whilw
    aux = num

#resultado
print('\nNumeros Pares =',num_par)
print('\nNumeros Impares =',num_impar ,'\n\n')