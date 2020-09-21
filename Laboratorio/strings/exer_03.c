#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<ctype.h>
main() {
    char string[50], nova_string[50];
    int tamanho;

    printf("Digite uma frase:\n");
    gets(string);

    tamanho = strlen(string);

    for (int i=0; i <= tamanho; i++) {
        if (tolower(string[i]) == 'a') {
            nova_string[i] = 'b';
        } else {
            nova_string[i] = string[i];
        }
    }
    printf("\nnova string = %s", nova_string);
}