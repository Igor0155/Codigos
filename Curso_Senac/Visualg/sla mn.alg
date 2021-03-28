algoritmo "Votar e dirigir"
// Função : Ver a idade do cara e falar se ele pode votar e dirigir ou não
// Autor :  Marcelo de Oliveira Amaral
// Data : 17/11/2020
// Seção de Declarações 
var
dia, mes, ano, s_n: real
subtracao: real

inicio
// Seção de Comandos 
escreval ("Digite o dia de seu nascimento: ")
leia (dia)
escreval ("Agora digite o mês de seu nascimento: ")
leia (mes)
escreval ("Para finalizar, digite o ano de seu nascimento: ")
leia (ano)
escreval (dia, mes, ano)
escreval ("Está correto? Pressione 1 para sim e 0 para não: ")
leia (s_n)

subtracao <- 2020-ano
se (s_n= 1) entao
escreval ("Sua idade é: ",2020-ano)
se (subtracao>=16)e(subtracao<18)  entao
escreval ("Você pode votar, mas não pode dirigir")
senao
se (subtracao>=18) entao
escreval ("Você pode votar e dirigir")
senao
se (subtracao<18) entao
escreval ("Você não pode nem votar e nem dirigir")
senao
fimse
fimse
fimse
fimse
se (s_n= 0) entao
escreval ("Reinicie o processo")
fimse


fimalgoritmo
