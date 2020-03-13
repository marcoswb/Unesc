#include<stdio.h>
#include<stdlib.h>

main() {
    float salario, conta01, conta02, resto_salario;

    printf("Informe o salário de João => ");
    scanf("%f", &salario);
    printf("Informe a primeira conta de João => ");
    scanf("%f", &conta01);
    printf("Informe a segunda conta de João => ");
    scanf("%f", &conta02);

    conta01 = conta01 + ((conta01 * 2) / 100);
    conta02 = conta02 + ((conta02 * 2) / 100);
    resto_salario = salario - (conta01 + conta02);

    printf("O resto do salário de João é = %f", resto_salario);    
}