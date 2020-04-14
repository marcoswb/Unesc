#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main() {
    float preco, novo_preco, percentual_aumento;
    char classificacao[15];
    printf("Informe o preço do produto => ");
    scanf("%f", &preco);

    printf("O percentual de aumento será calculado seguindo a seguinte tabela.\n");
    printf("+----------------------------+-----------------------+\n");
    printf("|            Preço           | Percentual de aumento |\n");
    printf("+----------------------------+-----------------------+\n");
    printf("|         Até R$ 50,00       |     5 por cento       |\n");
    printf("| Entre R$ 50,00 e R$ 100,00 |     10 por cento      |\n");
    printf("|     Acima de R$ 100,00     |     15 por cento      |\n");
    printf("+----------------------------+-----------------------+\n");

    printf("A classificação será calculada seguindo a seguinte tabela.\n");
    printf("+-----------------------------+---------------+\n");
    printf("|          Novo preço         | Classificação |\n");
    printf("+-----------------------------+---------------+\n");
    printf("|          Até R$ 80,00       |     Barato    |\n");
    printf("|  Entre R$ 80,00 e R$ 120,00 |     Normal    |\n");
    printf("| Entre R$ 120,00 e R$ 200,00 |      Caro     |\n");
    printf("|     Maior que R$ 200,00     |   Muito caro  |\n");
    printf("+-----------------------------+---------------+\n");

    if(preco <= 50) {
        percentual_aumento = 5;
    } else if((preco > 50) && (preco <= 100)) {
        percentual_aumento = 10;
    } else {
        percentual_aumento = 15;
    }

    novo_preco = preco + ((preco * percentual_aumento) / 100);
    
    if(novo_preco <= 80) {
        strcpy(classificacao, "Barato");
    } else if((novo_preco > 80) && (novo_preco <= 120)) {
        strcpy(classificacao, "Normal");
    } else if((novo_preco > 120) && (novo_preco <= 200)) {
        strcpy(classificacao, "Caro");
    } else {
        strcpy(classificacao, "Muito caro");
    }

    printf("Preço antigo = R$ %f \n", preco);
    printf("Aumento de %f = R$ %f \n", percentual_aumento, novo_preco);
    printf("Classificação = %s \n", classificacao);
    system("pause");
}