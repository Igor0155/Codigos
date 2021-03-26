#include <stdio.h>
//daq pra baixo
#include <locale.h>
#include <windows.h>


int main (){

  // Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();

  // Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);

//acaba aq ^

  printf ("Agora está com acentuação e em PTBR!!!");

  return 0;
}