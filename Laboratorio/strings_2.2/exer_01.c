#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

main() {
    char frase[50], frase_duplicada[100];
    int tamanho;

    printf("\nDigite uma frase: ");
    gets(frase);

    tamanho = (strlen(frase));

    for (int i=0; i <= tamanho; i++) {
        frase_duplicada[i] = frase[i];
        frase_duplicada[i*2] = frase[i];

        printf("%c", frase_duplicada[i]);
        printf("%c", frase_duplicada[i*2]);
    }

    printf("\n");
}