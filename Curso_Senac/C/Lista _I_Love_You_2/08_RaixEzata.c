#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void raiz_exata(int num, int soma,int soma2)
{
    soma = sqrt(num);

      soma2 = soma*soma;
      
        if (soma2 == num)
        {
            printf ("\nA raiz Quadrada de %i e exata!!!\n\n",num);
        } 
           else 
           {
               printf ("\nA raiz Quadrada de %i nao e exata!\n\n",num);
           }
}
int main ()
{
    int num1;
    int raiz,potencia;

        printf ("\nInsira o numero: \n");
          scanf ("%i",&num1);

           raiz_exata(num1,raiz,potencia);
    
    return 0;
}
