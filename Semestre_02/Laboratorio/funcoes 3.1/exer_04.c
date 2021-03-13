#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <stdio.h>
#include<ctype.h>

float calcSalario(float salario){
  float salario_liquido;

  salario_liquido = salario + ((salario * 5) / 100) - ((salario * 7) / 100);

  return salario_liquido;
}

int main() {
  float salario_base, salario_liquido;

  printf("Informe o salário base do funcionário =>");
  scanf("%f", &salario_base);

  salario_liquido = calcSalario(salario_base);

  printf("O salário líquido do funcionário é R$ %f\n", salario_liquido);

  system("PAUSE");
}