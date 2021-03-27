#include <stdio.h>
#include <stdlib.h>

int main (){
    int tabela[3][3];
    int i,j,soma=0;

    printf ("Insira os numeros para popular: \n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%i", &tabela[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma = soma+ tabela[i][j];
            printf ("Soma = %i\n",soma); 
        }
    }
    return 0;

}
