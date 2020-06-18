#include<stdio.h>
#include<stdlib.h>

main() {
    int numero01, numero02, soma, subtracao, multiplicacao;

    printf("Informe o primeiro numero (números menores que 0 são inválidos) =>");
    scanf("%d", &numero01);
    printf("Informe o segundo numero (números menores que 0 são inválidos) =>");
    scanf("%d", &numero02);
    if(numero01 >= 0 && numero02 >= 0) {
        soma = numero01 + numero02;
        subtracao = numero01 - numero02;
        multiplicacao = numero01 * numero02;
        
        printf("Primeiro numero: %d         ", numero01);
        printf("Segundo numero: %d \n", numero02);
        
        printf("Soma: %d \n", soma);
        printf("Subtração: %d \n", subtracao);
        printf("Multiplicação: %d \n", multiplicacao);

        system("pause");
    } else {
        printf("Você digitou um número inválido \n");
        printf("Até a próxima 👋 \n");

        system("pause");
    }

	
}
