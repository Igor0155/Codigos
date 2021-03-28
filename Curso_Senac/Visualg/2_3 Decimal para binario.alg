algoritmo "Decimal para binario"
// Função :
// Autor :
// Data : 22/11/2020
// Seção de Declarações 
var
num : inteiro
result : caracter
rest: inteiro

inicio
// Seção de Comandos 


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
escreval ("O Numero decimal (",rest, ") O  Binario dele é: ", result)
escreval()
escreval ("=========================================================")

fimalgoritmo


