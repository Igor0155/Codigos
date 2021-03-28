#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

    float  va, vb, vc;
    float delta, x1, x2;

    

      printf ("\nEste programa calcula a equação de 2° Grau\n");
        printf ("Escreva os valores para fazer os calculos de A, B e C:\n");
          printf ("\nIndique o valor de A: ");
            scanf ("%f", &va);

            //impedindo a entrada do 0 e retornando ao valor de A
            if (va == 0)
            {
                printf ("\nDigite outro valor o valor 0 e invalido!!! \n");
                  //retornando para o imput do usuario!
                  return main();
            }

                printf ("\nIndique o valor de B: ");
                  scanf ("%f" ,&vb);
                    printf ("\nIndique o valor de C: ");
                      scanf ("%f", &vc);


                  //calculando o valor de x1 e x2
                  //pow calcula a potencia
                  delta = pow(vb,2) - 4* va * vc;

                    //sqrt e para calcular a raiz quadrada 
                    x1 = (-vb + sqrt (delta)) / (2*va);
                    x2 = (-vb - sqrt (delta)) / (2*va);

                      //escrevendo na tela
                      if (delta < 0)
                      {
                          printf ("\nA equacao: \n\n\" %.f^2 -4*%.f*%.f \"\n\nTem o delta negativo e nao possui raizes reais! \n",vb,va,vc);


                      } 
                          else
                          {
                            printf ("\nO valor de x1 e: %.2f", x1);
                              printf ("\nO valor de x2 e: %.2f", x2);
                          }



 return 0;
 
}
