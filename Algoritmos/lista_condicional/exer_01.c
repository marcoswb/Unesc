#include<stdlib.h>
#include<stdio.h>

main() {
    float numero, metade;
    printf("Informe um número => ");
    scanf("%f", &numero);

    if(numero > 20) {
        metade = numero / 2;
        printf("O número é maior que 20 \n");
        printf("A metade do número é %f \n", metade);
    } else {
        printf("O número é menor ou igual a 20 \n");
    }

    system("pause");
}