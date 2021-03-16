#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main (){
     
     UINT CPAGE_UTF8 = 65001;
     UINT CPAGE_DEFAULT = GetConsoleOutputCP();

     SetConsoleOutputCP(CPAGE_UTF8);

     int usuario, dias;
     char livro [30];

       printf ("\nDigite o nome do livro que deseja pegar: \n");
         fgets (livro,30,stdin);
           //pedindo ao usuario qual ele e 
           printf ("\nAgora nos informe qual usuario você eh \n1-Aluno \n2-Professor \nDigite:");
             scanf ("%i", &usuario);

             switch (usuario){
                 case 1:
                 printf ("\nO Livro: %sPrecisa ser devolvido dentro de 3 (três) dias!\n\n",livro);
                 break;

                 case 2:
                 printf("\nO Livro: %sPrecisa ser devolvido dentro de 10 (dez) dias!\n\n",livro);
             }
           return 0;

           
}