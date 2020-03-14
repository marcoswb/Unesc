#include<stdio.h>
#include<stdlib.h>

main() {
    int n1, n2, soma, subtracao, multiplicacao;

    printf("Informe o primeiro numero =>");
    scanf("%d", &n1);
    printf("Informe o segundo numero =>");
    scanf("%d", &n2);

	soma = n1 + n2;
	subtracao = n1 - n2;
	multiplicacao = n1 * n2;
	
    printf("Primeiro numero: %d           ", n1);
    printf("Segundo numero: %d \n", n2);
    
    printf("Soma: %d \n", soma);
    printf("Subtração: %d \n", subtracao);
    printf("Multiplicação: %d \n", multiplicacao);

    system("pause");
}
