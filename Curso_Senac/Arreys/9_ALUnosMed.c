#include <stdio.h>
#include <stdlib.h>


void main (){
    
    //1° da linha e 2° de coluna
    int notas [4][3];
    int i,j,soma;

    
    for (i = 0; i < 4; i++)
    {
        //printando as notas do x aluno
        printf ("\nInsira a Nota do %i aluno: \n",i + 1);

          for (j=0; j < 3; j++)
          {
              //lendo as 3 notas do aluno
              scanf("%i",&notas[i][j]);
          }
    }
    
    //printando a soma na tela
    for (i = 0; i < 4; i++)
    {
        //zerando a soma das notas em cada loop dos alunos 
        soma =0;
          for (j = 0; j < 3; j++)
          {
              //soma das notas do x aluno
              soma += notas[i][j];
          }
      //printando a nota dos alunos    
     printf ("\nO total das notas de: [%i] [%i] [%i] do %i aluno e: %i",  notas[i][0], notas[i][1], notas[i][2], i + 1, soma);
    }
    puts ("\n\n");

}