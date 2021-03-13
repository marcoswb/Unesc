#include<stdio.h>
#include<stdlib.h>

main() {
    float salario_carlos, salario_joao, rendimento_carlos = 0, rendimento_joao = 0;
    int contador = 0;

    printf("Informe o salário do Carlos =>");
    scanf("%f", &salario_carlos);
    printf("\n");

    salario_joao = salario_carlos / 3;

    do {
        rendimento_carlos = salario_carlos + ((salario_carlos * 2) / 100);
        rendimento_joao = salario_joao + ((salario_joao * 5) / 100);
        salario_carlos = rendimento_carlos;
        salario_joao = rendimento_joao;
        contador++;

    } while(rendimento_carlos >= rendimento_joao);

    printf("Em %d meses o salario de Carlos chegou a %f e o de João chegou a %f \n", contador, rendimento_carlos, rendimento_joao);

    system("pause");
}