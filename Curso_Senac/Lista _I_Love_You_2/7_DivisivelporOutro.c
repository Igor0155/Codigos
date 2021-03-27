#include <stdlib.h>
#include <stdio.h>

int divisivel (int dividendo, int divisor)
{
    int cont = 0;

       while (dividendo >= divisor)
       {
           dividendo = dividendo / divisor;
          cont ++;
       }

       return cont;
       
}
  int main ()
  {
      int num1, num2,soma;

        printf ("\nInsira o dividendo: \n");
         scanf ("%i",&num1);

            printf ("\nInsira o divisor: \n");
              scanf ("%i",&num2);

                if(num2 > num1)
                {
                    printf ("\n\nErro\nO divisor e maior que o dividendo\nInsira o dividor menor que o dividendo\n");
                    return main();
                }
                    soma = divisivel(num1,num2);

                    if (soma == 1)
                    {
                      printf ("\nO numero %i e divisivel pelo numero %i por %i vez!\n\n",num1,num2,soma);

                    }
                      else 
                      {
                        printf ("\nO numero %i e divisivel pelo numero %i por %i vezes!\n\n",num1,num2,soma);
                      }
                 
        
                
    return 0;
  }
  
  
