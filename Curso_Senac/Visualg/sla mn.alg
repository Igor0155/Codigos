algoritmo "Votar e dirigir"
// Fun��o : Ver a idade do cara e falar se ele pode votar e dirigir ou n�o
// Autor :  Marcelo de Oliveira Amaral
// Data : 17/11/2020
// Se��o de Declara��es 
var
dia, mes, ano, s_n: real
subtracao: real

inicio
// Se��o de Comandos 
escreval ("Digite o dia de seu nascimento: ")
leia (dia)
escreval ("Agora digite o m�s de seu nascimento: ")
leia (mes)
escreval ("Para finalizar, digite o ano de seu nascimento: ")
leia (ano)
escreval (dia, mes, ano)
escreval ("Est� correto? Pressione 1 para sim e 0 para n�o: ")
leia (s_n)

subtracao <- 2020-ano
se (s_n= 1) entao
escreval ("Sua idade �: ",2020-ano)
se (subtracao>=16)e(subtracao<18)  entao
escreval ("Voc� pode votar, mas n�o pode dirigir")
senao
se (subtracao>=18) entao
escreval ("Voc� pode votar e dirigir")
senao
se (subtracao<18) entao
escreval ("Voc� n�o pode nem votar e nem dirigir")
senao
fimse
fimse
fimse
fimse
se (s_n= 0) entao
escreval ("Reinicie o processo")
fimse


fimalgoritmo
