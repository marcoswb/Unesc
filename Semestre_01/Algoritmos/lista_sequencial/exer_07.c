#include<stdlib.h>
#include<stdio.h>

main() {
    float numero_01, numero_02, numero_03, menor;
    printf("Informe o primeiro numero => ");
    scanf("%f", &numero_01);
    printf("Informe o segundo numero => ");
    scanf("%f", &numero_02);
    printf("Informe o terceiro numero => ");
    scanf("%f", &numero_03);

    if((numero_01 <= numero_02) && (numero_01 <= numero_03)) {
        menor = numero_01;
    } else if((numero_02 <= numero_01) && (numero_02 <= numero_03)) {
        menor = numero_02;
    } else if((numero_03 <= numero_01) && (numero_03 <= numero_02)) {
        menor = numero_03;
    }

    printf("O menor número entre os três é o %f \n", menor);

    system("pause");
}