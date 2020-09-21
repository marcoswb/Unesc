#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<ctype.h>

char * intercalar( char * saida, const char * a, const char * b) {

    int i = 0;
    int tamanho_a = strlen(a);
    int tamanho_b = strlen(b);
    int tamanho_total = tamanho_a + tamanho_b;

    for( i = 0; i < tamanho_a; i++ ) {
        saida[i * 2] = a[i];
    }
        

    for( i = 0; i < tamanho_b; i++ ) {
        saida[1 + i * 2] = b[i];
    }
        
    saida[tamanho_total] = 0;

    return saida;
}

main() {
    char string01[50];
    char string02[50];
    char saida[100];

    printf("Digite a primeira string:\n");
    gets(string01);

    printf("Digite a segunda string:\n");
    gets(string02);

    intercalar(saida, string01, string02);

    printf("saida = %s\n", saida );
}