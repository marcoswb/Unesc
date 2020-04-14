#include<stdlib.h>
#include<stdio.h>

main() {
    float saldo_medio, valor_credito;
    printf("Informe o saldo médio do cliente => ");
    scanf("%f", &saldo_medio);

    printf("O valor do crédito será calculado seguindo a seguinte tabela\n");
    printf("+--------------------------------------------------------+\n");
    printf("|        Saldo médio       |           Mensagem          |\n");
    printf("+--------------------------+-----------------------------+\n");
    printf("|    Acima de R$ 4000,00   | 30 por cento do saldo médio |\n");
    printf("| R$ 4000,00 a R$ 3000,00  | 25 por cento do saldo médio |\n");
    printf("| R$ 3000,00 a R$ 2000,00  | 20 por cento do saldo médio |\n");
    printf("|      Até R$ 2000,00      | 10 por cento do saldo médio |\n");
    printf("+--------------------------+-----------------------------+\n");

    if(saldo_medio > 4000) {
        valor_credito = (saldo_medio * 30) / 100;
    } else if((saldo_medio <= 4000) && (saldo_medio > 3000)) {
        valor_credito = (saldo_medio * 25) / 100;
    } else if((saldo_medio <= 3000) && (saldo_medio > 2000)) {
        valor_credito = (saldo_medio * 20) / 100;
    } else {
        valor_credito = (saldo_medio * 10) / 100;
    }

    printf("O saldo médio do cliente é de R$ %f e o valor de seu crédito é %f \n", saldo_medio, valor_credito);
    system("pause");
}