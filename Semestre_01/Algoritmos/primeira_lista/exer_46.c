#include<stdio.h>
#include<stdlib.h>

main() {
    int numero_tabuada, tabuada;

    printf("Informe um número para a tabuada => ");
    scanf("%d", &numero_tabuada);

    printf("Início da tabuada \n");
    for (int i = 1; i <= 10; i++)
    {
        tabuada = numero_tabuada * i;
        printf("%d * %d = %d \n", numero_tabuada, i, tabuada);
    }
    printf("Fim da tabuada");
}