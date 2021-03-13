#include<stdio.h>
#include<stdlib.h>

printVetor(int vetor[5]) {
    printf("\n Valores do vetor\n");
    for(int i = 0; i < 5; i++) {
        printf("%dº valor do vetor = %d\n", i+1, vetor[i]);
    }
}

main() {
    int A[5], aux;

    printf("\nValores do vetor\n");
    for(int i = 0; i < 5; i++){
        printf("Informe o %dº número do vetor A =>", i+1);
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int y = i; y < 5; y++){
            if(A[i] > A[y]){
                aux = A[i];
                A[i] = A[y];
                A[y] = aux;
            }
        }
    }

    printVetor(A);
    system("pause");
}