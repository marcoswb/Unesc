#include<stdio.h>
#include<stdlib.h>

main() {
    int numeros[10], maior, menor, diferenca, posicao_maior, posicao_menor;

    for(int i = 0; i < 10; i++){
        printf("Informe o %dº número =>", i+1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 10; i++){
        
        if(i == 0){
            maior = numeros[i];
            menor = numeros[i];
            posicao_maior = i;
            posicao_menor = i;
        } else {
            if(numeros[i] > maior) {
                maior = numeros[i];
                posicao_maior = i;
            }
            if(numeros[i] < menor) {
                menor = numeros[i];
                posicao_menor = i;
            }
        }
    }

    diferenca = maior - menor;

    printf("A diferença entre %d(maior) e %d(menor) = %d\n", maior, menor, diferenca);
    printf("O maior numero está na posição %d do vetor(%dº numero digitado)\n", posicao_maior, posicao_maior+1);
    printf("O menor numero está na posição %d do vetor(%dº numero digitado)\n", posicao_menor, posicao_menor+1);

    system("pause");
}