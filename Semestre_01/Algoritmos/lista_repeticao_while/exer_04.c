#include<stdio.h>
#include<stdlib.h>

main() {
    int numero = 0, contador = 0, acumulador = 0;
    float media;
    
    while (numero >= 0){
        printf("Informe um número =>");
        scanf("%d", &numero);
        printf("%d\n", numero);
        
        if(numero >= 0) {
            contador++;
            acumulador = acumulador + numero;
        }
    }
    media = acumulador / contador;
    
    printf("Você digitou um número negativo\n");      
    printf("Você digitou %d números e a média deles foi %f\n", contador, media);
    system("pause");
}