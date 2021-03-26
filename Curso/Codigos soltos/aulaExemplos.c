#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
 //definindo variaveis
int a;
float b;
char c;
bool d;

//passando valores

    a = 5;
    b = 2.3;
    c = 'a';
    d = true; // true =1, false 0

    //escrevando na tela

    printf("\n o valor de A e =%i",a);
    printf ("\n o valor de B e = %.2f",b);
    printf ("\n O valor de C =%c", c);
    printf ("\n O valor de D = %d\n", d);

//lendo valores

    scanf ("%d", &a);
    scanf ("%f", &b);
    scanf ("%c", &c);
    scanf ("%d", &d);

    printf("\n o valor de A e =%i",a);
    printf ("\n o valor de B e = %.2f",b);
    printf ("\n O valor de C =%c", c);
    printf ("\n O valor de D = %d\n", d);


    //pausando

    system("pause");



}
