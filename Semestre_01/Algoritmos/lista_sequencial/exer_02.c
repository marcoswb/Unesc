#include<stdlib.h>
#include<stdio.h>

main() {
    int numero_01, numero_02, adicao;
    printf("Informe um número => ");
    scanf("%d", &numero_01);
    printf("Informe um número => ");
    scanf("%d", &numero_02);

    adicao = numero_01 + numero_02;

    if(adicao > 10) {
        printf("A soma dos números é maior que 10 \n");
        printf("O resultado é %d \n", adicao);
    } else {
        printf("A soma dos números é menor ou igual a 10 \n");
    }

    system("pause");
}