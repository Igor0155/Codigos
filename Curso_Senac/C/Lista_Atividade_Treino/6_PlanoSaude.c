#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main (){

    system ("color 03");

    //Defina o  valor das pagina UTF8 e default do windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
     //Define condiçao em UTF8
    SetConsoleOutputCP(CPAGE_UTF8);

    char nome[30];
    int idade;

       printf ("\nInsira o seu nome completo\n");
        fgets (nome,30,stdin);
          
          printf ("\nAgora insira a sua idade: \n");
           scanf ("%i", &idade);

            
            if (idade <= 10)
            {

                printf ("\n%sVocê tera que pagar um valor de R$30,00\n\n",nome);
 
             } else if (idade >10 && idade <=29){

                 printf ("\n%sVocê tera que pagar um valor de R$60,00\n\n",nome);
 
             
             } else if (idade >29 && idade <=45){

                 printf ("\n%sVocê tera que pagar um valor de R$120,00\n\n",nome);
 
             }
              else if (idade >45 && idade <=59){

                 printf ("\n%sVocê tera que pagar um valor de R$150,00\n\n",nome);
 
             
             } else if (idade >59 && idade <=65){

                 printf ("\n%sVocê tera que pagar um valor de R$250,00\n\n",nome);
 
             }if (idade > 65){
            

                printf ("\n%sVocê tera que pagar um valor de R$400,00\n\n",nome);
            }


 return 0;
}