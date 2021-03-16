#include <stdio.h>
#include <stdlib.h>


int main(){

    int cal, pratos, sob,  bebidas;
    

    printf ("Insira os numeros para determinados alimentos!\n");
    printf ("PRATOS\n1=Vegetariano\n2=Peixe\n3=Frango\n4=Carne\n");
    scanf ("%i",&pratos);
    printf ("SOBREMESAS\n1=Abacaxi\n2=Sorvete diet\n3=Mousse diet\n4=Mousse Chocolate\n");
    scanf ("%i",&sob);
    printf ("BEBIDAS\n1=Cha\n2=Suco de Laranja\n3=Suco de Melao\n4=Refrigerante diet\n");
    scanf ("%i", &bebidas);

     cal=0;
     
    switch (pratos){
        case 1:
        cal += 180;
        break;
       
        case 2:
        cal += 230;
        break;

        case 3:
        cal += 250;
        break;

        case 4:
        cal += 350;
        break;
    }


    switch (sob){
        case 1:
        cal = cal + 75;
        break;
       
        case 2:
        cal = cal + 110;
        break;

        case 3:
        cal = cal + 170;
        break;

        case 4:
        cal = cal + 200;
        break;
    }

    switch (bebidas){
        case 1:
        cal = cal+ 20;
        break;
       
        case 2:
        cal = cal + 70;
        break;

        case 3:
        cal =cal + 100;
        break;

        case 4:
        cal = cal + 65;
        break;
    }
    

    
    printf ("O total de calorias deu: %ical\n", cal);



//system ("exit");
return 0;
}
