#include<stdio.h>
#include<stdlib.h>

int soma(int a, int b, int c) {
    int soma = 0;
    for(int i = b; i <= c; i++) {
        if((i % a) == 0) {
            soma += i;
        }
    }

    return soma;
}

main() {
    int a, b, c, resultado;
    
    printf("Informe o primeiro número(a) =>");
    scanf("%d", &a);
    printf("Informe o segundo número(b) =>");
    scanf("%d", &b);
    printf("Informe o terceiro número(c) =>");
    scanf("%d", &c);

    resultado = soma(a, b, c);
    
    printf("A soma dos inteiros entre %d e %d divisíveis por %d = %d\n", b, c, a, resultado);
    
    system("pause");
}