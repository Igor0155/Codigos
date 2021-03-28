algoritmo "Calcular a idade"
// Função :
// Autor : Igor Gabriel
// Data : 17/11/2020
// Seção de Declarações 
var
idade:real
data :real
inicio
// Seção de Comandos 
escreva ("insira seu ano do seu Nascimento:")
leia (idade)

se (idade < 2020) entao
data<- (2020-idade)
escreval ("Você tem",data," anos.")

fimse

se (data>= 16) entao
escreval ("Você ja tem idade para Votar!")
senao
escreval("Você não tem idade para Votar.")
fimse

se (data >=18) entao
escreva ("E para Tirar a Carteira de Habilitação!")
senao
escreva ("Você nao tem idade para Tirar a Carteira de Habilitação.")
fimse


fimalgoritmo
