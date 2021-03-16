#include <stdio.h>
#include <stdlib.h>


void main(){
    
    int i,  vetor[6];


    for (i = 1; i <= 5; i++ ){
        printf ("Insira o %i numero: ",i);
        scanf ("%i",&vetor[i]);
    
    }
    int maior = 0;
    maior = vetor[0];

    for (i = 1; i < 5; i++)
    {
    if (maior < vetor[i])
        maior = vetor[i];
    }
         printf ("Maior = %i \n",maior);


}
