#include<stdlib.h>
#include<stdio.h>

main() {

    int numero, pares = 0, impares = 0;

    for (int i = 1; i <= 5; i++){
        printf("Informe o %dº número => ", i);
        scanf("%d", &numero);

        if((numero % 2) == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("A quantidade de números pares é %d.\n", pares);
    printf("A quantidade de números impares é %d.\n", impares);

    system("pause");
}