#include <stdio.h>
#include <stdlib.h>

void main (){
    int matrx_1[3][4], matrx_2[3][4];
    int i,j;

    printf ("\nInsira os valores: \n");

    for (i = 0; i < 3; i ++)
    {
        for(j = 0; j < 4; j ++)
        {
            scanf ("%i", &matrx_1[i][j]);

            matrx_2[i][j] = matrx_1[i][j] *3;
        }
    }

     printf ("\nresult:\n");
    for (i = 0; i < 3; i ++)
    {
        printf ("\n");
        for (j = 0; j <4; j ++)
        {
            printf ("%i \t", matrx_2 [i][j]);
        }
    }
    printf ("\n\n");
}
