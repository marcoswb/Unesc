#include<stdio.h>
#include<stdlib.h>

int multiplicacao(int a, int b) {
    int multiplicacao;
    
    multiplicacao = a * b;

    return multiplicacao;
}

main() {
    int a, b, resultado;
    
    printf("Informe o primeiro número =>");
    scanf("%d", &a);
    printf("Informe o segundo número =>");
    scanf("%d", &b);

    resultado = multiplicacao(a, b);
    
    printf("A multiplicacao de %d e %d = %d\n", a, b, resultado);
    
    system("pause");
}