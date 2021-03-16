#include <stdio.h>
#include <stdlib.h>


void main (){

    int barb = 0, servicos, controle = 0;
    int serv[5][3], i,j;
    float soma;


    //zerando a tabela de serviços
    for (i=0; i< 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            serv[i][j] = 0;
        }
    }

    while (controle == 0)
    {
        printf ("\nInforme qual o barbeiro <1-5> ou digite -999 Sair :\n");
          scanf ("%i", &barb);

          printf ("\n");
    
            if (barb <1 || barb >5 || barb == -999)
            {
                break;
            }

            printf ("Informe o servico\n1 - Barba <R$20,00>\n2 - Cabelo <R$30,00>\n3 - Barba + Cabelo <R$45,00>\n");
              scanf ("%i", &servicos);
            
              if (servicos >=1 && servicos <=3)
                {
                    //-1 pois matriz e de 0 a n
                    serv[barb - 1][servicos - 1]++;
                }
                  else 
                   {
                        break;
                   }
    } 
   

      printf ("\n\n");
    
      for (i = 0; i < 5; i++){
        soma = serv[i][0] * 10;
          soma += serv[i][1] * 15;
            soma += serv[i][2] * 22.5;

        printf ("\nO Barbeiro %i Recebeu: R$%.2f\n", i+1, soma);
    }

}

