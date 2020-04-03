#include<stdio.h>
#include<stdlib.h>

main() {
    float preco_fabrica, percent_distribuidor, lucro_distribuidor, percent_impostos, impostos, preco_final;

    printf("Informe o preço de fábrica do carro => ");
    scanf("%f", &preco_fabrica);

    printf("Informe o percentual de lucro do distribuidor => ");
    scanf("%f", &percent_distribuidor);

    printf("Informe o percentual de impostos => ");
    scanf("%f", &percent_impostos);

    lucro_distribuidor = (preco_fabrica * percent_distribuidor) / 100;
    impostos = (preco_fabrica * percent_impostos) / 100;
    preco_final = preco_fabrica + lucro_distribuidor + impostos;

    printf("O preço de fábrica é: %f \n", preco_fabrica); 
    printf("O lucro do distribuidor é de: %f \n", lucro_distribuidor);
    printf("O valor dos impostos é de: %f \n", impostos);
    printf("O preço de final do carro é: %f \n", preco_final);
}