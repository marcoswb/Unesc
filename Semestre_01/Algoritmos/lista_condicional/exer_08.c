#include<stdlib.h>
#include<stdio.h>

main() {
    float numero_01, numero_02, resultado, maior, menor;
    int comando;
    printf("Informe o primeiro número => ");
    scanf("%f", &numero_01);
    printf("Informe o segundo número => ");
    scanf("%f", &numero_02);

    printf("+---------------------------------------------------------+\n");
    printf("| Escolha do Usuário |              Operação              |\n");
    printf("+--------------------+------------------------------------+\n");
    printf("|         1          |       Média entre os números       |\n");
    printf("|         2          |    Diferença do maior pelo menor   |\n");
    printf("|         3          |      Produto entre os números      |\n");
    printf("|         4          |  Divisão do primeiro pelo segundo  |\n");
    printf("+--------------------+------------------------------------+\n");
    printf("Escolha a sua opção =>");
    scanf("%d", &comando);

    if(comando == 1) {
        resultado = (numero_01 + numero_02) / 2;
        printf("A média dos números é %f \n", resultado);
    } else if(comando == 2) {

        if(numero_01 >= numero_02) {
            maior = numero_01;
            menor = numero_02;
        } else if(numero_02 >= numero_01) {
            maior = numero_02;
            menor = numero_01;
        }
        
        resultado = maior - menor;
        printf("A diferença dos números é %f \n", resultado);
    } else if(comando == 3) {
        resultado = numero_01 * numero_02;
        printf("O produto dos números é %f \n", resultado);
    } else if(comando == 4) {
        resultado = numero_01 / numero_02;
        printf("A divisão dos números é %f \n", resultado);
    } else {
        printf("Opção de operação inválida! \n");
        return;
    }

    system("pause");
}