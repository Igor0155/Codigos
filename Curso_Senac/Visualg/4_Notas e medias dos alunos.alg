algoritmo "Notas e medias dos alunos"
// Função :
// Autor :
// Data : 17/11/2020
// Seção de Declarações 
var
nota1:real
nota2,nota3,nota4,nota5:real
media:real
aluno:caracter
inicio
// Seção de Comandos 

escreva ("Escreva o nome do aluno:")
leia(aluno)
escreva ("insira a primeira nota: ")
leia (nota1)
escreva ("insira a segunda nota: ")
leia (nota2)
escreva ("insira a segunda nota: ")
leia (nota3)
escreva ("insira a segunda nota: ")
leia (nota4)
escreva ("insira a segunda nota: ")
leia (nota5)



media <- (nota1 + nota2+nota3+nota4+nota5) /5

se (media >=7) entao
escreval ("aluno aprovado!")
escreva ("Nota Media:",media)
fimse

se (media <4) entao
escreval ("Aluno reprovado!")
escreva ("Nota Media:", media)

fimse
//nunca esqueça da virgula

se( media >=4) e ( media <=6.9 ) entao

escreval ("Aluno esta de Prova Final!")
escreva  ("Nota Media:",media)

fimse
fimalgoritmo
