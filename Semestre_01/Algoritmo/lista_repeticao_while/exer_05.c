#include<stdio.h>
#include<stdlib.h>

main() {
    int numero, contador = 0, acumulador = 0, maior = 0, menor = 0;
    float media;
    
    while (numero != 0){

        printf("Informe um número =>");
        scanf("%d", &numero);
        printf("%d\n", numero);
        
        if(numero != 0) {
            contador++;
            acumulador = acumulador + numero;
        }

        if(contador != 1) {
            if(numero > maior) {
                maior = numero;
            }

            if(numero < menor) {
                menor = numero;
            }
        } else {
            maior = numero;
            menor = numero;
        }
    }
    
    media = acumulador / contador;
        
    printf("Você digitou o número 0\n");
    printf("Maior número %d\n", maior);
    printf("Menor número %d\n", menor);
    printf("Você digitou %d números e a média deles foi %f\n", contador, media);
    system("pause");
}