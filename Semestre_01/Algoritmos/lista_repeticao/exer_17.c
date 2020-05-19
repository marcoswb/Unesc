#include<stdlib.h>
#include<stdio.h>

main() {

    int vezes_repetir, numero, acumulador = 0, maior, menor, contador_impares = 0;
    float media, percentual_impares;

    printf("Informe quantos numeros você deseja ler => ");
    scanf("%d", &vezes_repetir);

    for (int i = 1; i <= vezes_repetir; i++){
        printf("Informe o %dº número => ", i);
        scanf("%d", &numero);

        acumulador = acumulador + numero;

        if((numero % 2) != 0) {
            contador_impares++;
        }

        if(i == 1) {
            maior = numero;
            menor = numero;
        } else {
            if(numero > maior) {
                maior = numero;
            }

            if(numero < menor) {
                menor = numero;
            }
        }
    }

    media = acumulador / vezes_repetir;
    percentual_impares = (contador_impares * 100) / vezes_repetir;

    printf("A soma dos números é %d.\n", acumulador);
    printf("%d numeros foram informados.\n", vezes_repetir);
    printf("A média dos numeros é %f \n", media);
    printf("O maior numero foi %d \n", maior);
    printf("O menor numero foi %d \n", menor);
    printf("O percentual de impares é %f \n", percentual_impares);

    system("pause");
}