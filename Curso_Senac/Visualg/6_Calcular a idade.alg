algoritmo "Calcular a idade"
// Fun��o :
// Autor : Igor Gabriel
// Data : 17/11/2020
// Se��o de Declara��es 
var
idade:real
data :real
inicio
// Se��o de Comandos 
escreva ("insira seu ano do seu Nascimento:")
leia (idade)

se (idade < 2020) entao
data<- (2020-idade)
escreval ("Voc� tem",data," anos.")

fimse

se (data>= 16) entao
escreval ("Voc� ja tem idade para Votar!")
senao
escreval("Voc� n�o tem idade para Votar.")
fimse

se (data >=18) entao
escreva ("E para Tirar a Carteira de Habilita��o!")
senao
escreva ("Voc� nao tem idade para Tirar a Carteira de Habilita��o.")
fimse


fimalgoritmo
