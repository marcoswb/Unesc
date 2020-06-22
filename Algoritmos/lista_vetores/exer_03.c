#include<stdio.h>
#include<stdlib.h>

main() {
    int numeros[5], maior, menor, acumulador = 0;
    float media;

    for(int i = 0; i < 5; i++){
        printf("Informe o %dº número =>", i+1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 5; i++){

        acumulador = acumulador + numeros[i];
        
        if(i == 0){
            maior = numeros[i];
            menor = numeros[i];
        } else {
            if(numeros[i] > maior) {
                maior = numeros[i];
            }
            if(numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    media = acumulador / 5;

    printf("O maior valor foi %d\n", maior);
    printf("O menor valor foi %d\n", menor);
    printf("A media de valores foi %f\n", media);

    system("pause");
}