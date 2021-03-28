algoritmo "2_5 Numeros Impar Par"
// Função : igu dos bugs
// Autor :
// Data : 22/11/2020
// Seção de Declarações 
var
exemp :vetor [1..20] de inteiro
numpar: vetor [1..10] de inteiro
numip: vetor [1..10] de inteiro
i2, p, q: inteiro


inicio
// Seção de Comandos

para i2 de 1 ate 10 passo 1 faca
     escreval ("Insira o ",i2," numero: ")
     leia (exemp[i2])
     
     
//nao mexer daq praq cima



//bug a caminho em baixo
//para p de 1 ate 10 faca
     se exemp[i2] % 2 = 0 entao
        numpar[i2] <- exemp[i2] faca
        escreval()
            escreval("O Numero:",numpar[i2]," ele é PAR!!")
        escreval()
     fimse
     
//para q de 1 ate 10 faca
     se exemp[i2] % 2 = 1 entao
        numip[i2] <- exemp[i2]
        escreval ()
           escreval("O Numero:",numip[i2]," ele é IMPAR!!")
        escreval()
     fimse

fimpara


fimalgoritmo

