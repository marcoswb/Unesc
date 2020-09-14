#include<stdio.h>
#include<stdlib.h>

main() {
    int tamanho, codigo;
    
    printf("Digite o tamanho do vetor =>");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    for (int i = 0; i < tamanho; i++){
        printf("Digite o %dº valor do vetor =>\n", i+1);
        scanf("%f", &vetor[i]);
    }
    
    printf("Digite o codigo =>");
    scanf("%d", &codigo);

    for (int y = 0; y < tamanho; y++) {
        if(codigo == 2) {
            printf("Indice %d = %f\n", tamanho-y-1, vetor[tamanho-y-1]);
        } else {
            printf("Indice %d = %f\n", y, vetor[y]);
        }
    }
    

    system("pause");
}