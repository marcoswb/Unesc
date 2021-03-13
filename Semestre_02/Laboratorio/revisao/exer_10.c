#include<stdio.h>
#include<stdlib.h>

main() {
    float numero01, numero02, total;
    int opcao;

    printf("Informe um número => \n");
    scanf("%f", &numero01);

    printf("Informe outro número => \n");
    scanf("%f", &numero02);

    printf("Menu de operações:\n");
    printf("    1. Soma\n");
    printf("    2. Subtração\n");
    printf("    3. Multiplicação\n");
    printf("    4. Divisão\n");
    printf("    Digite a opção desejada\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: {
        total = numero01 + numero02;
        printf("Soma = %f\n", total);
        break;
    }

    case 2: {
        total = numero01 - numero02;
        printf("Subtração = %f\n", total);
        break;
    }

    case 3: {
        total = numero01 * numero02;
        printf("Multiplicação = %f\n", total);
        break;
    }

    case 4: {
        total = numero01 / numero02;
        printf("Divisão = %f\n", total);
        break;
    }

    default:
        printf("Operação inválida!\n");
        break;
    }

    system("pause");
}