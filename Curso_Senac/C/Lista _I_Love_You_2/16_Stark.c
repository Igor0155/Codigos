#include <stdio.h>
#include <stdlib.h>

void stark_industries(float produtos[15],  float reajuste, float *ponteiro,float aux[15])
{
  int i;

    //atribuindo o vetor no ponteiro 
      ponteiro = produtos;
      reajuste = 4.78;
      
        for(i = 0; i < 15; i ++)
        {
            //pegando o valor inicial do produto
            aux[i] = ponteiro[i];
            
              //calculando o reajuste 
              ponteiro[i] += (ponteiro[i]* reajuste/100);
        }
                for(i = 0; i < 15; i ++)
                {
                    printf ("\nO valor do %i produto que era: R$ %.2f passou a ser: R$ %.2f\n",i+1,aux[i], ponteiro[i]);
                }
              printf ("\n\n");
        }
int main ()
{
    float V_produts[15],Vaux[15],*p,Vreajuste;
    int i;

      for (i = 0; i < 15; i++)
      {
          printf ("Insira o valor do %i produto: \n",i+1);
            scanf ("%f", &V_produts[i]);
      }

        stark_industries(V_produts,Vreajuste,p,Vaux);

    return 0;
}
