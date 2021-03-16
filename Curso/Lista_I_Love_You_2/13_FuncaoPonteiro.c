#include <stdio.h>
#include <stdlib.h>

void funcao_atualizar (int vetor[10],int num, int *ponteiroF)
{
    int i;

      ponteiroF = &num;
      
        for (i = 0; i < 10; i++)
        {
            vetor[i] = *ponteiroF;
            
              printf ("\nO valor da %i posicao do vetor e: %i",i,vetor[i]);
        }
      
    printf("\n");
      

}
int main ()
{
    int num1,vetor1[10],*P;

      printf ("\nInsira um numero: \n");
        scanf ("%i", &num1);

          funcao_atualizar (vetor1,num1,*P);
        
    return 0;
}