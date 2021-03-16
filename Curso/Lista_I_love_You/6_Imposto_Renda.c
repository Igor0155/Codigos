#include <stdio.h>
#include <stdlib.h>
//bibliotecas para definir em PTBR
#include <locale.h>
#include <windows.h>


int main (){
     
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT =GetConsoleOutputCP();
    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    int i; 
    char nome[30];
    float salario  ,imposto;

      printf ("\n Este Programa calcula o valor da alíquota do imposto de renda\n\n");
         
       //escrevendo a quantidade de vezes que ira pedir o nome e o salario dos usuarios
       for (i =1; i <=10; i++){
        
           printf ("Insira o seu Nome: \n");
             //apagando o enter que fica no nome quando avaça no programa!
             fflush(stdin);
             gets (nome); 
                
                //pedindo o valor do salario bruto
                printf ("\nNos informe o Valor do seu salário bruto: \n");
                  scanf ("%f", &salario);

                      
                    if (salario < 1300){

                       printf ("\n%s \nO valor da alíquota é Insento!\n\n",nome );
                    } 
                        else if (salario  >=1300 && salario <2300) {

                            //calculando o imposto de renda em 10%
                            imposto = (salario *0.1);

                            //imprimindo o valor de 10% do salario  do usuasrio
                               printf  ("\n%s \nO valor da alíquota para o seu salario de %.f é: R$%.2f \n\n", nome,salario,imposto);

                        }
                            else if (salario >=2300){
                                
                                //calculando o imposto de renda em 15%
                                imposto = (salario *0.15);
                                   printf ("\n%s \nO valor da alíquota para o seu salario de %.f é: R$%.2f \n\n",nome,salario,imposto);
                            }
       }

    return 0;
            
}