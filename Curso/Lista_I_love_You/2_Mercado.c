#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


void main(){

    //definindo o valor das paginas de codigo em UTF8 e default do windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    // define a condiçao sendo UTF8 para poder colocar a acentuação
     SetConsoleOutputCP(CPAGE_UTF8);

       int code , volume ;
      //declarando a variavel de data para o usuario poder colocar a "/" nas datas
       char data[100];
       float preco, soma;
       
       printf("\nEste programa lê um conjunto de itens de compras!\n");

         //se condiçao  for diferente de 0 ele nao para o loop
        while (code != 0){
          printf ("\nDigite 0 caso queira sair do programa!\n");
           printf ("\nInsira o codigo do produto:\n");
            scanf ("%i",&code);

              // para parar o loop o usuario tem q digitar 0 no codigo do produto
              if (code == 0){
                break;
              } 
                  //pedindo a data e essa data pode ser digitada com / no imput ex 25/12/2021
                  printf ("\nDigite a data do pedido no formato -> DD / MM / YYYY <-: \n");
                    //fflush tira o enter armarzanado na string
                    fflush(stdin);
                      gets(data);
                   
                        printf ("\nInfome o valor do produto:\n");
                          scanf ("%f",&preco);
                   
                            printf ("\nDigite a quantidade do produto:\n");
                              scanf ("%i",&volume);
                             
                               //calculo dos produtos
                                soma = preco * volume;

                                   printf ("\nO valor deu: R$%.2f\n",soma);
                                            
         } 


}