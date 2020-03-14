#include<stdio.h>
#include<stdlib.h>

main() {
    float peso, engordar, emagrecer;

    printf("Informe o peso da pessoa =>");
    scanf("%f", &peso);
    engordar = peso + ((peso * 15) / 100);
    emagrecer = peso - ((peso * 20) / 100);

    printf("Se a pessoa com peso %f engordar 15% = %f Kg, se emagrecer 20% = %f Kg \n", peso, engordar, emagrecer);

    system("pause");
}
