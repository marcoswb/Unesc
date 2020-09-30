#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

main() {
    char string01[50], string02[50];
    int numero, tamanho01, tamanho02, aux01, aux02;

    printf("\nDigite uma string: ");
    gets(string01);

    printf("\nDigite outra string: ");
    gets(string02);

    printf("\nDigite o numero: ");
    scanf("%d", &numero);

    tamanho01 = strlen(string01);
    tamanho02 = strlen(string02);

    for (int i=0; i <= numero; i++) {
        
        aux01 = (tamanho01) - i;
        aux02 = (tamanho02) - i;

        string02[aux02] = string01[aux01];
    }

    printf("Nova String = %s\n", string02);
}