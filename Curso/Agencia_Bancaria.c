#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main ()
{

    //definindo o valor das paginas de codigo em UTF8 e default do windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    // define a condiçao sendo UTF8 para poder colocar a acentuação
    SetConsoleOutputCP(CPAGE_UTF8);

   //zerando as variaveis para nao vir com resto de alguma coisa
    int conta =  0, cliente_conta = 0, negativo = 0 ;
    float saldo ,soma = 0;
    char nome[40];

      printf ("\nEste programa armazena as contas dos clientes de uma Agência Bancaria e Informa o estado do saldo sendo Negativo ou Positivo\n");

    //Definindo o loopin que vai ate 10mil
    while (cliente_conta < 10000)
    {
        printf ("\nInsira o número de sua conta ou digite -999 para sair:\n");
          scanf ("%i",&conta);

            //uma forma do usuario cancelar o loopin para sair do programa
            if (conta == -999){
                break;
            }
              //pedindo o nome do usuario e armazenando numa string e tirando o enter que fica armazenado na string
              printf ("\nInsira o seu nome:\n");
               fflush (stdin);
                  gets(nome);

                    printf ("\nAgora nos informe o seu saldo\n");
                      scanf ("%f",&saldo);
                    
                        //somando o saldo em cada loopin e armazenando em na variavel "soma"                    
                        soma += saldo;

                          if (saldo < 0){
                            printf ("\nA conta %i do cliente: %s tem como saldo: %.2f Negativos\n", conta, nome, saldo );
                             
                              // cada vez que o saldo for negativo a variavel "negativo" recebe e soma 1 nela 
                              negativo+= 1;
                         }  
                            else {
                              printf ("\nA conta %i do cliente: %s tem como saldo: %.2f Positivos\n", conta, nome, saldo );
                            }
                                // cada vez que o loppin e executado a  variavel "Cliente_conta" e encrementado em 1        
                                cliente_conta++;
  }
                                   //printando o total pedido no fim do loopin  ou qundo o usuario digitar -999
                                    printf ("\nO total de Contas da agência são: %i",cliente_conta);
                                      printf ("\nO total de Contas que tem o saldo negativo são: %i\n", negativo);
                                        printf ("O saldo da agência é: %.2f\n\n", soma);
        
    
  return 0;

}
