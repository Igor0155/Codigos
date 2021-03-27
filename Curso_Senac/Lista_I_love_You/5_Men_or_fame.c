#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main (){

    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
     // Define codificação como sendo UTF-8
      SetConsoleOutputCP(CPAGE_UTF8);

    
     int i,sexo, idade;
     char nome[200];
 

      printf ("\nEste programa Imprime os Nomes das pessoas do sexo masculino!!!\n\n");

        //definindo o for de de quantos usuarios vao entrar
         for (i=0; i<=20; i++){

             printf ("Escreve o seu Nome\n");
              fflush(stdin);
                gets (nome);

                   printf ("\nInsira a sua idade: \n");
                     scanf ("%i",&idade);

                        printf ("\nInsira o numero equivalente a o que você é 1-Homem  2-Mulher.\n");
                          scanf ("%i",&sexo);
         
                            //definindo quem deve ser imprimido 
                            if (idade > 21 && sexo == 1){

                              printf ("\n\n%s Você tem %i anos e é Homem!!!\n\n",nome,idade);
                            }

                               
         }
      return 0;

}