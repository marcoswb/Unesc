#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main() {
    int categoria, percentual_aumento, percentual_imposto;
    float preco, aumento, imposto, novo_preco;
    char situacao, classificacao[10];
    printf("Informe o preço do produto =>");
    scanf("%f", &preco);
    
    printf("\nSituação: \n");
    printf("R - produtos que necessitam de refrigeração \n");
    printf("N - produtos que não necessitam de refrigeração \n");
    printf("Informe a situação do produto =>");
    scanf("%s", &situacao);

    printf("\nCategorias: \n");
    printf("1 - limpeza \n");
    printf("2 - alimentação \n");
    printf("3 - vestuário \n");
    printf("Informe o código da categoria do produto =>");
    scanf("%d", &categoria);

    if(preco <= 25) {
        switch (categoria){
            case 1: {
                percentual_aumento = 5;
                break;
            }
            case 2: {
                percentual_aumento = 8;
                break;
            }
            case 3: {
                percentual_aumento = 10;
                break;
            }
            default: {
                break;
            }
            
        }  
    } else if(preco > 25) {
        switch (categoria){
            case 1: {
                percentual_aumento = 12;
                break;
            }
            case 2: {
                percentual_aumento = 15;
                break;
            }
            case 3: {
                percentual_aumento = 18;
                break;
            }
            default: {
                break;
            }
            
        }  
    }

    aumento = (preco * percentual_aumento) / 100;

    if((categoria == 2) | (situacao == 'R') | (situacao == 'r')) {
        percentual_imposto = 5;
    } else {
        percentual_imposto = 8;
    }

    imposto = (preco * percentual_imposto) / 100;
    novo_preco = preco + aumento - imposto;

    if(novo_preco <= 50) {
        strcpy(classificacao, "Barato");
    } else if((novo_preco > 50) && (novo_preco < 120)) {
        strcpy(classificacao, "Normal");
    } else {
        strcpy(classificacao, "Caro");
    }

    printf("Valor do aumento do produto = R$ %f \n", aumento);
    printf("Valor do imposto do produto = R$ %f \n", imposto);
    printf("Novo preço do produto = R$ %f \n", novo_preco);
    printf("Classificação do produto = %s \n", classificacao);
    system("pause");
}