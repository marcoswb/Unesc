#include<stdlib.h>
#include<stdio.h>

main() {

    int numero_01 = 1, numero_02 = 1, proximo;

    printf("1º termo: %d \n", numero_01);
    printf("2º termo: %d \n", numero_02);

    for (int i = 3; i <= 10; i++){
        proximo = numero_01 + numero_02;
        numero_02 = numero_01;
        numero_01 = proximo;
        printf("%dº termo: %d \n", i, proximo);
    }

    system("pause");
}