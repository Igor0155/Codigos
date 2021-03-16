#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a ,b;
    
         //para ver o endereço da memoria de uma variavel so colocar o '&'
      if (&a > &b)
      {
          printf ("O maior enderco e a da Variavel A: %i",&a);
      }
            else 
            {
                printf ("O maior enderco e a da variavel B: %i",&b);
            }

    return 0;
}