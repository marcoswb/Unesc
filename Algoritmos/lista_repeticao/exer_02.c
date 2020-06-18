#include<stdlib.h>
#include<stdio.h>

main() {
    float numero, acumulador, media;
    acumulador = 0;

    for (int i = 1; i <= 4; i++){
        printf("Informe o %dº número => ", i);
        scanf("%f", &numero);

        acumulador = acumulador + numero;
    }
    
    media = acumulador / 4;

    printf("\nA média dos números é %f \n", media);
    
    system("pause");
}