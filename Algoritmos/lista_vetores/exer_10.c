#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

main() {
    int A[5], numero, indice;
    bool numeroEncontrado = false;

    for(int i = 0; i < 5; i++){
        A[i] = rand() % 100;
    }

    printf("Informe um número(0 a 100) para ser pesquisado no vetor =>");
    scanf("%d", &numero);

    for(int y = 0; y < 5; y++) {
        if(A[y] == numero) {
            numeroEncontrado = true;
            indice = y;
        }
    }
    
    if(numeroEncontrado) {
        printf("Número encontrado no vetor na posição %d", indice);
    } else {
        printf("Elemento não encontrado");
    }
    
    system("pause");
}