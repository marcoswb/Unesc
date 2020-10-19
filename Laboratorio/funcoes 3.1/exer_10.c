#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

float calcSalario(float salario){
  float salario_novo, bonificacao, auxilio;

  if(salario > 1200) {
    bonificacao = 0;
  } else if(salario <= 500) {
    bonificacao = (salario * 5) / 100;
  } else {
    bonificacao = (salario * 12) / 100;
  }

  if(salario <= 600) {
    auxilio = 150;
  } else {
    auxilio = 100;
  } 

  salario_novo = salario + bonificacao + auxilio;

  return salario_novo;
}

int main() {
  float salario_base, novo_salario;

  printf("Informe o salário base do funcionário =>");
  scanf("%f", &salario_base);

  novo_salario = calcSalario(salario_base);

  printf("O novo salário do funcionário é R$ %f\n", novo_salario);

  system("PAUSE");
}