#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int  i,j , semana,ano;
    float matrix[12][4],mes = 0.0, total =0.0;

      for(i = 0; i < 12; i ++)
      {
         printf ("\n\nInforme as vendas do mes %i: \n", i+1);
         for(j = 0; j <4; j++)
         {
             printf ("Semana %i: \n", j+1);
             scanf ("%f", &matrix[i][j]);
         }
      }

      for (i = 0; i< 12; i++)
      {
          mes = 0.0;
          printf ("\nMes %i:\n", i+1);
          for (j = 0; j < 4 ; j++)
          {
              printf ("Total de vendas da %i semana foi: %.2f\n", j+1, matrix[i][j]);
              mes += matrix[i][j];
              total += matrix[i][j];
          }
           printf("\nTotal vendido no mes %d: %.2f\n", i+1, mes);
      }
     
printf("\nTotal vendido no ano: %.2f\n", total);
     
}