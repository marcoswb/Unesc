#include<stdlib.h>
#include<stdio.h>

main() {
    float numero_01, numero_02, resultado;
    int comando;
    printf("Informe o primeiro numero => ");
    scanf("%f", &numero_01);
    printf("Informe o segundo numero => ");
    scanf("%f", &numero_02);

    printf("ID da operação | operação \n");
    printf("1              | média     \n");
    printf("2              | diferença     \n");
    printf("3              | produto     \n");
    printf("4              | divisão     \n");
    scanf("%d", &comando);

    if(comando == 1) {
        resultado = (numero_01 + numero_02) / 2;
        printf("A média dos numeros é %f \n", resultado);
    } else if(comando == 2) {
        resultado = numero_01 - numero_02;
        printf("A diferença dos numeros é %f \n", resultado);
    } else if(comando == 3) {
        resultado = numero_01 * numero_02;
        printf("O produto dos numeros é %f \n", resultado);
    } else if(comando == 4) {
        resultado = numero_01 / numero_02;
        printf("A divisão dos numeros é %f \n", resultado);
    } else {
        printf("Opção de operação inválida \n");
        return;
    }

    system("pause");
}