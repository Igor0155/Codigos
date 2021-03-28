#include <stdio.h>
#include <stdlib.h>

struct cadastro 
{
    char nome[30],endereco[100];
    int idade;
};

int main ()
{
    struct cadastro c1;

      printf ("\nInsira o seu nome completo: \n");
        fflush (stdin);
        gets (c1.nome);
          printf ("\nInsira a sua idade:\n");
            scanf ("%i", &c1.idade);
              printf ("\nAgora nos informe o seu endereco:\n");
                fflush (stdin);
                gets(c1.endereco);

        printf ("\nNome: %s ",c1.nome);
          printf ("\nIdade: %i",c1.idade);
            printf ("\nEndereco: %s",c1.endereco);
    
    return 0;
}