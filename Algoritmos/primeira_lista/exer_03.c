#include<stdio.h>
#include<stdlib.h>

main() {
    int n1, n2, divisao;

    printf("Informe o primeiro número =>");
    scanf("%d", &n1);
    printf("Informe o segundo número =>");
    scanf("%d", &n2);
    divisao = n1 / n2;

    printf("A divisão de %d por %d = %d \n", n1, n2, divisao);

}