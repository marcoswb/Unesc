#include<stdio.h>
#include<stdlib.h>

main() {
    int n1, n2, n3, multiplicacao;

    printf("Informe o primeiro número =>");
    scanf("%d", &n1);
    printf("Informe o segundo número =>");
    scanf("%d", &n2);
    printf("Informe o terceiro número =>");
    scanf("%d", &n3);
    multiplicacao = n1 * n2 * n3;

    printf("A multiplicação de %d por %d por %d = %d \n", n1, n2, n3, multiplicacao);

    system("pause");
}