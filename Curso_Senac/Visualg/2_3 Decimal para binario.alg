algoritmo "Decimal para binario"
// Fun��o :
// Autor :
// Data : 22/11/2020
// Se��o de Declara��es 
var
num : inteiro
result : caracter
rest: inteiro

inicio
// Se��o de Comandos 


escreva ("Insira o Numero Decimal que deseja transformar em binario: ")
leia (num)

  rest <- (num)
    enquanto  (num >0) faca
       escolha (num mod 2 )
         caso 0
           result <- ("0" + result)
         caso 1
           result <- ("1" + result)
       fimescolha

      num<-(num div 2)
 fimenquanto
escreval()
escreval ("=========================================================")
escreval()
escreval ("O Numero decimal (",rest, ") O  Binario dele �: ", result)
escreval()
escreval ("=========================================================")

fimalgoritmo


