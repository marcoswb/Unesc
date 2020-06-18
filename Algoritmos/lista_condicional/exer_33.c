#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main() {
    int codigo;
    char classificacao[30];
    printf("Informe o código do produto => ");
    scanf("%d", &codigo);

    switch (codigo){
        case 1: {
            strcpy(classificacao, "Alimento não perecível");
            break;
        }
        case 2 ... 4: {
            strcpy(classificacao, "Alimento perecível");
            break;
        }
        case 5 ... 6: {
            strcpy(classificacao, "Vestuário");
            break;
        }
        case 7: {
            strcpy(classificacao, "Higiene pessoal");
            break;
        }
        case 8 ... 15: {
            strcpy(classificacao, "Limpeza e utensílios domésticos");
            break;
        }
        default: {
            strcpy(classificacao, "Incorreto");
            break;
        }
        
    }  

    printf("Classificação do produto: %s \n", classificacao);
    system("pause");
}