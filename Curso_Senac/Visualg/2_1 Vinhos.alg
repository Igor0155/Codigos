algoritmo "2_1 Vinhos"
// Função :
// Autor :
// Data : 23/11/2020
// Seção de Declarações 
var
pt,pb,pr: real //porcentagem
ct,cb,cr,i: inteiro // vinhos e indice
vinho:caracter
inicio
// Seção de Comandos 
escreval ("Insira [T] Para selecionar o Vinho Tinto!")
escreval ("Insira [B] Para selecionar o Vinho Branco!")
escreval ("Insira [R] Para selecionar o Vinho Rosa!")
escreval ("Para Sair do Programa Aperte  a Tecla [F]!")
//==================================
i<- 0
ct <- 0
cb <- 0
cr <- 0

//-----------------------------------
repita
    leia (vinho)
escolha vinho
   caso "t"
        ct <- ct +1
   caso "b"
        cb <- cb +1
   caso "r"
        cr <- cr +1
fimescolha
  i<-i+1
   ate vinho="f"
//==============================
//porcentagem

i<- i - 1
se (i >0) entao
pt <- (ct * 100)/i)
pb <- (cb * 100)/i )
pr <- (cr * 100)/i)



escreval("Procentagem do Vinhos Tintos: ",pt:3:2,"%")
escreval("Procentagem do Vinhos Brancos: ",pb:3:2,"%")
escreval("Procentagem do Vinhos Roses: ",pr:3:2,"%")
senao
escreval ("Nenhum Vinho Inserido!!!")
fimse
 
fimalgoritmo
