#include<stdlib.h>
#include<stdio.h>

main() {

    int numero, produto = 1;

    printf("Informe um número maior que 1 => ");
    scanf("%d", &numero);

    if(numero <= 1) {
        printf("informe um numero maior que 1");
        return;
    }

    for (int i = 1; i <= numero; i++){
        printf("%d \n", i);

        produto = produto * i;
    }

    printf("Produto: %d.\n", produto);

    system("pause");
}