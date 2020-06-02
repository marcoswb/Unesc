#include<stdio.h>
#include<stdlib.h>

main() {
    int numero = 0, contador = 0;
    
    while (numero >= 0){
        printf("Informe um número =>");
        scanf("%d", &numero);
        printf("%d\n", numero);
        if(numero >= 0) {
            contador++;
        }
    }

    printf("Você digitou um número negativo\n");       
    printf("Você digitou %d números\n", contador);
    system("pause");
}