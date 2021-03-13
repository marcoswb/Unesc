// Desenvolva um programa que leia e apresente os nomes de dez pessoas.

#include<stdio.h>
#include<stdlib.h>

main() {
    char nomes[10][10];

    for(int i = 0; i < 10; i++){
        printf("Informe o %dº nome =>", i+1);
        gets(nomes[i]);
    }

    for(int x = 0; x < 10; x++){
        
        printf("Nome no índice %d = %s\n", x+1, nomes[x]);
        
    }

    system("pause");
}