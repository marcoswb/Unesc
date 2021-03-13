#include<stdlib.h>
#include<stdio.h>

main() {

    int acumulador = 0;

    printf("Iniciando contagem...\n");

    for (int i = 100; i <= 105; i++){
        printf("%d \n", i);

        acumulador = acumulador + i;
    }

    printf("Fim da contagem.\n");
    printf("A soma dos números é igual a %d.\n", acumulador);

    system("pause");
}