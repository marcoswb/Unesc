#include<stdio.h>
#include<stdlib.h>

main() {
    int A[5], B[5], soma[5];

    printf("\nValores do vetor A\n");
    for(int i = 0; i < 5; i++){
        printf("Informe o %dº número do vetor A =>", i+1);
        scanf("%d", &A[i]);
    }

    printf("\nValores do vetor B\n");
    for(int x = 0; x < 5; x++){
        printf("Informe o %dº número do vetor B =>", x+1);
        scanf("%d", &B[x]);
    }

    printf("\nResultados:\n");
    for(int y = 0; y < 5; y++){
        soma[y] = A[y] + B[y];
        printf("A soma do %dº valor de A com o %dº valor de B = %d\n", y+1, y+1, soma[y]);
    }

    system("pause");
}