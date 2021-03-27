#include <stdio.h>
#include <stdlib.h>

void main ()
{

    float num ,soma = 0.0;
    int code, i;
    float mult, soma_mult = 1.0;

   //menu para o usuario
    printf ("\nInsira o Codigo da Operacao Desejavel:");
      printf ("\n1 - Soma");
        printf ("\n2 - Multiplicacao");
          printf ("\nou -999 Para Sair do Programa:\n");
             scanf ("%i", &code);
            
              //impedindo que o usuario digite outro codigo alem dos presentes
                if (code != 1 && code != 2 && code != -999)
                {
                    printf ("\nCodigo invalido Tente de Novo!!!\n");
                      return main();
                }
                    else if (code == -999)
                    {
                       system ("exit");
                    }

    //entrando no loop
    while(code == 1 )
    {
       
        printf ("\nInsira os Numeros ou -999 para Sair:  \n");
          scanf ("%f",&num);
          
           //se o numero nao for o -999(sair) ele vai ta num loop infinito
            if (num != -999)
            {
                 
                 soma += num;
            }
                //quando o usuario digitar -999 ira aparecer a soma dos numeros
                else
                { 
                   
                   printf ("\nO Total deu : %.1f\n\n", soma);
                    
                    //pergunta se o usuario deseja fazer outra operação ou sair do programa
                    printf ("Deseja Fazer outra Operacao? 1 - Sim ou -999 para Nao: \n");
                      scanf ("%i", &i);
                        
                          if (i == 1)
                          {

                            return main();
                          }  
                              else if(i == -999)
                              {
                                break;
                              }
                }

                  if (soma > num)
                  {
                     //aparece o resultado apos 2 imput
                    printf ("\n = %.1f\n", soma);
                  }
        
    }
      while(code == 2 )
      {

         //pedindo os numeros para multiplicar
        printf ("\nInsira os Numeros ou -999 para Sair:  \n");
          scanf ("%f",&mult);
          
            if (mult != -999)
            {
                 
                 soma_mult *= mult;
            }
                // quando o usuario digitar -999 ira aparecer a soma da multiplicaçao dos numeros digitados
                else if (mult == -999)
                { 
                
                   printf ("\nO total deu : %.1f\n\n", soma_mult);
                     
                       //perguntar para o usuario se deseja fazer outra opercçao ou sair do programa!!!
                       printf ("Deseja Fazer outra Operacao? 1 - Sim ou -999 para Nao: \n");
                          scanf ("%i", &i);
                        
                             //se ele quiser fazer outra operação ira retornat ao menu
                            if (i == 1)
                            {

                              return main();
                            }  
                                 //se nao ira sair do programa
                                else if(i == -999)
                                {
                                  break;
                                }
                }

                    if (soma_mult > mult)
                    {
                      printf ("\n = %.1f\n",soma_mult);
                    }
                          
      }



}
