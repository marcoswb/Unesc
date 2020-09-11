#include<stdio.h>
#include<stdlib.h>


int menu() {
    int opcao;
    printf("Menu de opções:\n");
    printf("    1. Imposto\n");
    printf("    2. Novo Salário\n");
    printf("    3. Classificação\n");
    printf("    Digite a opção desejada\n");
    scanf("%d", &opcao);
    return opcao;
} 

float receberSalario() {
    float salario;

    printf("Informe seu salário => \n");
    scanf("%f", &salario);
    return salario;
}

void imposto() {
    float imposto;
    int percentual;
    float salario = receberSalario();

    if(salario < 500) {
        percentual = 5;
    } else if((salario > 500) && (salario <= 850)) {
        percentual = 10;
    } else {
        percentual = 15;
    }

    imposto = (salario * percentual) / 100;

    printf("Imposto = R$  %f\n", imposto);
}

void novoSalario() {
    float salario_novo, aumento;
    float salario = receberSalario();

    if(salario >= 1500) {
        aumento = 25;
    } else if((salario >= 750) && (salario < 1499)) {
        aumento = 50;
    } else if((salario >= 450) && (salario < 749)) {
        aumento = 75;
    } else {
        aumento = 100;
    }

    salario_novo = salario + aumento;

    printf("Novo salário do funcionário é = R$ %f \n", salario_novo);
}

void classificacao() {
    float salario = receberSalario();

    if(salario <= 700) {
        printf("Funcionário mal remunerado! \n");
    } else {
        printf("Funcionário bem remunerado! \n");
    }
}

main() {
    int opcao = menu();

    switch (opcao) {
    case 1: {
        imposto();
        break;
    }
    case 2: {
        novoSalario();
        break;
    }

    case 3: {
        classificacao();
        break;
    }
        
    default:
        printf("Opção inválida digitada!");
        break;
    }

    system("pause");
}