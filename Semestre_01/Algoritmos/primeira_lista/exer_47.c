#include<stdio.h>
#include<stdlib.h>

main() {
    float preco_fabrica, percentual_distribuidor, percentual_impostos, lucro_distribuidor, impostos, preco_final;

    printf("Informe o preço de fábrica do carro => ");
    scanf("%f", &preco_fabrica);

    printf("Informe o percentual de lucro do distribuidor => ");
    scanf("%f", &percentual_distribuidor);

    printf("Informe o percentual de impostos => ");
    scanf("%f", &percentual_impostos);

    lucro_distribuidor = (preco_fabrica * percentual_distribuidor) / 100;
    impostos = (preco_fabrica * percentual_impostos) / 100;
    preco_final = preco_fabrica + lucro_distribuidor + impostos;

    printf("O preço de fábrica é: %f \n", preco_fabrica); 
    printf("O lucro do distribuidor é de: %f \n", lucro_distribuidor);
    printf("O valor dos impostos é de: %f \n", impostos);
    printf("O preço final do carro é: %f \n", preco_final);

    system("pause");
}