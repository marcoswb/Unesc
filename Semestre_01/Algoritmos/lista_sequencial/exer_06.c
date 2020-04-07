#include<stdlib.h>
#include<stdio.h>

main() {
    float numero_01, numero_02, maior, menor;
    printf("Informe a primeira nota => ");
    scanf("%f", &numero_01);
    printf("Informe a segunda nota => ");
    scanf("%f", &numero_02);

    if(numero_01 > numero_02) {
        maior = numero_01;
        menor = numero_02;
    } else if(numero_01 < numero_02) {
        maior = numero_02;
        menor = numero_01;
    } else {
        printf("Os números são iguais \n");
        return;
    }

    printf("O maior número entre os dois é o %f \n", maior);
    printf("O menor número entre os dois é o %f \n", menor);

    system("pause");
}