#include <stdio.h>

int main (){
    int number[5];
    int i,aux,sup;

     //entrando com um numero
    for (i=0; i< 5; i++)
    {
        printf ("\nInsira o %i numero:\n",i+1);  
          scanf ("%i",&number[i]);
    }
     
    do {
        sup =0;

        for (i = 0; i <4; i++){

            if (number[i] > number[i + 1])
            {
                sup = 1;
                  aux = number[i];
                   number[i] = number[i +1];
                    number[i+1] = aux;
            }
        }
    } while(sup);

    printf ("\nA ordem do arrey e: ");

        for (i = 0; i< 5; i++){
            printf ("%i ", number[i]);
        }
        printf ("\n\n");

  return 0;

}
