#include<stdlib.h>
#include<stdio.h>

main() {
    float salario, salario_reajustado;
    printf("Informe o salário do funcionário => ");
    scanf("%f", &salario);

    printf("O reajuste será calculado seguindo a seguinte tabela.\n");
    printf("+-------------------------------------------------+\n");
    printf("|        Salário        |  Percentual de aumento  |\n");
    printf("+-----------------------+-------------------------+\n");
    printf("|    Até R$ 1500,00     |       35 por cento      |\n");
    printf("|  Acima de R$ 1500,00  |       15 por cento      |\n");
    printf("+-----------------------+-------------------------+\n");

    if(salario <= 1500) {
        salario_reajustado = salario+((salario * 35) / 100);
    } else {
        salario_reajustado = salario+((salario * 15) / 100);
    }

    printf("O salário de R$ %f do funcionário foi para %f \n", salario, salario_reajustado);
    system("pause");
}