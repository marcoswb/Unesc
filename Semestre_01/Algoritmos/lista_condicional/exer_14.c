#include<stdlib.h>
#include<stdio.h>

main() {
    float salario, aumento, percentual_aumento, novo_salario;
    printf("Informe o salário do funcionário => ");
    scanf("%f", &salario);

    printf("O aumento será calculado seguindo a seguinte tabela.\n");
    printf("+--------------------------------+-----------------------+\n");
    printf("|             Salário            | Percentual de aumento |\n");
    printf("+--------------------------------+-----------------------+\n");
    printf("|      Abaixo de R$ 3.000,00     |     15 por cento      |\n");
    printf("| De R$ 3.000,00 até R$ 6.000,00 |     10 por cento      |\n");
    printf("| De R$ 6.000,00 até R$ 9.000,00 |      5 por cento      |\n");
    printf("|      Acima de R$ 9.000,00      |      0 por cento      |\n");
    printf("+--------------------------------+-----------------------+\n");

    if(salario < 3000) {
        percentual_aumento = 15;
    } else if((salario >= 3000) && (salario < 6000)) {
        percentual_aumento = 10;
    } else if((salario >= 6000) && (salario <= 9000)) {
        percentual_aumento = 5;
    } else {
        percentual_aumento = 0;
    }

    aumento = (salario * percentual_aumento) / 100;
    novo_salario = salario + aumento;

    printf("Salário antigo = R$ %f \n", salario);
    printf("Aumento de %f = R$ %f \n", percentual_aumento, aumento);
    printf("Novo salário = R$ %f \n", novo_salario);
    system("pause");
}