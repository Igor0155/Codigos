algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 23/11/2020
// Se��o de Declara��es 
var
  num       : vetor [0..7] de inteiro
  aux,i,p,q : inteiro
inicio
  q:=1
  para i de 0 ate 7 faca
    escreva("Informe o",i+1,"� n�mero : ")
    leia(aux)
    se aux % 2 <> 0 entao
      se p < 8 entao
        num[p]:=aux
        p:=p+2
      fimse
    senao
      se q < 8 entao
        num[q]:=aux
        q:=q+2
      senao
        escreval("Posi��o Fora De Faixa")
      fimse
    fimse
  fimpara
  escreval
  para i de 0 ate 7 faca
    escreva(i,"  Posi��o Do Vetor Tem O N�mero ",num[i])
    se num[i]%2=0 entao
      escreval(" <-- Par")
    senao
      escreval(" <-- � mpar")
    fimse
  fimpara
fimalgoritmo
