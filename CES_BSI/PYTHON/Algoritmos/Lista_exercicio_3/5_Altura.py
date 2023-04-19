"""
algoritmo que calcule e imprima
quantos anos serão necessários 
para que Zé seja maior que Chico
"""

chico = 1.50
ze = 1.30
count = 0

while ze < chico:
    ze += 0.03
    chico += 0.02

    # print(chico, ze)

    count += 1


print(f'O Zé precisou de {count} Anos')
