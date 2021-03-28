algoritmo "semnome"
// Função :
// Autor :
// Data : 18/11/2020
// Seção de Declarações 
var
nota : vetor [1..5] de real
contador:inteiro
inicio

para contador de 1 ate 5 passo 1 faca
     escreval ("insira a", contador , "a nota")
     leia (nota[contador])
     
     enquanto (nota[contador] <0) ou (nota [contador]>10) faca
        escreval ("A", contador, ".a nota esta invalida. digita uma nota entre zero e dez")
        leia (nota[contador])
      fimenquanto
fimpara
fimalgoritmo
