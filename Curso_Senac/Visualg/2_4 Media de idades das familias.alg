algoritmo "Media de idades das familias"
// Fun��o :
// Autor :
// Data : 22/11/2020
// Se��o de Declara��es 
var
idade : vetor [1..10] de real
i: inteiro
media, ac : real
inicio
// Se��o de Comandos
escreval ("Insira a baixo as idades de cada membro em sua fam�lia!")

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
escreval ("Classifica��o da Fam�lia � CRIAN�A com media:", media," !!!")
escreval()
escreval("================================================================")
fimse

se (media > 12) e (media <= 18) entao
escreval()
escreval("================================================================")
escreval()
escreval ("Classifica��o da Fam�lia � ADOLECENTE com media:",media, " !!!")
escreval()
escreval("================================================================")
fimse

se (media > 18) e (media <=39) entao
escreval()
escreval("=============================================================")
escreval()
escreval ("Classifica��o da Fam�lia � JOVEM com media:",media, " !!!")
escreval()
escreval("=============================================================")
fimse

se (media > 39) e (media <= 59) entao
escreval()
escreval("================================================================")
escreval()
escreval ("Classifica��o da Fam�lia � EXPERIENTE com media: ",media, "!!!")
escreval()
escreval("================================================================")
fimse

se (media > 59) entao
escreval()
escreval("=============================================================")
escreval()
escreval ("Classifica��o da Fam�lia � IDOSO com media: ",media, " !!!")
escreval()
escreval("=============================================================")
fimse





fimalgoritmo
