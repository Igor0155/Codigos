algoritmo "Media dos alunos"


var
// aqui eu declaro as variaveis do programa
nota: vetor[1..5] de real
media:real
contador:inteiro

inicio
para contador de 1 ate 5 passo 1 faca
escreval ("ubsura sua nota")
leia (nota[contador])


media<-nota /5

escreva("Sua Media E:")
escreval(media)

se (media >=7) entao
escreva ("Aluno Aprovado!")
senao
escreva ("Aluno Reprovado!")

fimse


fimalgoritmo
