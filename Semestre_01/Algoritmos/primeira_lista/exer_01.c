#include<stdio.h>
#include<stdlib.h>

main() {
    int n1, n2, subtracao;
    printf("Informe o primeiro número =>");
    scanf("%d", &n1);
    printf("Informe o segundo número =>");
    scanf("%d", &n2);
    subtracao = n1 - n2;
    printf("A subtração de %d por %d = %d", n1, n2, subtracao);

    system("pause");
}