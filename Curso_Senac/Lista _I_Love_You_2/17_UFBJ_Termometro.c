#include <stdlib.h>
#include <stdio.h>

void converter(float kelvin[24], float faren[24], float *ponteiro)

{
    ponteiro = faren;
      int i;

        //lupin do calculo e para printar o  resultado
        for (i = 0; i < 4; i++)
        {
            //formula para conversao de kelvin para fahrenheit
            ponteiro[i] = 1.8*(kelvin[i] - 273) + 32;
              printf ("\nA conversao de %.2f, Kelvin sao: %.2f, Fahrenheit.\n",kelvin[i], ponteiro[i]);
        }
}
int main ()
{
    float  K[24],F[24],*p;
     int i;
    
        for (i = 0; i < 4; i++)
        {
            printf ("Insira a %i Temperatura em Kelvin: \n",i+1);
              scanf ("%f", &K[i]);
        }

        converter(K,F,p);

    return 0;
}