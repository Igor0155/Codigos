#include <stdio.h>
#include <stdlib.h>

int main (){

     //zerando quase todas as variaveis para nao vir com resto de alguma coisa
    int time, fla =0, flu = 0, bot = 0, vas = 0, outro_time =0;
      int cidade = 0, rj = 0, nit = 0, outra_cidade = 0, rj_outros = 0, nit_flu = 0;
    float salario, soma = 0, med = 0;

       printf ("\nEste programa calcula a media dos torcedores de determinados times\n");
       
     //definindo o loopin
    while (time != 0){

         //pedindo o time em que os usuarios torcem
        printf ("\nNos fale qual e o seu timao de acordo com os codigos abaixo:\n");
        printf ("Ou digite 0 para sair do programa!!!\n");
           printf ("1 - Fluminense\n");
              printf ("2 - Botafogo\n");
                printf ("3 - Vasco\n");
                  printf ("4 - Flamengo\n");
                    printf ("5 - Outros\n");
                      scanf ("%i", &time);
                        
                           //encerra o programa quando digita 0
                          if (time == 0){
                            break;
                          }

           //pedindo o salario    
          printf ("\nInsira o valor do seu salario:\n");
            scanf ("%f",&salario);

                  //switch para armarzena os times nas variaveis deles
                 switch(time){

                    case 1:
                      flu += 1;
                        break;

                    case 2:
                      bot += 1;
                       //somando o salario dos torcedores do botafogo
                      soma += salario;
                        break;

                    case 3:
                      vas += 1;
                        break;

                    case 4:
                      fla += 1;
                        break;

                    case 5:
                      outro_time += 1;
                        break;
                }

                    //pedindo a cidade
                   printf ("\nAgora nos informe onde voce mora de a cordo com as cidades abaixo:");
                      printf ("\n1 - Rio de  Janeiro\n");
                        printf ("2 - Niteroi\n");
                          printf ("3 - Outras Cidades\n");
                            scanf ("%i", &cidade);

                          //armarzenando as cidades
                         if (cidade == 1 ){

                            rj += 1;
                         } 
                            else if (cidade == 2){
                               
                              nit += 1;

                            }
                                else if (cidade == 3){

                                  outra_cidade += 1;
                                }    
                                     // armazenando quantos torcedores sao do Rj e torcem para outro time
                                    if (cidade == 1 && time == 5)
                                      rj_outros += 1;

                                       // armazenando os torcedores do fluminense e que mora em niteroi 
                                      if (cidade == 2 && time == 1)
                                        nit_flu += 1;
                                                                  
    }
       //printando o numero de torcedores por clube
      printf ("\nO Numero de torcedores do Fluminense sao: %i",flu);
        printf ("\nO Numero de torcedores do Botafogo sao: %i",bot);
          printf ("\nO Numero de torcedores do Vasco sao: %i",vas);
            printf ("\nO Numero de torcedores do Flamengo sao: %i",fla);
              printf ("\nO Numero de torcedores de Outros times sao: %i",outro_time);
          
         //fazendo a media do salario dos torcedores do botafogo e printando a media
        med = soma / bot;
        printf ("\n\nA media do Salario dos Torcedores do Botafogo sao: %.2f",med);
          printf ("\nO numero de Torcedores de outros times no RJ sao: %i",rj_outros);
            printf ("\nO numero de pessoas de Niteroi Torcedoras do Fluminense sao: %i",nit_flu);


      return 0;
}