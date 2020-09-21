#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <stdio.h>
#include<ctype.h>
main() {
    char frase[21], letra;
    int tamanho, letras = 0;

    printf("\nDigite uma frase: ");
    gets(frase);

    printf("\nDigite a letra que você quer buscar na frase: ");
    gets(letra);

    tamanho = strlen(frase);

    for (int i=0; i <= tamanho; i++) {
        if ((toupper(frase[i]) == (toupper(letra)))) {
            letras++;
        }
    }
    printf("\nQuantidade da letra %s = %d", letra, letras);
}