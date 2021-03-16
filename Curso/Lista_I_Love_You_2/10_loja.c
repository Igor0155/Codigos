#include <stdio.h>
#include <stdlib.h>


int main ()
{
    float loja[12][5],soma_mes=0,soma_ano,soma_pr1 = 0,soma_pr2 =0,soma_pr3=0,soma_pr4=0,soma_pr5=0;
    int i,j;

        for (i = 0; i < 12; i++)
        {
            printf ("\nInsira o total dos produtos vendido no mes %i\n",i+1);
             for (j = 0; j < 5; j++)
             {
                 printf ("\nTotal do %i produto: \n",j +1);
                   scanf ("%f",&loja[i][j]);

             }
        }
       system ("cls || clean");

          for (i = 0; i < 12; i++)
          {
            soma_mes = 0;

            for (j = 0; j < 5; j++)
            {
                soma_mes += loja[i][j];
                 soma_ano += loja[i][j];
            }

            printf ("\nO total vendido do mes %i foi: R$ %.2f\n",i +1, soma_mes);
            
                soma_pr1 += loja[i][0];
                  soma_pr2 += loja[i][1];
                    soma_pr3 += loja[i][2];
                      soma_pr4 += loja[i][3];
                        soma_pr5 += loja[i][4];
        }

        printf ("\nO total de vendas do produto 1 e: R$ %.2f \n", soma_pr1);
          printf ("\nO total de vendas do produto 2 e: R$ %.2f \n", soma_pr2);
            printf ("\nO total de vendas do produto 3 e: R$ %.2f \n", soma_pr3);
              printf ("\nO total de vendas do produto 4 e: R$ %.2f \n", soma_pr4);
                printf ("\nO total de vendas do produto 5 e: R$ %.2f \n", soma_pr5);
                  printf ("\nOtotal de vendas produtos no ano foi: R$ %.2f \n\n",soma_ano);

    return 0;
}