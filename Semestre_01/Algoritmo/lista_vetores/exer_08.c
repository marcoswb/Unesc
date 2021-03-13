#include<stdio.h>
#include<stdlib.h>
#include<string.h>


printVetor(int tamanhoVetor, int vetor[tamanhoVetor], int idvetor) {
    char nomeVetor[2];

    switch (idvetor) {
        case 1: {
            strcpy(nomeVetor, "A");
            break;
        }   
        
        case 2: {
            strcpy(nomeVetor, "B");
            break;
        }

        case 3: {
            strcpy(nomeVetor, "C");
            break;
        }

        default:
            break;
    }
    printf("\n Valores do vetor %s\n", nomeVetor);
    for(int i = 0; i < tamanhoVetor; i++) {
        printf("%dº valor do vetor %s = %d\n", i+1, nomeVetor, vetor[i]);
    }
}

main() {
    int A[5], B[5], C[10], indice_B;

    printf("\nValores do vetor A\n");
    for(int i = 0; i < 5; i++){
        printf("Informe o %dº número do vetor A =>", i+1);
        scanf("%d", &A[i]);
        C[i] = A[i];
    }

    printf("\nValores do vetor B\n");
    for(int x = 0; x < 5; x++){
        printf("Informe o %dº número do vetor B =>", x+1);
        scanf("%d", &B[x]);
        indice_B = 5 + x;
        C[indice_B] = B[x];
    }

    printf("\nResultados:\n");
    printVetor(5, A, 1);
    printVetor(5, B, 2);
    printVetor(10, C, 3);

    system("pause");
}