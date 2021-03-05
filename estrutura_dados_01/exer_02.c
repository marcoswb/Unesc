// Desenvolver um programa que efetue a leitura de cinco elementos de um vetor. 
// No final, apresente o total da soma de todos os elementos que sejam ímpares. 
// Perceba que em relação ao primeiro exemplo há uma diferença: 
// o primeiro pedia para verificar se o índice era par ou ímpar. 
// Neste, está sendo solicitado que se analise a condição do elemento e não do índice.


#include<stdio.h>
#include<stdlib.h>

main() {
    int A[5];
    float contador = 0;

    for(int i = 0; i < 5; i++){
        printf("Informe o %dº número da vetor =>", i+1);
        scanf("%d", &A[i]);

        if((A[i] % 2) != 0){
            contador += A[i];
        }
    }

    printf("Soma dos impares é = %f\n", contador);

    system("pause");
}