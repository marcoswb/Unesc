#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<ctype.h>
main() {
    char string[50], nova_string[50];
    int tamanho, ultimo_caracterer;

    printf("Digite uma string:\n");
    gets(string);

    tamanho = strlen(string);

    for (int i=0; i < tamanho; i++) {
        if (i == 0) {
            ultimo_caracterer = tamanho - 1;
            nova_string[ultimo_caracterer] = string[i];
        } else {
            nova_string[i-1] = string[i];
        }
    }

    printf("nova string = %s\n", nova_string);
}