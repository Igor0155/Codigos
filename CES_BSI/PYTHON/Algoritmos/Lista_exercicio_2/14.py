# Desenvolva um algoritmo que leia o nome de um aluno, suas notas em 2 provas e
# em um trabalho (todas com valores entre 0 e 10) e sua frequência, definindo e
# imprimindo se ele foi aprovado, reprovado ou se fará prova final. O aluno será
# reprovado se faltou mais de 15 aulas. Será aprovado se não for reprovado por falta
# e sua média for maior que 6,0. Caso tenha média menor, deverá fazer prova final.
# O cálculo da média deve ser feito com peso 3 para a primeira prova, 5 para a
# segunda prova e 2 para o trabalho.


prova1 = float(input('Insira a nota da 1º Prova: '))

prova2 = float(input('Insira a nota da 2º Prova: '))

trabalho = float(input('Insira a nota do trabalho: '))

soma = prova1 + prova2 + trabalho


if soma < 0 and soma > 30:
    print('Você inseriu valores além do esperado!')
    print(soma)
    
else:
    print('Tudo certo.')
    print(soma)