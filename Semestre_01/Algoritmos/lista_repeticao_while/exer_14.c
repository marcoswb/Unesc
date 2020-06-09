#include<stdio.h>
#include<stdlib.h>

imposto(float salario) {
    int imposto;

    if(salario < 500) {
        imposto = 5;
    } else if((salario >= 500) && (salario <= 850)) {
        imposto = 10;
    } else {
        imposto = 15;
    }

    salario = salario - ((salario * imposto) / 100);
    printf("Salário com desconto de imposto %f\n", salario);
}

aumento(float salario) {
    int aumento;

    if(salario > 1500) {
        aumento = 25;
    } else if((salario >= 750) && (salario <= 1500)) {
        aumento = 50;
    } else if((salario >= 450) && (salario < 750)) {
        aumento = 75;
    } else {
        aumento = 100;
    }

    salario = salario + aumento;
    printf("Salário com aumento %f\n", salario);
}

classificacao(float salario) {
    if(salario <= 700) {
        printf("Mal remunerado.");
    } else {
        printf("Bem remunerado.");
    }
}

main() {
    int opcao;
    float salario;

    printf("Menu de opções:\n");
    printf("1 - Imposto\n");
    printf("2 - Novo Salário\n");
    printf("3 - Classificação\n");
    printf("4 - Finalizar programa\n");
    printf("Digite a opção desejada =>\n");
    scanf("%d", &opcao);

    printf("informe o salario do funcionário =>");
    scanf("%f", &salario);

    switch (opcao) {
    case 1: {
        imposto(salario);
        break;
    }
    case 2: {
        aumento(salario);
        break;
    }
    case 3: {
        classificacao(salario);
        break;
    }
    case 4: {
        printf("Saindo...\n");
        printf("Volte sempre\n");
        break;
    }
    default: {
        printf("Opção inválida \n");
        return;
        break;
    }
    }

    system("pause");
}