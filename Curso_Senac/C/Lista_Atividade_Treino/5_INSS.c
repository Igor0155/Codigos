#include <stdio.h>
#include <locale.h>
#include <windows.h>


int main(){

    //Defina o  valor das pagina UTF8 e default do windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    //Define condiçao em UTF8
    SetConsoleOutputCP(CPAGE_UTF8);

     float salario, inss ;

      //pedindo o salario para o usuario
      printf ("\nInsira o valor do seu Salário para que possamos descontar o INSS: ");
      scanf ("%f",&salario);
  
        //definindo a condiçao para o salario
        if ((salario >600) && (salario <= 1200)){

            //calculo do desconto de 20% do INSS
             inss = salario - (salario*0.2) ;
              printf("\nO valor do salário com o desconto de 20%% e: %.2f \n\n", inss);
    
        }
            else if ((salario >1200) && (salario <= 2000)){

                 inss = salario - (salario*0.25);
                  printf ("\nO valor do salário com o desconto de 25%% e: %.2f \n\n",inss);

            }   
                else if (salario > 2000){

                    inss = salario -(salario*0.3);
                     printf ("\nO valor do salário com o desconto de 30%% e: %.2f \n\n",inss);
                
                }                   
                     else if (salario <= 600){

                         printf ("\nO INSS não desconta do seu salario!!!\n\n");
                     }

    return 0;

}