"""
algoritmo que lê o código do candidato em um voto. Calcula e
escreve as seguintes informações:
1 - total de votos para cada candidato;
2 - total de votos nulos;
3 -  total de votos em branco.
Com finalizador do conjunto de votos, utilizando o valor 0
"""

cand1 = cand2 = cand3 = cand4 = nulo = white = 0

aux = 1

while aux != 0:

    vote = int(input('Insira o seu voto ou 0 - Sair\n1 - Canditado 1\n2 - Canditado 2\n3 - Canditado 3\n4 - Canditado 4\n5 - Nulo\n6 - Branco\n: '))

    if vote == 1:
        cand1 += 1
    elif vote == 2:
        cand2 += 1
    elif vote == 3:
        cand3 += 1
    elif vote == 4:
        cand4 += 1
    elif vote == 5:
        nulo += 1
    elif vote == 6:
        white += 1
    else:
        aux = 0

print(f'Votos do Canditado 1: {cand1}')
print(f'Votos do Canditado 2: {cand2}')
print(f'Votos do Canditado 3: {cand3}')
print(f'Votos do Canditado 4: {cand4}')
print(f'Votos Nulos: {nulo}')
print(f'Votos em Brancos: {white}')
