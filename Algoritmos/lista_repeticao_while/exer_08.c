#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
    int conta, contador_geral = 0, contador_negativo = 0, contador_positivo = 0, acumulador_positivo = 0;
    char nome[20];
    float saldo, percentual_positivo, saldo_agencia = 0;
    
    do {
        printf("Informe a conta =>");
        scanf("%d", &conta);
        printf("Informe o nome =>");
        scanf("%s", &nome);
        printf("Informe o saldo =>");
        scanf("%f", &saldo);
        
        if(conta != -999) {
            contador_geral++;
            saldo_agencia = saldo_agencia + saldo;

            printf("conta: %d\n", conta);
            printf("saldo: %f\n", saldo);
            if(saldo >= 0) {
                printf("saldo positivo\n");
                contador_positivo++;
            } else {
                printf("saldo negativo\n");
                contador_negativo++;
            }
        }
        
    }
    while ((conta != -999) || (contador_geral == 2));

    percentual_positivo = (contador_positivo * 100) / contador_geral;
    
    printf("%d clientes tem saldo negativo\n", contador_negativo);
    printf("a agencia tem %d clientes \n", contador_geral);
    printf("%f por cento tem saldo positivo \n", percentual_positivo);
    printf("a agencia tem saldo de: %f \n", saldo_agencia);
    system("pause");
}