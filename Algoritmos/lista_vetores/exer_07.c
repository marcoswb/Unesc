#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

main() {
    int numeros[5];
    bool negativos = false;

    for(int i = 0; i < 5; i++){
        printf("Informe o %dº número =>", i+1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 5; i++){
        if(numeros[i] < 0) {
            negativos = true;
            printf("No índice %d está o primeiro numero negativo do vetor(%dº numero digitado)\n", i, i+1);
            return;
        }
        
    }
    if(!negativos) {
        printf("Negativo não encontrado\n");
    }
    system("pause");
}