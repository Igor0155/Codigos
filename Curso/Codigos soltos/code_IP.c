#include<stdio.h>
#include <math.h>

int main (){
    int num1,num2,num3,num4 ;
    long result;

    

         printf ("\nOs numeros tem que ser de 0 a 255 \nInsira o 1 valor: \n");
         scanf("%i",&num1);

           if (num1 < 0 && num1 >255)
           {
             printf ("\n%i numero incorreto!!!\n\n",num1);
             system("exit");
          }

         printf ("\nInsira o 2 valor: \n");
         scanf("%i",&num2);

           if (num2 < 0 && num2 >255){
             printf ("\n%i numero incorreto!!!\n\n",num2);
             system("exit");
         }

         printf ("\nInsira o 3 valor: \n");
         scanf("%i",&num3);

           if (num3 < 0 && num3 >255){
             printf ("\n%i numero incorreto!!!\n\n",num3);
             system("exit");
         }

         printf ("\nInsira o 4 valor: \n");
         scanf("%i",&num4);

           if (num4 < 0 && num4 >255){
             printf ("\n%i numero incorreto!!!\n\n",num4);
             system("exit");
         }

           if (num1 >= 0 && num1 <= 256){
               printf ("\nIP legivel para human: %i.",num1);
                 
            }
            if (num2 >= 0 && num2 <= 256){
                printf ("%i.",num2);

            }
            if (num3 >= 0 && num3 <= 256){
                printf ("%i.",num3);

            
            }if (num4 >= 0 && num4 <= 256){
                printf ("%i",num4);

            } 

          printf("\n");
            result = pow (num1,256) + pow(num2,256) +pow (num3,256) +pow (num4,256);
            

            printf ("\nEsse IP em 32 Bits e: %lu\n\n",result);
     
  

    return 0;

}