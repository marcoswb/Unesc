#include<stdio.h>
#include<stdlib.h>

main() {
    int mes;

    printf("Informe um número inteiro entre 1 e 12 => \n");
    scanf("%d", &mes);

    switch (mes) {
    case 1: {
        printf("Janeiro selecionado!");
        break;
    }

    case 2: {
        printf("Fevereiro selecionado!");
        break;
    }

    case 3: {
        printf("Março selecionado!");
        break;
    }
    
    case 4: {
        printf("Abril selecionado!");
        break;
    }
    case 5: {
        printf("Maio selecionado!");
        break;
    }
    
    case 6: {
        printf("Junho selecionado!");
        break;
    }

    case 7: {
        printf("Julho selecionado!");
        break;
    }

    case 8: {
        printf("Agosto selecionado!");
        break;
    }

    case 9: {
        printf("Setembro selecionado!");
        break;
    }

    case 10: {
        printf("Outubro selecionado!");
        break;
    }

    case 11: {
        printf("Novembro selecionado!");
        break;
    }

    case 12: {
        printf("Dezembro selecionado!");
        break;
    }

    default:
        printf("Nenhum mês corresponde a esse numero!");
        break;
    }

    system("pause");
}