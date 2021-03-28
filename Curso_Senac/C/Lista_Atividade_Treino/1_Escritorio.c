#include <stdio.h>
#include <stdlib.h>

int main (){

    int code;
    float salario , reaj;

    //pedindo o codigo para o usuario
    printf ("\nDigite o codigo de acordo com o seu Cargo");
    printf ("\nCodigo 1 para Auxiliar de Escritorio");
    printf ("\nCodigo 2 para Secretario(a)");
    printf ("\nCodigo 3 para Cozinheiro(a)");
    printf ("\nCodigo 4 para Entregador(a)");
    printf ("\nCodigo: ");
      scanf ("%i", &code);

          //impedindo o usuario a digitar outro codigo      
         if(code >4){
             printf ("\nO Codigo inserido nao e valido! ");
               system ("exit");
          }

       //se codigo for 1 passa por esse while
        while(code == 1){
          printf ("\nO Cargo escolhido foi Auxiliar de Escritorio\n");
          printf ("Digite seu salario: ");
            scanf ("%f", &salario);
            
             //fazendo o calculo de 7% para o salario dele (salario + 7%) 
             reaj = salario+(salario*0.07) ;
             printf ("\nO salario com reajuste de 7%% fica: %.2f", reaj);
        return 0;
       }


        while(code == 2){
          printf ("\nO cargo escolhido foi Secretario(a)\n");
          printf ("Digite o seu Salario: ");
            scanf ("%f", &salario);


            //fazendo o calculo de 9% para o salario dele (salario + 9%) 
             reaj = salario+(salario*0.09) ;
             printf ("\nO salario com reajuste de 9%% fica: %.2f", reaj);
        return 0;
        }


        while(code == 3){
          printf ("\nO cargo escolhido foi Cozinheiro(a)\n");
          printf ("Digite o seu Salario: ");
            scanf ("%f", &salario);

             reaj = salario+(salario*0.05);
             printf ("\nO salario com reajuste de 5%% fica: %.2f", reaj);
        return 0;
       }


        while(code == 4){
          printf ("\nO cargo escolhido foi Entregador(a)\n");
          printf ("Digite o seu Salario: ");
            scanf ("%f", &salario);

             reaj = salario+(salario*0.12) ;
             printf ("\nO salario com reajuste de 12%% fica: %.2f", reaj);
        return 0;
        }


    return 0;

}
