#include <stdio.h>
#include <stdlib.h>

void reajuste_saldo(float saldo,float reajuste ,float calculo){

    calculo = saldo + (saldo* reajuste /100);

      printf ("\nO novo saldo com um reajuste de %.f%% e: %.2f\n\n ", reajuste, calculo);
}

int main(){
    float saldo1, reajuste1,soma;

    printf ("\nInsira o seu saldo:\n");
      scanf("%f",&saldo1);

      printf ("\nAgora nos informe o reajuste:\n");
        scanf("%f",&reajuste1);

        reajuste_saldo(saldo1,reajuste1,soma);


 return 0;

}