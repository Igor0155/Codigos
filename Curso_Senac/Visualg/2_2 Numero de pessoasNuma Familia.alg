algoritmo "2_2 Numero de pessoasNuma Familia "
// Função :
// Autor :
// Data : 22/11/2020
// Seção de Declarações 
var
f: vetor [1..10] de inteiro   //familias
i: inteiro //indice

inicio
// Seção de Comandos]

para i de 1 ate 10 faca
   escreva ("Informe o numero de pessoas na[",i ,"] Família: ")
   leia (f[i])
fimpara

para i de 1 ate 10 faca
   se (f[i])>5 entao
     escreval()
     escreval ("A,",i ," família possue, ",f[i]," integrantes em sua familia!" )
   fimse
fimpara
fimalgoritmo
