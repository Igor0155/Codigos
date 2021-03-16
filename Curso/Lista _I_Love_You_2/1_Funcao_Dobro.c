#include <stdio.h>
#include <stdlib.h>

float soma3 (float num1 ,float num2, float num3)
{

  printf ("\nO dobro do Numero 1 e: %.1f", num1 *2);
    printf ("\nO dobro do Numero 2 e: %.1f", num2 *2);
      printf ("\nO dobro do Numero 3 e: %.1f", num3 *2);

return 0;

}

void main(){

    float n1,n2,n3;

    printf ("\nInsira o 3 numeros: \n");
      scanf ("%f %f %f",&n1, &n2, &n3);

       soma3(n1,n2,n3);
}


