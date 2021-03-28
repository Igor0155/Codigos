#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main (){

     UINT CPAGE_UTF8 = 65001;
     UINT CPAGE_DEFAULT = GetConsoleOutputCP(); 

     SetConsoleOutputCP(CPAGE_UTF8);

     int carro, km;
     float consumo;
     

       printf ("Nos informes o tipo de carro e o seu:\n1-A   \n2-B   \n3-C\n");
        scanf ("%i",&carro);

          printf ("Agora nos informe quantos KM você andou: ");
            scanf ("%i",&km);

              switch (carro){
                  case 1:
                  consumo =  km /12;
                  printf ("O consumo estimado foi: %.2f litros",consumo);
                  break;
              
                  case 2:
                  consumo = km / 9;
                  printf ("O consumo estimado foi: %.2f litros",consumo);
                  break;
              
                  case 3:
                  consumo = km / 8;
                  printf ("O consumo estimado foi: %.2f Litros",consumo);
                  break;
              }


}
