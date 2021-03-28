#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


int main (){

  system ("color 03");
    
    //Defina o valor das paginas de codigos UTF8 e default do windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT  = GetConsoleOutputCP();
   
    //Define condiçao em UTF8
    SetConsoleOutputCP(CPAGE_UTF8);

    //defininco as variaveis em 0 para nao ir com resto no loop
    int num1 = 0, num2 = 0, n1 = 0,n2 = 0;
    int soma = 0 ,i = 0;

     //pedindo os numeros para o usuario
     printf ("\nInsira o 1° numero: \n");
       scanf ("%i", &num1); 

         printf ("\nInsira o 2° numero: \n");
           scanf ("%i", &num2);


              // se os valores de num1 for menor ele armazena em "n" 
              if (num1 < num2){
                  n1 = num1;
                  n2 = num2;
                }
                //se num1 nao for menor ele coloca em "n"  
                   else 
                   {
                     n1 = num2;
                     n2 = num1;
                   }
                   // definindo ate quando ira repetir o n1 
                       while (i != n1){
                        soma += n2;
                      

                        printf ("+ %i ",n2);
                         i= i+1;
                      }
                         printf ("= %i\n\n",soma);
return 0;
}
