#include<stdio.h>
#include<stdlib.h>

main() {
    int numero = 0, soma = 0, contador = 0, maior = 0, menor = 0, contador_pares = 0, acumulador_pares = 0, impares = 0;
    float media, media_pares, porcentagem_impares;

    while(numero != 30000){
        
        printf("Informe um número =>");
        scanf("%d", &numero);
        if(numero != 30000) {
            soma = soma + numero;
            contador++;

            if((numero % 2) == 0) {
                acumulador_pares = acumulador_pares + numero;
                contador_pares++;
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
    }

    media = soma / contador;
    media_pares = acumulador_pares / contador_pares;
    impares = contador - contador_pares;
    porcentagem_impares = (impares * 100) / contador;

    printf("Soma dos numeros %d\n", soma);
    printf("%d numeros digitados\n", contador);
    printf("Media dos numeros %f\n", media);
    printf("Maior numero %d\n", maior);
    printf("Menor numero %d\n", menor);
    printf("Media dos numeros pares %f\n", media_pares);
    printf("%f por cento de numeros impares\n", porcentagem_impares);

    system("pause");
}