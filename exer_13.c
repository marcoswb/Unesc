#include<stdio.h>
#include<stdlib.h>

main() {
    int numero_tabuada, multiplicacao;

    printf("Informe um número para a tabuada =>");
    scanf("%d", &numero_tabuada);
    printf("Início da tabuada \n");
    for(int i = 1; i <= 10; i++) {
        multiplicacao = numero_tabuada * i;
        printf("%d * %d = %d \n", numero_tabuada, i, multiplicacao);
    }
    printf("Fim da tabuada");

    system("pause");
}
