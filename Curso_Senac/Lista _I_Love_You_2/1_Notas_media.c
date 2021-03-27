#include <stdio.h>
#include <stdlib.h>


void media_notas( float nota1, float nota2, float nota3, float media);

int main (){
    float n1,n2,n3,soma;


    printf ("\nInsira as 3 notas: \n");
      scanf ("%f %f %f", &n1,&n2,&n3);

      media_notas(n1,n2,n3,soma);

return 0;
}

void media_notas( float nota1, float nota2, float nota3, float media){

    media = (nota1 + nota2 + nota3)/3;

        printf ("\nA media das notas %.1f, %.1f, %.1f e: %.1f\n\n", nota1,nota2,nota3,media);


}

