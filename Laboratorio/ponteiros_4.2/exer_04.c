#include <stdlib.h>
#include <stdio.h>

void calcSalario(float *salario, float *bonificacao);

int main() {
  float salario, bonificacao;

  printf("Informe o valor do salário =>");
  scanf("%f", &salario);

  calcSalario(&salario, &bonificacao);

  printf("Novo salário = R$ %f\n", salario);
  printf("Bonificação = R$ %f\n", bonificacao);
  
  system("PAUSE");
}

void calcSalario(float *salario, float *bonificacao){
  float perc_bonificacao;

  if(*salario <= 724){
    perc_bonificacao = 11;
  } else if(*salario < 1500){
    perc_bonificacao = 9;
  } else {
    perc_bonificacao = 5;
  }

  *bonificacao = (*salario * perc_bonificacao) / 100;
  *salario = *salario + *bonificacao;

}