#include<stdio.h>
#include<stdlib.h>

main() {
    int tamanho, numero, vetor;

    
    printf("Digite o tamanho dos vetores =>");
    scanf("%d", &tamanho);

    int vetor_01[tamanho], vetor_02[tamanho], vetor_03[tamanho*2];

    for (int y = 0; y < 2; y++){
        vetor = (y == 0) ? 1 : 2;

        for (int i = 0; i < tamanho; i++){
            printf("Digite o %dº valor do vetor %d =>", i+1, vetor);
            scanf("%d", &numero);

            if(y == 0){
                vetor_01[i] = numero;
            } else {
                vetor_02[i] = numero;
            }
        }
        
    }

    for (int x = 0; x < tamanho; x++){
        vetor_03[x] = vetor_01[x];
        vetor_03[x+1] = vetor_02[x];
    }


    tamanho = tamanho * 2;
    for (int t = 0; t < 6; t++){
        printf("Vetor 3 na posição %d = %d\n", t+1, vetor_03[t]);
    }

    system("pause");
}