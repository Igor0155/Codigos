#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int matrix[10][4],i,j,curso,CR_alto = 0,aux_CR=0,aux_matr = 0;

        for(i = 0; i < 10; i++)
        {
            printf ("\nInforme a matricula do %i aluno(a) em < aascccnnn >: \n",i+1);
            printf ("(aa - ano, s - semestre, ccc - codigo do curso e nnn - matricula no curso)\n");
              scanf ("%i", &matrix[i][0]);
              
                printf ("\nInforme o sexo do aluno(a) <0 - FEMININO ou 1 - Masculino>: \n");
                  scanf ("%i",&matrix[i][1]);

                    printf ("\nInsira o codigo do curso:\n");
                      scanf ("%i",&matrix[i][2]);

                        printf ("\nInsira o CR (coeficiente de rendimento) do aluno(a):\n");
                          scanf ("%i",&matrix[i][3]);
        }

        printf ("\nInforme o codigo do curso que deseja escolher a Premiada: \n");
          scanf ("%i",&curso);

          for (i =0; i< 10; i++)
          {
            if (curso == matrix[i][2] && matrix[i][1] == 0)
              {
                  if (CR_alto < matrix[i][3])
                  {
                      CR_alto = matrix[i][3];
                      aux_CR = i;
                      aux_matr = i;
                  }
                  
              }
          }

          printf ("\nA matricula da aluna premiada foi a: %i com o CR: %i\n\n",matrix[aux_matr][0],matrix[aux_CR][3]);



    return 0;
}