algoritmo "Atividade: Nomes na ordem inversa"
// Função :
// Autor :
// Data : 19/11/2020
// Seção de Declarações 
var
nome:vetor [1..5] de caracter
contador:inteiro
inicio
// Seção de Comandos

para contador de 1 ate 5 passo 1 faca

escreva ("insira o ", contador, "  nome: ")
leia (nome[contador])
fimpara


escreval ("Esses foram os nomes digitados: ")
para contador de 1 ate 5 passo 1 faca
escreval (nome[contador])
fimpara

escreval ("Agora os nomes digitados na ordem inversa: ")
para contador de 5 ate 1 passo -1 faca
escreval (nome[contador])
fimpara

 
fimalgoritmo
