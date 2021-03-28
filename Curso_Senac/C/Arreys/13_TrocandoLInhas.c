#include <stdio.h>
#include <stdlib.h>

void main (){
    int num[5][5];
    int i,j,aux, y;

      printf ("\n\nInsira os numeros para popular a matrixx:\n");
      // pedindo para popular a tabela
      for (i = 0; i < 5; i++ )
      {
          for (j = 0; j < 5; j++)
          {
              scanf ("%i", &num[i][j]);
          }
      }
       //imprimindo a tabela 
            for (i = 0 ;i <5; i ++)
            {
                printf ("\n");
                   for (j = 0; j <5; j++)
                   {  
                       printf ("%i \t", num[i][j]);
                   }

      }
        printf ("\n\nCom a 2 linha na 5 linha \n");

        //trocando a 2 linha pela 5 e virse versa
        for (j = 0; j < 5; j++ )
        {
         aux = num[1][j];
         num[1][j] = num[4][j];
         num[4][j] = aux;
        }
            //imprimindo na tela com as linhas trocadas
           for (i = 0 ;i <5; i ++)
            {
                printf ("\n");
                   for (j = 0; j <5; j++)
                   {  
                       printf ("%i \t", num[i][j]);
                   }
            }


         printf ("\n\nAgora com a 3 coluna no lugar da 5\n");
            //Trocando a 3 coluna pela 5 e virse versa
            for (i = 0; i <5; i++)
            {
                aux = num[i][2];
                num[i][2] = num [i][4];
                num[i][4] = aux; 

            }
                   for (i = 0 ;i <5; i ++)
                   {
                       printf ("\n");
                        for (j = 0; j <5; j++)
                        {  
                           printf ("%i \t", num[i][j]);
                        }
                   }

            printf ("\n\nAgora a diagonal Pri pela diagonal Sec\n");

            i = 0;
            y = 4;
                for (j = 0; j< 5; j++)
                {
                    aux = num[i][j];
                    num[i][j] = num[y][j];
                    num[y][j] = aux;
                    y--;
                    i++;
                }

                     for (i = 0; i < 5; i++)
                     {
                         printf("\n");
                        for (j = 0; j < 5; j++)
                        {
                            printf ("%i \t", num[i][j]);
                        }
                     }

            



}