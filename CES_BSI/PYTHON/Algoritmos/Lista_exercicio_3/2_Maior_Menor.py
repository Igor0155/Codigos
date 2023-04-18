# Esse programa pega 20 valores 
# e imprime p maior e o menor número deles


value = float(input(f'Insira o 1º valor: '))

bigger = value
smaller = value

aux = 0

for i in range(1,21):
    num = float(input(f'Insira o {i+1}º valor: '))

    if ( bigger < num and bigger >= smaller):
        bigger = num
       
    elif(smaller > num and smaller <= bigger):
        smaller = num
    
    
    
print(f'O menor número é: {smaller}')
print(f'O maior número é: {bigger}')   
