#include<stdlib.h>
#include<stdio.h>
#include<string.h>

float main() {
    int opcao;
    float salario, percentual_aumento, aumento, novo_salario;
    char cargo[20];

    printf("+--------+-------------+-----------------+\n");
    printf("| Código |    Cargo    |    Percentual   |\n");
    printf("+--------+-------------+-----------------+\n");
    printf("|   1    | Escrituário |        50       |\n");
    printf("|   2    | Secretário  |        35       |\n");
    printf("|   3    |    Caixa    |        20       |\n");
    printf("|   4    |   Gerente   |        10       |\n");
    printf("|   5    |   Diretor   | Não tem aumento |\n");
    printf("+--------+-------------+-----------------+\n");
    printf("Selecione uma opção: \n");
    scanf("%d", &opcao);

    printf("\n Informe o salário do funcionário =>");
    scanf("%f", &salario);

    switch (opcao) {
        case 1: {
            strcpy(cargo, "Escrituário");
            percentual_aumento = 50;
            break;
        }

        case 2: {
            strcpy(cargo, "Secretário");
            percentual_aumento = 35;
            break;
        }

        case 3: {
            strcpy(cargo, "Caixa");
            percentual_aumento = 20;
            break;
        }

        case 4: {
            strcpy(cargo, "Gerente");
            percentual_aumento = 10;
            break;
        }

        case 5: {
            strcpy(cargo, "Diretor");
            percentual_aumento = 0;
            break;
        }

        default: {
            printf("Opção inválida!");
            break;
        }
    }

    aumento = (salario * percentual_aumento) / 100;
    novo_salario = salario + aumento;

    printf("O cargo do funcionário é %s \n", cargo);
    printf("O aumento do salário é de R$ %f \n", aumento);
    printf("O novo salário é de R$ %f \n", novo_salario);

    system("pause");
}

