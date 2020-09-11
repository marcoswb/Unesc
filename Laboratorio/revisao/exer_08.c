#include<stdio.h>
#include<stdlib.h>

main() {
    float salario, novo_salario, bonificacao, auxilio_escola;

    printf("Informe seu salário => \n");
    scanf("%f", &salario);

    if(salario < 500) {
        bonificacao = 5;
    } else if((salario >= 500) && (salario <= 1200)){
        bonificacao = 12;
    } else {
        bonificacao = 0;
    }

    if(salario < 600) {
        auxilio_escola = 150;
    } else {
        auxilio_escola = 100;
    }

    novo_salario = salario + ((salario * bonificacao) / 100) + auxilio_escola;

    printf("O novo salario do empregado é = R$ %f \n", novo_salario);

    system("pause");
}