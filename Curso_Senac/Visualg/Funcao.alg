algoritmo "Funcao"
// Fun��o :
// Autor :
// Data : 26/11/2020
// Se��o de Declara��es 

 
funcao divisao ( y,z :inteiro) : inteiro
var
rest : inteiro

inicio

rest <- (y div z)
retorne rest
fimfuncao

var
 a,b, c: real
 
inicio
escreval ("Abaixo insira os numeros para fazer a a divis�o!")
escreval()
escreva ("insira uo primeiro numero: ")
leia (a)

escreva ("insira o segindo numero: ")
leia (b)


c <- divisao(a,b)

escreval("O resultado e:",c)



// Se��o de Comandos 
fimalgoritmo
