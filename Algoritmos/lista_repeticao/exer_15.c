#include<stdlib.h>
#include<stdio.h>

main() {

    int numero;
    float fatorial = 1;

    printf("Informe um número => ");
    scanf("%d", &numero);

    for (int i = numero; i >= 1; i--){
        printf("%f \n", fatorial);
        fatorial = fatorial * i;
    }

    printf("Fatorial do número %d: %f.\n", numero, fatorial);

    system("pause");
}