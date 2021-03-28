#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


int main (){

         //mudar a cor do terminal 
             system ("color 04");
          // Define o valor das páginas de código UTF8 e default do Windows
          UINT CPAGE_UTF8 = 65001;
          UINT CPAGE_DEFAULT = GetConsoleOutputCP();

         // Define codificação como sendo UTF-8
        SetConsoleOutputCP(CPAGE_UTF8);

    char nome[30];
    int idade,doente,alimentado;
    float peso;


//O scanf captura uma palavra apenas (captura um stream até achar um espaço em branco)
 //o fgets captura uma frase inteira (captura a stream até achar uma quebra de linha)
     printf ("\nDigite o seu Nome Completo: \n");
       fgets (nome,30,stdin);
        
         printf ("\nDigite sua Idade: \n");
           scanf ("%i",&idade);

             printf ("\nDigite seu peso: \n");
               scanf ("%f",&peso);

                 printf ("\nVocê está bem alimentado? 1 - Sim  2 - Não: \n");
                   scanf ("%i", &alimentado);

                     printf ("\nVocê está doente? 1 - Sim  2 - Não: \n");
                       scanf ("%i", &doente );
                        
                         //fazendo a comparacao dos dados de imput && == E
                        if ((idade >=16 && idade <=69) && peso >=50 && alimentado == 1 && doente == 2)
                        {
                            printf ("\n%sVocê está apto a doar Sangue!!!\n", nome);
                        }
                         else 
                          {
                            //caso os dados nao estejam nos padroes adequados o usuario nao pode doar sangue
                            printf ("\n%sVocê não está apto a doar sangue!!!\n", nome);
                          }
     return 0;
}