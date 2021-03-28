#include <stdio.h>
#include <stdlib.h>


int main (){

   //declaração

   int peso,i, planeta; 
   float result;
   
    //menu dos usuarios

      printf ("\nEscolha os numeros equivalentes ao planeta que deseja!!!\n");
         printf ("\n1 = Mercurio\n2 = Venus\n3 = Marte\n4 = Jupter\n5 = Saturno\n6 = Uranio\n7 = Netuno \n");
          scanf ("%i", &planeta);
      
              //impedindo que o usuario digite um numero maior que 7 
              if (planeta > 7)
              {
                  printf("\nNumero Invalido digite um numero de 1 a 7!!!\n");
                    return main(); //retornando ao menu
              }
  
                  //usuario informa o seu peso
                  printf ("\nAgora escreva o seu peso: ");
                     scanf ("%i", &peso);


   
                  switch (planeta) //escolhendo o planeta desejado 
                    {

                      case 1:
                      //multiplicando gravidade do planeta pelo peso digitado
                        result = peso*0.376; 
                        printf ("\nO seu peso no Planeta mercurio e: %.2f\n",result); 
                      break;

                      case 2:
                        result = peso*0.903;
                        printf ("\nO seu peso no Planeta Venus e: %.2f \n", result); 
                      break;

                      case 3:
                        result = peso*0.380;
                        printf ("\nO seu peso no Planeta Marte e: %.2f  \n", result); 
                      break;

                      case 4:
                        result = peso*2.340;
                        printf ("\nO seu peso no Planeta Jupiter e: %.2f \n",result);
                      break;

                      case 5:
                        result = peso*1.160;
                        printf ("\nO seu peso no Planeta Saturno e: %.2f  \n", result);
                      break;

                      case 6:
                        result = peso*1.150;
                        printf ("\nO seu peso no Planeta Urano e: %.2f \n",result);
                      break;

                      case 7:
                        result = peso*1.190;
                        printf("\nO seu peso no Planeta Netuno e: %.2f \n", result);
                      break;   
                   }
  
              //menu para escolher se fica no programa ou se deseja sair!
              printf ("\nDeseja escolher outro planeta?\n");
                printf ("1 = sim");
                  printf ("\n0 = nao e sair do programa!\n");
                    scanf ("%i",&i);
             
                 //posso uar tanto o if quanto o while
                 if (i==1)
                 {
                    return main();
                 }     
                  else if (i = 0)
                  {
                    system ("exit");
                  }       
                
  return 0;
}
