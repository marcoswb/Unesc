#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<ctype.h>
main() {
    char string[50];
    int palavras = 1, tamanho;

    printf("Digite uma string:\n");
    gets(string);

    tamanho = strlen(string);

    for (int i=0; i < tamanho; i++) {
        if (string[i] == ' ' && string[i+1] != ' ') {
            palavras++;
        }
    }

    printf("String contém %d palavras\n", palavras);
}