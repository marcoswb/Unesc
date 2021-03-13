// Desenvolver um programa que efetue a leitura de dez elementos de um vetor A.
// Construir um vetor B do mesmo tipo, obedecendo a seguinte regra de formação:
// se o índice for par, o valor deverá ser multiplicado por 5;
// sendo ímpar, deverá ser somado com 5.
// Ao final, mostrar os conteúdos dos dois vetores.

#include<stdio.h>
#include<stdlib.h>

main() {
    float A[10];
    float B[10];

    for(int i = 0; i < 10; i++){
        printf("Informe o %dº número da vetor =>", i+1);
        scanf("%f", &A[i]);

        if((i % 2) == 0){
            B[i] = A[i] * 5;
        } else {
            B[i] = A[i] + 5;
        }
    }

    for(int x = 0; x < 10; x++){
        
        printf("Vetor A na posição %d = %f\n", x+1, A[x]);
        printf("Vetor B na posição %d = %f\n", x+1, B[x]);
        
    }

    system("pause");
}