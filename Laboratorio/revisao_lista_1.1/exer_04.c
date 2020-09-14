#include<stdio.h>
#include<stdlib.h>

main() {
    int tamanho, indice_maior;
    float maior;

    
    printf("Digite o tamanho do vetor =>");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    for (int i = 0; i < tamanho; i++){
        printf("Digite o %dº valor do vetor =>\n", i+1);
        scanf("%f", &vetor[i]);

        if(i == 0){
            maior = vetor[i];
            indice_maior = i;
        } else {
            if(vetor[i] > maior) {
                maior = vetor[i];
                indice_maior = i;
            }
        }
    }
        
    printf("No indice %d está o maior numero = %f\n", indice_maior, vetor[indice_maior]);
    

    system("pause");
}