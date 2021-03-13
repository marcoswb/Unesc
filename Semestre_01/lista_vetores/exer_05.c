#include<stdio.h>
#include<stdlib.h>

main() {
    int A[5], triplo[5];

    for(int i = 0; i < 5; i++){
        printf("Informe o %dº número do vetor =>", i+1);
        scanf("%d", &A[i]);
    }

    printf("\nResultados:\n");
    for(int y = 0; y < 5; y++){
        triplo[y] = A[y] * 3;
        printf("%d * 3 = %d\n", A[y], triplo[y]);
    }

    system("pause");
}