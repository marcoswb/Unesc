#include<stdio.h>
#include<stdlib.h>

main() {
    int tamanho, x;
    
    printf("Digite o tamanho do vetor =>");
    scanf("%d", &tamanho);

    int vetor[tamanho], soma = 0;

    for (int i = 0; i < tamanho; i++){
        printf("Digite o %dº valor do vetor =>\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int y = 0; y < tamanho; y++) {
        if((vetor[y] % 2) != 0) {
            soma += vetor[y];
        }
    }
    
    printf("A soma dos ímpares é = %d\n", soma);

    system("pause");
}