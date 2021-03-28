algoritmo "Matrix"
// Função :
// Autor :
// Data : 20/11/2020
// Seção de Declarações 
var
matrix: vetor[0..3,0..2] de real
linha,coluna:inteiro

inicio
// Seção de Comandos

//populando a tabela


para linha de 0 ate 3 faca
    para coluna de 0 ate 2 faca
         escreva("Escreva o numero para inserir na tabela: ")
         leia (matrix[linha,coluna])
    fimpara
fimpara

escreval()
escreval(matrix[1,2])
escreval()
escreval()

//Escrever a matrix na tela
//o  segundo escrevae com L e o primeiro sem.
para linha de 0 ate 3 faca
     para coluna de 0 ate 2 faca
         se (coluna<2) entao
             escreva (matrix[linha,coluna])
             senao
             escreval (matrix[linha,coluna])
         fimse
     fimpara
fimpara



fimalgoritmo
