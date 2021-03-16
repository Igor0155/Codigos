#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int matrix[3][5], i,j, somalinha[3];

      printf ("\nInsira os numero para popular a matriz:\n");
      for (i = 0; i < 3; i ++)
      {
          somalinha[i] = 0;
      }

      for (i = 0; i < 3; i ++)
      {
          for (j = 0; j < 5; j ++)
          {
              scanf("%i",&matrix[i][j]);
          }
      }

      for (i = 0; i < 3; i ++)
      {
          for (j = 0; j < 5; j ++)
          {
              somalinha[i] += matrix[i][j];
          }
      }

    printf ("\n\nSoma das Linhas:\n");
    
      for ( i = 0; i < 3; i ++)
      {
        printf ("\n%i \t", somalinha[i]);   
      }
      printf("\n\n");



}