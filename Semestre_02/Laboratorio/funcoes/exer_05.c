#include<stdio.h>
#include<stdlib.h>

multiplicacao(int a, int b) {
    int multiplicacao;
    
    multiplicacao = a * b;

    printf("A multiplicacao de %d e %d = %d\n", a, b, multiplicacao);
}

main() {
    int a, b;
    
    printf("Informe o primeiro número =>");
    scanf("%d", &a);
    printf("Informe o segundo número =>");
    scanf("%d", &b);

    multiplicacao(a, b);
    
    system("pause");
}