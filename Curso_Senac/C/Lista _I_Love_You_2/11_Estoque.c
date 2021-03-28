#include <stdio.h>
#include <stdlib.h>

int main()
{
    int estoque[5][5] = { {150,0,100,150,200},{200,300,230,100,90},{250,300,0,200,150},{300,100,90,450,0},{350,300,400,250,200} };
    int i,j,produto,armazem,quantidade,controle = 0;

    while(controle == 0)
    {
      //printando a tabela na tela 
      printf("\n\n");
    
          for (i = 0; i< 5; i++)
            printf("     PRD_%i",i+1);

              for (i = 0; i < 5; i++)
              {
                printf("\nARM_%i    ",i+1);

                  for (j = 0; j< 5; j++)
                  {
                    printf("%i \t  ",estoque[i][j]);
                  }
              }
            printf("\n");

      //zerando para nao vir com resto
      produto = 0;
      armazem = 0;
      quantidade = 0;

      //pedindo a localização do produto
       printf ("\nNos informe qual o produto que deseja retirar < 1 - 5 > ou digite -999 para Sair:\n");
         scanf ("%i",&produto);

          if(produto == -999)
          {
            break;
          }

            printf ("\nAgora nos informe de qual armazem: \n");
              scanf ("%i",&armazem);
                printf ("\nNos Informe a quantidade: \n");
                  scanf ("%i",&quantidade);

                    produto -= 1;
                    armazem -= 1;
                  
                        //retirando a quantidade especifica do estoque 
                        estoque[armazem][produto] -= quantidade;

                            if( estoque[armazem][produto] < 0 )
                            {
                              printf("\nEstoque com quantidade insuficiente para atender ao pedido\n\n");
                              break;
                            }
                                else if ( quantidade >= estoque[armazem][produto] )
                                {
                                  printf ("\nQuantidade informada ja foi separada do estoque!!!\nQuantidade no estoque = %i\n",estoque[armazem][produto]);
                                }

    }

  return 0;
       
}