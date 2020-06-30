#include<stdio.h>
#include<stdlib.h>

printVetor(int tamanho, int vetor[tamanho]) {
    for(int i = 0; i < tamanho; i++) {
        printf("%dº valor = %d\n", i+1, vetor[i]);
    }
}

main() {
    int vetor[6], pares[6], contadorPares = 0, impares[6], contadorImpares = 0, indicePar = -1, indiceImpar = -1;

    for(int i = 0; i < 6; i++){
        printf("Informe o %dº numero =>", i+1);
        scanf("%d", &vetor[i]);

        if((vetor[i] % 2) == 0) {
            indicePar++;
            pares[indicePar] = vetor[i];
            contadorPares++; 
        } else {
            indiceImpar++;
            impares[indiceImpar] = vetor[i];
            contadorImpares++; 
        }
    }
    
    printf("\nResultados\n");
    printf("%d numeros pares =>\n", contadorPares);
    printVetor(contadorPares, pares);
    printf("%d numeros impares =>\n", contadorImpares);
    printVetor(contadorImpares, impares);

    system("pause");
}