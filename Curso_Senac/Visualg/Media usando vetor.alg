algoritmo "Media usando vetor"
// Função :
// Autor :
// Data : 19/11/2020
// Seção de Declarações 
var
nota: vetor[1..5] de real
contador: inteiro
media, acumulador:real
inicio
// Seção de Comandos
acumulador <- 0

para contador de 1 ate 5 passo 1 faca
     escreval("insira a ", contador, " .a nota")
     leia (nota[contador])
     
     enquanto (nota[contador] <0) ou (nota[contador] >10) faca
        escreval ("A ",contador," .a nota esta invalida. Digite uma nota entre zero  e dez")
        leia (nota[contador])
     fimenquanto
fimpara

para contador de 1 ate 5 passo 1 faca
     acumulador <-acumulador + nota[contador]
fimpara

media <-acumulador/5

se(media<4) entao
   escreval ("Aluno REPROVADO com media", media)
senao
se (media<6 ) entao
escreval ("aluno EM EXAME com media", media)
senao
escreval("Aluno APROVADO com media",media)
fimse
fimse

fimalgoritmo
