#include<stdlib.h>
#include<stdio.h>

main() {

    int numero, pares = 0;
    float percetual_pares;

    for (int i = 1; i <= 5; i++){
        printf("Informe o %dº número => ", i);
        scanf("%d", &numero);

        if((numero % 2) == 0) {
            pares++;
        }
    }

    percetual_pares = (pares * 100) / 5;

    printf("O percentual de números pares é %f.\n", percetual_pares);

    system("pause");
}