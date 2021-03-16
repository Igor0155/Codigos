#include <stdio.h>
#include <stdlib.h>


void main ()
{

    float matriz[7][10],hora;
    int dia,i,j,controle;
    int j1=0,j2=0,j3=0,j4=0,j5=0,j6=0,j7=0;

       for (i = 0; i < 7; i ++)
       {
           for (j = 0; j < 10; j ++){
               matriz[i][j]=0;
           }
       }

       while (controle == 0)
       {
           printf ("\nNos informe o dia que deseja viajar \n1 - Domingo \n2 - Segunda\n3 - Terca\n4 - Quarta\n5 - Quinta\n6 - Sexta \n7 - Sabado\n");
             scanf("%i",&dia);

               if(dia < 1 && dia > 7)
               {
                   printf ("\n\nOpcao Invalida!!!\n\n");
                   break;
               }

             printf ("\nAgora nos informe o horario de saida:\n");
               scanf ("%f",&hora);

               switch(dia){

                   case 1:
                   matriz[dia-1][j1] = hora;
                   j1++;
                   break;

                   case 2:
                   matriz[dia-1][j2] = hora;
                   j2++;
                   break;

                   case 3:
                   matriz[dia-1][j3] = hora;
                   j3++;
                   break;

                   case 4:
                   matriz[dia-1][j4] = hora;
                   j4++;
                   break;

                   case 5:
                   matriz[dia-1][j5] = hora;
                   j5++;
                   break;

                   case 6:
                   matriz[dia-1][j6] = hora;
                   j6++;
                   break;

                   case 7:
                   matriz[dia-1][j7] = hora;
                   j7++;
                   break;
               }

               if (j1>=10 && j2>=10 && j3>=10 && j4>=10 &&j5>=10 && j6>=10 && j7>=10)
               {
                   printf("\n\nTodos os horaios estao cheios!\n\n");
                   break;
               }
            
            
            printf ("\n\nDeseja cadastrar novamente?\n 0 - Sim\n 1 - Nao \n");
              scanf("%i", &controle);
              printf("\n\n");
       }

printf("\nTabela de horaios: \n");
       for ( i = 0; i < 7; i ++)
       {
           printf ("\nDia %i   ",i +1);
           for(j = 0; j < 10; j++)
           {
               printf ("%.2f \t", matriz[i][j]);
           }
       }
       
}