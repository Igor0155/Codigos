#include <stdio.h>
#include <stdlib.h>


int main (){

    //DEFININDO AS VARIAVEIS EM 0  PARA NAO VIR COM RESTO
    int energia = 0, code, cliente ,med = 0, med_1 = 0, med_2 = 0,med_3 = 0,totalconsumo = 0;
    float code_1 = 0, code_2 = 0, code_3 = 0,con1 = 0,con2 = 0,con3 = 0,totalcon = 0;

      printf ("\nEste programa calcula A quantidade de kWh mensal dos medidores de consumo!!!\n");
        
         //Definindo o loopin
        while (cliente != 0){

            printf ("\nInsira o seu numero de consumidor ou Digite 0 para sair:\n");
              scanf ("%i",&cliente);
                 
                 //definindo 0 para sair do programa
                if (cliente == 0){
                    break;
                }

                printf ("\nInsira a quantidade de kWh consumidos durante o mes:\n");
                  scanf ("%i",&energia);

                    printf ("\nInsira o codigo que melhor se encaixa:\n");
                      printf ("1 - Residencial \n");
                        printf ("2 - Comercial \n");
                          printf ("3 - Industrial \n");
                            scanf ("%i",&code);

                                //defindo em qual switch ira fazer a operação
                              switch (code)
                              {
                                   
                                  case 1:
                                      //calculo do custo
                                    code_1 = energia* 0.3;
                                      printf ("\nO custo de kWh do cliente %i e: R$%.2f\n", cliente, code_1);
                                      //calculando o custo do cliente 1
                                      con1 += code_1;
                                        
                                        // armarzenando a media do 1° codigo                                      
                                        med_1 += energia;
                                  break;

                                  case 2:
                                    code_2 = energia* 0.5;
                                      printf ("\nO custo de kWh do cliente %i e: R$%.2f\n", cliente, code_2);
                                     
                                      //calculando o custo do cliente 2
                                      con2 += code_2;
                                        // armarzenando a media do 2° codigo   
                                        med_2 += energia;
                                  break;

                                  case 3:
                                    code_3 = energia* 0.7;
                                      printf ("\nO custo de kWh do cliente %i e: R$%.2f\n", cliente, code_3);
                                      
                                      //calculando o custo do cliente 3
                                      con3 += code_3;
                                      med_3 += energia; 
                                  break;  
                                  
                              }
            //calculando a media do 1° e 2°  codigo
            med += med_1 + med_2 ;
            totalconsumo += med_1 + med_2 + med_3;
            
        }
         //printando o total e a media dos consumos e custos 
        printf ("\nO total do custo dos tres consumidores e:\nTipo - 1: R$%.2f\nTipo - 2: R$%.2f\nTipo - 3: R$%.2f\nTotal: R$%.2f  \n",con1,con2,con3, con1+con2+con3 );
            printf ("\nA media dos consumos do tipo 1 e 2 sao: %i\nO consumo total e: %i \n\n", med, totalconsumo);


 return 0;


}