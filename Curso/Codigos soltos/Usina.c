#include <stdio.h>
#include <stdlib.h>

void main (){

    int segundos = 0;
    float massa_usu,total_seg, massa_final;
    char resposta;

        printf ("\nInsira S para iniciar o programa!!\n");
          scanf ("%c",&resposta);

            while (resposta == 'S' || resposta == 's'){ 

               printf ("\nInsira o valor da massa: \n");
                 scanf ("%f",&massa_usu);

                    massa_final = massa_usu;

                while (massa_final >= 0.10){
                    massa_final *= 0.75;
                       segundos ++;

                        }
                         total_seg = (segundos *30) / 60;
                          printf ("\nO tempo foi de: %.2f minutos\n",total_seg);
                            
                            printf ("\nDigite S para retornar ao programa ou outra letra pra sair\n\n");
                            scanf ("%c",&resposta);

    }

}
