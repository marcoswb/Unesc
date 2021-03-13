#include<stdio.h>
#include<stdlib.h>

main() {
    float preco_fabrica, perc_lucro, perc_imposto, lucro, imposto, preco_final;

    printf("Informe o preço de fabrica =>");
    scanf("%f", &preco_fabrica);
    
    printf("Informe o percentual de lucro =>");
    scanf("%f", &perc_lucro);

    printf("Informe o percentual de imposto =>");
    scanf("%f", &perc_imposto);

    lucro = (preco_fabrica * perc_lucro) / 100;
    imposto = (preco_fabrica * perc_imposto) / 100;

    preco_final = preco_fabrica + lucro + imposto;

    printf("Lucro = %f \n", lucro);
    printf("Imposto = %f \n", imposto);
    printf("Preço final = %f \n", preco_final);

    system("pause");
}