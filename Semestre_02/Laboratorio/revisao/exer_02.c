#include<stdio.h>
#include<stdlib.h>

main() {
    float salario_base, gratificacao, imposto, salario_final;

    printf("Informe o salario base =>");
    scanf("%f", &salario_base);
    

    gratificacao = (salario_base * 5) / 100;
    imposto = (salario_base * 7) / 100;

    salario_final = salario_base + gratificacao - imposto;

    printf("O novo salário é igual a: %f \n", salario_final);

    system("pause");
}