#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

float soma(float num1, float num2) {
  float resultado = num1 + num2;

  return resultado;
}

float subtracao(float num1, float num2) {
  float resultado = num1 - num2;

  return resultado; 
}

float multiplicacao(float num1, float num2) {
  float resultado = num1 * num2;

  return resultado; 
}

float divisao(float num1, float num2) {
  float resultado = num1 / num2;

  return resultado; 
}

float menu(){
  int operacao;
  float numero01, numero02, resultado;
  
  printf("Informe um número =>");
  scanf("%f", &numero01);

  printf("Informe outro número =>");
  scanf("%f", &numero02);

  do{
    printf("+-----------------------+\n");
    printf("|       1. Soma         |\n");
    printf("|     2. Subtração      |\n");
    printf("|   3. Multiplicação    |\n");
    printf("|      4. Divisão       |\n");
    printf("+-----------------------+\n");
    printf("Escolha uma das operações =>\n");
    scanf("%d", &operacao);

  }while((operacao < 1) || (operacao > 4));

  switch(operacao){
    case 1: {
      resultado = soma(numero01, numero02);
      break;
    }
    case 2: {
      resultado = subtracao(numero01, numero02);
      break;
    }
    case 3: {
      resultado = multiplicacao(numero01, numero02);
      break;
    }
    case 4: {
      resultado = divisao(numero01, numero02);
      break;
    }
    default: {
      resultado = 0;
      break;
    }
  }

  return resultado;
}

int main() {
  float resultado;

  resultado = menu();

  printf("O resultado da operação é = %f\n", resultado);
  
  system("PAUSE");
}