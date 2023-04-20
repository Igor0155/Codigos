""""
Tabuada do número digitado pelo usuario

"""
num = int(input('Insira um numero: '))

aux = 0

for i in range(1, num +1):
    
    aux = i * num 
    print(f'{i} * {num} = {aux}')    
    
    