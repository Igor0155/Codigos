#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hipo (float cateto1, float cateto2,float hipotenusa)
{
    hipotenusa = sqrt( pow(cateto1,2) + pow (cateto2,2));

      printf ("\nA hipotenusa dos catetos %.2f e %.2f e: %.2f\n\n",cateto1, cateto2, hipotenusa);
}

 int main ()
{
    float num1 ,num2, soma;

      printf ("\nInsira o Primeiro cateto: \n");
        scanf ("%f",&num1);
      
          printf ("\nInsira o Segundo cateto:\n");
            scanf ("%f",&num2);

            hipo(num1,num2,soma);

    return 0;
}
