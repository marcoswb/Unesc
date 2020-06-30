#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

printVetor(int vetor[5], int tamanho, bool interseccao) {
    if(interseccao) {
        for(int i = 0; i <= tamanho ; i++) {
            printf("%dº valor do vetor = %d\n", i+1, vetor[i]);
        }
    }
}

main() {
    int A[5], B[10], C[5], indice = -1;
    bool interseccao = false;

    printf("\nValores do vetor A\n");
    for(int i = 0; i < 5; i++){
        printf("Informe o %dº número do vetor A =>", i+1);
        scanf("%d", &A[i]);
    }

    printf("\nValores do vetor B\n");
    for(int y = 0; y < 10; y++) {
        do {
            printf("Informe o %dº número do vetor B =>", y+1);
            scanf("%d", &B[y]);
        } while((B[y] % 2) != 0);
    }
    
    for (int x = 0; x < 5; x++){
        for(int z = 0; z < 10; z++) {
            if(A[x] == B[z]) {
                indice++;
                C[indice] = A[x];
                interseccao = true;
            }
        }
    }
    
    printVetor(C, indice, interseccao);
    
    system("pause");
}