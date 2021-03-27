#include <stdio.h>

int main (void){

    int n = 0 ;


    printf ("insira um numero: ");
    scanf ("%i", &n);


    if (n <0){


        printf ("\nO valor absoluto de %i e: %i\n", n, -n );

        printf ("\nO valor de N e: %i", n);

    }
   



    return 0;

}