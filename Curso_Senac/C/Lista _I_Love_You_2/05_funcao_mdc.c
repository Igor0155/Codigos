#include <stdio.h>
#include <stdlib.h>

int mdc (int x, int y)
{    
    if (x == y)
    {
        return x;
    } 
       if (x < y)
       {
           return mdc(y,x);
       }
       return mdc(x - y, y);
}

void main ()
{
    int num1, num2, soma;

    printf ("\nInsira O primeiro numero: \n");
       scanf ("%i", &num1);
        
        printf ("\nInsira o segundo numero: \n");
           scanf ("%i", &num2);


           soma = mdc(num1,num2);

           printf ("O MDC entre %i e %i e: %i", num1,num2,soma);


}
