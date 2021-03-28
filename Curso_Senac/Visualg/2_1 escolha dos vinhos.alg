algoritmo "semnome"
// Função :
// Autor :
// Data : 21/11/2020
// Seção de Declarações 
var
vinho : vetor[0..3] de caracter
cv : inteiro
porcent : real


inicio
// Seção de Comandos 
para cv de 0 ate 0  faca
  escreval ("Insira [",cv,"] T, para Vinho Tinto;")
  para cv de 1 ate 1 faca
  escreval ("Insira[",cv,"] B, para Vinho Branco;")
  para cv de 2 ate 2 faca
  escreval ("Insira[",cv,"] R, para Vinho Rosa;")
para cv de 3 ate 3  faca
  escreval ("Insira[",cv,"] F, para SAIR!")
leia (vinho[cv])

fimpara
fimpara
fimpara
fimpara

porcent<-0
repita
leia (vinho[cv])

escolha vinho[cv]
caso "t"
vinho[cv]<- vinho[cv]+1

caso "b"
 vinho[cv]<- vinho[cv]+1
 
caso "r"
  vinho[cv]<- vinho[cv]+1
fimescolha
//cv<-cv + 1
ate vinho= "f"




//-------------------------------------------------




fimalgoritmo
