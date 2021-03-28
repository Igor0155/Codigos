algoritmo "Media de idades das familias"
// Função :
// Autor :
// Data : 22/11/2020
// Seção de Declarações 
var
idade : vetor [1..10] de real
i: inteiro
media, ac : real
inicio
// Seção de Comandos
escreval ("Insira a baixo as idades de cada membro em sua família!")

para i de 1 ate 10 passo 1 faca
escreva ("Insira a [",i,"] idade: ")
leia (idade[i])
fimpara

para i de 1 ate 10 passo 1 faca

ac<-ac+ idade[i]
fimpara
media <- ac/10

se (media > 0) e (media <= 12) entao
escreval()
escreval("================================================================")
escreval()
escreval ("Classificação da Família é CRIANÇA com media:", media," !!!")
escreval()
escreval("================================================================")
fimse

se (media > 12) e (media <= 18) entao
escreval()
escreval("================================================================")
escreval()
escreval ("Classificação da Família é ADOLECENTE com media:",media, " !!!")
escreval()
escreval("================================================================")
fimse

se (media > 18) e (media <=39) entao
escreval()
escreval("=============================================================")
escreval()
escreval ("Classificação da Família é JOVEM com media:",media, " !!!")
escreval()
escreval("=============================================================")
fimse

se (media > 39) e (media <= 59) entao
escreval()
escreval("================================================================")
escreval()
escreval ("Classificação da Família é EXPERIENTE com media: ",media, "!!!")
escreval()
escreval("================================================================")
fimse

se (media > 59) entao
escreval()
escreval("=============================================================")
escreval()
escreval ("Classificação da Família é IDOSO com media: ",media, " !!!")
escreval()
escreval("=============================================================")
fimse





fimalgoritmo
