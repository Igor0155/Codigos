#include <stdio.h>
#include <stdlib.h>


void main (){

    int matx[5][5];
    int i,j;

    printf ("\nInsira Os numeros: \n");
    for (i = 0; i <5; i ++){
        
        for (j = 0; j < 5; j++){
        
          scanf ("%i",&matx[i][j]);
        
        }
    }

    for (i = 0; i < 5; i ++){

        printf ("\n\t");
        
          for (j = 0; j< 5; j++){
        
              printf (" %i ", matx[i][j]);
          }
    }

    
}
