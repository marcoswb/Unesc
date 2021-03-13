#include<stdlib.h>
#include<stdio.h>

main() {

    int numero, menor, maior, acumulador = 0;
    float media;

    for (int i = 1; i <= 5; i++){
        printf("Informe o %dº número => ", i);
        scanf("%d", &numero);

        acumulador = acumulador + numero;

        if(i == 1) {
            maior = numero;
            menor = numero;
        } else {
            if(numero > maior) {
                maior = numero;
            }

            if(numero < menor) {
                menor = numero;
            }
        }
    }

    media = acumulador / 5;

    printf("O maior numero foi %d \n", maior);
    printf("O menor numero foi %d \n", menor);
    printf("A media dos números é %f.\n", media);

    system("pause");
}