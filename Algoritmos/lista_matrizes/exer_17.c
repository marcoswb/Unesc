#include<stdio.h>
#include<stdlib.h>

main() {
    int vetor[15][2], numero = 30;

    printf("\nValores do vetor\n");
    for(int i = 0; i < 15; i++){
        printf("Informe o %dº número do vetor A =>", i+1);
        scanf("%d", &vetor[i][0]);

        if(vetor[i][0] == numero) {
            vetor[i][1] = 1;
        }
    }

    printf("\nIndices onde se encontra o numero 30:\n");
    for(int y = 0; y < 15; y++){

        if(vetor[y][1] == 1) {
           printf("Na posição %d há o numero 30\n", y);
        }
    }

    system("pause");
}