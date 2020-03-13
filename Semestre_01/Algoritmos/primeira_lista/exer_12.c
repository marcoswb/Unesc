#include<stdio.h>
#include<stdlib.h>

main() {
    float salario_minimo, salario_funcionario, quantidade_salarios;

    printf("Informe o salário mínimo =>");
    scanf("%f", &salario_minimo);
    printf("Informe o salário do funcionário =>");
    scanf("%f", &salario_funcionario);
    quantidade_salarios = salario_funcionario / salario_minimo;

    printf("O salário do funcionário equivale a %f salários mínimos",quantidade_salarios);

}