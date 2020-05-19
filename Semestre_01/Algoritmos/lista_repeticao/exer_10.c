#include<stdlib.h>
#include<stdio.h>

main() {

    int numero, acumulador_positivos = 0, contador_negativos = 0;

    for (int i = 1; i <= 20; i++){
        printf("Informe o %dº número => ", i);
        scanf("%d", &numero);

        if(numero >= 0) {
            acumulador_positivos = acumulador_positivos + numero;
        } else {
            contador_negativos++;
        }
    }

    printf("A soma dos números positivos é %d.\n", acumulador_positivos);
    printf("A quantidade de números negativos é %d.\n", contador_negativos);

    system("pause");
}