#include<stdio.h>
#include<stdlib.h>

printVetor(int vetor[5]) {
    for(int i = 0; i < 5; i++) {
        printf("%dº valor do vetor = %d\n", i+1, vetor[i]);
    }
}

main() {
    int A[5], B[5], indice = 0;

    for(int i = 0; i < 5; i++){
        printf("Informe o %dº número do vetor A =>", i+1);
        scanf("%d", &A[i]);
    }

    for(int y = 4; y >= 0; y--) {
        B[indice] = A[y];
        indice++;
    }
    
    printf("\n Valores do vetor A\n");
    printVetor(A);

    printf("\n Valores do vetor B\n");
    printVetor(B);
    system("pause");
}