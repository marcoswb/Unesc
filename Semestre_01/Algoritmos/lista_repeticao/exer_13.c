#include<stdlib.h>
#include<stdio.h>

main() {

    int numero, contador_pares = 0, contador_impares = 0, soma_pares = 0, soma_impares = 0;
    float percentual_pares, percentual_impares;

    for (int i = 85; i <= 906; i++){
        
        if((i % 2) == 0) {
            contador_pares++;
            soma_pares = soma_pares + i;
            printf("\033[0;34m");
            printf("par: %d\n", i);
            printf("\033[0m");
        } else {
            contador_impares++;
            soma_impares = soma_impares + i;
            printf("\033[1;31m");
            printf("impar: %d\n", i);
            printf("\033[0m");
        }
    }

    percentual_pares = (contador_pares * 100) / (906 - 85);
    percentual_impares = (contador_impares * 100) / (906 - 85);

    printf("A soma dos números pares é %d.\n", soma_pares);
    printf("A soma dos números impares é %d.\n", soma_impares);
    printf("O percentual de números pares é %f.\n", percentual_pares);
    printf("O percentual de números impares é %f.\n", percentual_impares);

    system("pause");
}