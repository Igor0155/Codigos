#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main (){

    // Define o valor das páginas de código UTF8 e default do Windows
   UINT CPAGE_UTF8 = 65001;
   UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    // Define codificação como sendo UTF-8
   SetConsoleOutputCP(CPAGE_UTF8);

       int salario, credito;
       float prestacao;


         printf ("\nInforme o valor do seu Salário Bruto: \n");
          scanf ("%i", &salario);

           printf ("\nInforme a prestaçao");
             scanf ("%f",&prestacao);
 
              
               if (prestacao > (salario*0.3) ){
                 printf("\nEmprestimo Negado\n\n");
               }
                else {
                   printf("\nEmprestimo Aceito\n\n");
                 }
          
 return 0;
}
