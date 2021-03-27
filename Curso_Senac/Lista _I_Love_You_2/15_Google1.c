#include <stdlib.h>
#include <stdio.h>

void funcao_google(int vet[3],float vet_f[3], char str[4],int *pi,float *pf,char *ps)
{
    int i;
      pi = vet;
        pf = vet_f;
          ps = str;

           for ( i= 0; i< 3; i++)
           {
              pi[i] = 2014;
                pf[i] = 9.99;
                  ps[i] = 'Y';
           }
            i = 0;
              printf ("\nOs valores dos numeros sao:");
                while(i < 3)
                {
                  printf (" %i,",pi[i]);
                    i++;
                }
                    i = 0;
                      printf ("\nOs valores dos numeros sao:");
                        while(i < 3)
                        {
                          printf (" %.2f,",pf[i]);
                            i++;
                        }
                            i = 0;
                              printf ("\nAs letras sao: ");
                                while(i < 3)
                                {
                                  printf (" %c,",str[i]);
                                    i++;
                                }
                                
}
int main ()
{
    int vet1[3], *pi1,i;
    float vet_f1[3],*pf1;
    char str1[4], *ps1;

    for ( i=0; i < 3; i++)
    {
      printf ("\nInsira o %i numero INTEIRO: \n", i +1);
        scanf ("%i", &vet1[i]);

          printf ("Insira o %i numero DECIMAL: \n", i +1);
            scanf ("%f",&vet_f1[i]);
            
              printf ("Insira a %i Letra: \n", i +1);
                fflush(stdin);
                  gets(str1);
  
    }
    
    funcao_google(vet1,vet_f1,str1,pi1,pf1,ps1);
    
  return 0;
}