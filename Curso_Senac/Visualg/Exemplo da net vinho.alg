algoritmo "semnome"
var
tv:caracter //tipo de vinho
conv:inteiro //contador de vinho
ct:inteiro //contador de tinto
cb: inteiro //contador de branco
cr:inteiro //contador de rosê
pt,pb,pr:real //porcentagem de tinto, branco e rosê
//-----------------------
inicio
// Seção de Comandos
escreval ("Digite (t) para vinho tinto")
escreval ("Digite (b) para vinho branco")
escreval ("Digite (r) para vinho rosê")
escreval ("Digite (f) para sair")
//inicialização de diversos contadores
conv <- 0
ct <- 0
cb <- 0
cr <- 0
//-----------------------
repita
leia (tv)
escolha tv
caso "t"
ct <- ct + 1
caso "b"
cb <- cb + 1
caso "r"
cr <- cr + 1
fimescolha
conv <- conv + 1
ate tv = "f"
//-------------------------
conv <- conv - 1 //descontar o finalizador "f"
se (conv > 0)entao
pt <- (ct * 100)/conv)
pb <- (cb * 100)/conv
pr <- (cr * 100)/conv
escreval ("Porcentagem de tintos = ",pt:3:2,"%")
escreval ("Porcentagem de Brancos = ",pb:3:2,"%")
escreval ("porcentagem de rosês = ",pr:3:2,"%")
senao
escreva ("Nenhum tipo de vinho fornecido!")
fimse
fimalgoritmo
