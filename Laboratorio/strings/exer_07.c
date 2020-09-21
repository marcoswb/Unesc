#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<ctype.h>
main() {
    char string[50];
    int caracteres = 0, tamanho;

    printf("Digite uma string:\n");
    gets(string);

    tamanho = strlen(string);

    for (int i=0; i < tamanho; i++) {
        if (string[i] != "\0") {
            caracteres++;
        }
    }

    printf("String contém %d caracteres\n", caracteres);
}