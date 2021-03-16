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

          int code, viagem;

            //definindo a cor do terminal
          system ("color 03");

    //definindo o codigo do usuario
    printf ("\nInforme o destino da viagem de acordo com os códigos escritos abaixo:");
      printf ("\n1-Região Norte \n");
        printf ("2-Região Nordeste\n");
          printf("3-Região Centro-oeste\n");
            printf ("4-Região Sul\n");
             scanf ("%i", &code);
               
               if (code >4 ){ 
                   printf ("Código invalido!!!");
                   system ("exit");
               }

             while (code == 1){
                 //pedindo pro usuario informar se tem retorno
                 printf ("\nA viagem possui retorno? 1-sim 0-não: ");
                  scanf ("%i", &viagem);

                  if (viagem == 1){
                      printf ("\nO preço da passagem e: 900,00");
                  }else {
                      printf ("\nO preço da viagem e: 500,00");
                  }
                 return 0;
             }

             while (code == 2){
                 printf ("\nA viagem possui retorno? 1-sim 0-não: ");
                  scanf ("%i", &viagem);

                  if (viagem == 1){
                      printf ("\nO preço da passagem e: 650,00");
                  }else {
                      printf ("\nO preço da viagem e: 350,00");
                  }
                 return 0;
             }

             while (code == 3){
                 printf ("\nA viagem possui retorno? 1-sim 0-não: ");
                  scanf ("%i", &viagem);

                  if (viagem == 1){
                      printf ("\nO preço da passagem e: 600,00");
                  }else {
                      printf ("\nO preço da viagem e: 350,00");
                  }
                 return 0;
             }

             while (code == 4){
                 printf ("\nA viagem possui retorno? 1-sim 0-não: ");
                  scanf ("%i", &viagem);

                  if (viagem == 1){
                      printf ("\nO preço da passagem e: 550,00");
                  }else {
                      printf ("\nO preço da viagem e: 300,00");
                  }
                 return 0;
             }

             return  0;             


}