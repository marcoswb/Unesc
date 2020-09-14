#include<stdio.h>
#include<stdlib.h>

main() {
    int tamanho, x;
    
    printf("Digite o tamanho do vetor =>");
    scanf("%d", &tamanho);

    float vetor_A[tamanho], vetor_B[tamanho];

    for (int i = 0; i < tamanho; i++){
        printf("Digite o %dº valor do vetor =>\n", i+1);
        scanf("%f", &vetor_A[i]);
    }
    
    printf("Digite um numero =>");
    scanf("%d", &x);

    for (int y = 0; y < tamanho; y++) {
        vetor_B[y] = vetor_A[y] * x;

        printf("%f * %d = %f\n", vetor_A[y], x, vetor_B[y]);
    }
    

    system("pause");
}