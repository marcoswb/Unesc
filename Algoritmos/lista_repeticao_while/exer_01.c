#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
    char letra[2] = "";
    
    while (strcmp(letra, "F") != 0){
        printf("Informe uma letra =>");
        gets(letra);
        printf("%s\n", letra);
    }
        
    printf("Você informou a letra F\n");
    system("pause");
}