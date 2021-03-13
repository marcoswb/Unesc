#include<stdlib.h>
#include<stdio.h>

main() {

    int numero;

    printf("Informe um número para a tabuada => ");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++){

        printf("%d * %d = %d \n", numero, i, numero * i);
    }

    system("pause");
}