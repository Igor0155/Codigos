#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int function_char(char letras[100], char caracter)
{
    int i,cont =0;

    for (i =0; i < strlen(letras); i++){
        if ( letras[i] == caracter )
        {
            letras[i] = '*';
              cont++;
        }

    }

      for (i = 0; i< strlen(letras); i++)
      {
          printf ("%c",letras[i]);
      }

    printf ("\n\nA quantidade de caracter e: %i\n\n",cont);

    
}

int main ()
{
    char let[100], caract;
  

    printf ("\nInsira a frase: \n");
      gets(let);

      printf("\nInsira a letra que deseja esconder: \n");
        scanf ("%c", &caract);
          printf("\n");

        function_char(let,caract);
        
    return 0;
}