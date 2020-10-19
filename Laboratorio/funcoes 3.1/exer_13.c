#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

float triplo(float num) {
  float resultado = num * 3;

  printf("%f * 3 = %f\n", num, resultado);
}

int main() {
  float numero;

  do{
    printf("\nInforme um número =>\n");
    scanf("%f", &numero);

    triplo(numero);
  }while((numero != -999));
  
  system("PAUSE");
}