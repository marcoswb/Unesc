#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

main() {
    char palavra[50], primeiro_caracter, ultimo_caracterer;
    int tamanho;

    printf("\nDigite uma palavra: ");
    gets(palavra);

    tamanho = (strlen(palavra));

    for (int i=0; i <= tamanho; i++) {
        if(i == 0) {
            primeiro_caracter = palavra[i];
        } else if(i == (tamanho - 1)) {
            ultimo_caracterer = palavra[i];
        }
    }

    printf("Primeira letra = %c\n", primeiro_caracter);
    printf("Ultima letra = %c\n", ultimo_caracterer);
    printf("Total de letras = %d\n", tamanho);
}