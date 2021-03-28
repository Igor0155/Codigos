algoritmo "semnome"
// Função :
// Autor :
// Data : 27/11/2020
// Seção de Declarações 
funcao primos( y, z, num: inteiro) : inteiro
var
rest1: inteiro

inicio
//para y de 1 ate num faca

se num mod y = 0 entao
z<-z+1
fimse
y<-y+1

se z=2 entao
//rest1 <-z
escreval ("e Primo")
senao
escreval("NAO e Primo")
fimse
fimpara
//retorne y

fimfuncao
//===============================

var
numero ,a,c,b:inteiro

inicio



escreval ("insira o numero")
leia(b)
c<-0

para c de 1 ate b faca

c<-primos(b)



escreval ("E:",c)


fimalgoritmo
