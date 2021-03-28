#include <stdio.h>
#include <stdlib.h>

void main (){

    float salario[10], reaj[10];
    int i;

      printf("\nEste programa calcula o salario com um reajuste de 8%%\n");
    //pedindo o salario
    for (i = 0; i < 10; i++)
    {
        printf ("\nInsira o %i salario: ",i+1);
          scanf ("%f", &salario[i]);

            //calculo do reajuste
            reaj[i] = (salario[i] * 0.08);
    }
        //imprimindo o novo salario    
        for (i=0; i<10; i++)
        {   
            //colocando o reajuste no salario
            reaj[i]=reaj[i] + salario[i];
            printf ("\nO %i salario de R$%.2f Agora ficou: R$%.2f\n",i+1,salario[i],reaj[i]);
        }
    printf("\n\n");

}