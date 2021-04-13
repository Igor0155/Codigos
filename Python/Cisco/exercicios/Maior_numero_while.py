aux = 0
num1 =0

while aux < 10:
    print('\nInsira o',aux + 1,'número: ')
    num = int(input())
    
    if num1 <= num:
        num1 =+ num
        cont = aux
    
    num = 0
    aux = aux + 1

print('\nO maior dos números é o:', num1,'na posição:', cont +1, '\n\n')