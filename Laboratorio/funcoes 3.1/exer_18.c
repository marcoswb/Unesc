#include <stdlib.h>
#include <stdio.h>
#include<ctype.h>

int pares = 0;

float contarPares(int num) {

  if((num % 2) == 0){
    pares += 1;
  }
  

  printf("A soma de todos os pares está em = %d\n", pares);
}

int main() {
  int numero;

  do{
    printf("\nInforme um número =>(Digite -999 quando quiser parar o loop)\n");
    scanf("%d", &numero);

    contarPares(numero);
  }while((numero != -999));
  
  system("PAUSE");
}