#include<stdlib.h>
#include<stdio.h>
#include<string.h>

float calculaImposto(float salario) {
    float imposto, percentual_imposto;

    if(salario < 1000) {
        percentual_imposto = 5;
    } else if((salario >= 1000) && (salario <= 2500)) {
        percentual_imposto = 10;
    } else if(salario > 2500) {
        percentual_imposto = 15;
    }

    imposto = (salario * percentual_imposto) / 100;
    return imposto;
}

float calculaNovoSalario(float salario) {
    float novo_salario, adicional;

    if(salario > 3000) {
        adicional = 25;
    } else if((salario > 2000) && (salario <= 3000)) {
        adicional = 50;
    } else if((salario >= 1000) && (salario <= 2000)) {
        adicional = 75;
    } else if(salario < 1000) {
        adicional = 100;
    }

    novo_salario = salario + adicional;
    return novo_salario;
}

float main() {
    int opcao;
    float salario, imposto, novo_salario;
    char classificacao[20];

    printf("Menu de Opções: \n");
    printf("1 - Imposto \n");
    printf("2 - Novo salário \n");
    printf("3 - Classificação \n");
    printf("\n Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\n Informe o salário do funcionário =>");
    scanf("%f", &salario);

    switch (opcao) {
        case 1: {
            imposto = calculaImposto(salario);
            printf("\n Valor do imposto é de R$ %f \n", imposto);
            break;
        }

        case 2: {
            novo_salario = calculaNovoSalario(salario);
            printf("\n Novo salário é de R$ %f \n", novo_salario);
            break;
        }

        case 3: {
            char classificacao[20];

            if(salario <= 700) {
                strcpy(classificacao, "Mal remunerado");
            } else if(salario > 700) {
                strcpy(classificacao, "Bem remunerado");
            }

            printf("\n Funcionário %s \n", classificacao);
            break;
        }

        default: {
            printf("\n Opção inválida!");
            break;
        }
    }

    system("pause");
}

