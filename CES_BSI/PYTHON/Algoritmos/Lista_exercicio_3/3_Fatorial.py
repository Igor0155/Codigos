"""
Esse programa faz a fatoração de um número

"""

num = int(input('Fatoração de: '))

sum = 1

for i in range(1, num + 1):
      
    sum *= i

print(sum)
