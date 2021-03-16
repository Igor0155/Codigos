#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct retangulo
{
    float x,y;
};

int main ()
{
    struct retangulo ponto_sup_e, ponto_inf_d;
    float diagonal, h,b,A,perimetro;

        printf ("\nInsira o Ponto superior esquerdo do retangulo X:\n ");
          scanf ("%f", &ponto_sup_e.x);
            printf ("\nInsira o Ponto superior esquerdo do retangulo Y:\n");
              scanf ("%f", &ponto_sup_e.y);

        printf ("\nInsira o Ponto inferior esquerdo do retangulo X:\n ");
          scanf ("%f", &ponto_inf_d.x);
            printf ("\nInsira o Ponto inferior esquerdo do retangulo Y:\n");
              scanf ("%f", &ponto_inf_d.y);

        h = sqrt(pow(ponto_sup_e.x -ponto_sup_e.x, 2)+ pow (ponto_sup_e.y - ponto_inf_d.y, 2));
          b = sqrt(pow(ponto_inf_d.x -ponto_sup_e.x, 2)+ pow (ponto_inf_d.y - ponto_inf_d.y, 2));
            A = h * b;
              diagonal = sqrt( pow(b,2)+ pow(h,2));
                perimetro = 2*(b+h);
                
        printf ("\nA Area do retangulo e: %fm\n", A);
        printf ("\nA diagonal do retangulo e: %fm\n",diagonal);
        printf ("\nO primetro desse retangulo e: %fm\n\n",perimetro);

  return 0;
}