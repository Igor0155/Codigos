#include <stdio.h>
#include <stdlib.h>

void soma_e_subtracao(int num1, int num2,int *p1,int *p2)
{
    p1 = &num1;
      p2 = &num2;

        printf ("\nO resultado de %i + %i = %i\n",*p1,*p2, *p1 + *p2);
        printf ("\nO resultado de %i - %i = %i\n",*p1,*p2, *p1 - *p2);
}

int main ()
{
    int n1,n2,*pont1,*pont2;

      printf ("\nInsira o primeiro numero: \n");
        scanf ("%i",&n1);
          printf ("Insira o segundo numero: \n");
            scanf ("%i",&n2);

            soma_e_subtracao(n1,n2,pont1,pont2);
    
    return 0;
}
