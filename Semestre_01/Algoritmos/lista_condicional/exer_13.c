#include<stdlib.h>
#include<stdio.h>

main() {
    float preco_fabrica, distribuidor, impostos, preco_final, percentual_distribuidor, percentual_impostos;
    printf("Informe o preço de fábrica do carro => ");
    scanf("%f", &preco_fabrica);

    printf("O preço final será calculado seguindo a seguinte tabela.\n");
    printf("+----------------------------------+----------------------------+-------------------------+\n");
    printf("|         Custo de fábrica         | Percentual do distribuidor | Percentual dos impostos |\n");
    printf("+----------------------------------+----------------------------+-------------------------+\n");
    printf("|          Até R$ 15.000,00        |        5 por cento         |         isento          |\n");
    printf("| De R$ 15.000,00 até R$ 25.000,00 |        10 por cento        |      15 por cento       |\n");
    printf("|       Acima de R$ 25.000,00      |        15 por cento        |      20 por cento       |\n");
    printf("+----------------------------------+----------------------------+-------------------------+\n");

    if(preco_fabrica <= 15000) {
        percentual_distribuidor = 5;
        percentual_impostos = 0;
    } else if((preco_fabrica > 15000) && (preco_fabrica <= 25000)) {
        percentual_distribuidor = 10;
        percentual_impostos = 15;
    } else {
        percentual_distribuidor = 15;
        percentual_impostos = 20;
    }

    distribuidor = (preco_fabrica * percentual_distribuidor) / 100;
    impostos = (preco_fabrica * percentual_impostos) / 100;
    preco_final = preco_fabrica + distribuidor + impostos;

    printf("Preço de fábrica = R$ %f \n", preco_fabrica);
    printf("Distribuidor com percentual de %f = R$ %f \n", percentual_distribuidor, distribuidor);
    printf("Impostos com percentual de %f = R$ %f \n", percentual_impostos, impostos);
    printf("Preço final = R$ %f \n", preco_final);
    system("pause");
}