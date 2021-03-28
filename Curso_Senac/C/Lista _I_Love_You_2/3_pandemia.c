#include <stdio.h>
#include <stdlib.h>

void desconto (float preco, int desconto, float novo_preco);

int main ()
{

    int porcentagem;
    float preco1, novo_valor;

      printf  ("\nInsira o preco do produto:\n");
        scanf("%f", &preco1);
          printf ("\nAgora Nos informe o percentual de desconto:\n");
            scanf("%i", &porcentagem);

      desconto(preco1, porcentagem, novo_valor);

 return 0;

}

void desconto (float preco, int desconto, float novo_preco)
{

  novo_preco = preco + (preco * desconto /100);

    printf ("O novo preco do produto e: %.2f", novo_preco);


}

