#include <stdio.h>
#include <stdlib.h>

int main (){
    int num[16] ;
    int i;
  
    for (i = 1; i <=15; i++){
        printf ("insira o %d numero: ",i);
          scanf("%d", &num[i]);

    }
    
    for (i = 1; i <=15; i++){
        printf ("\nnum %d =%d", i , num[i] );

    }




    return 0;
}