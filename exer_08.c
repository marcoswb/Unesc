#include<stdio.h>
#include<stdlib.h>

main() {
    float peso_kg, peso_gramas;

    printf("Informe o peso de uma pessoa (em Kg) =>");
    scanf("%f", &peso_kg);
    peso_gramas = peso_kg * 1000;

    printf("O peso da pessoa em gramas é = %f \n", peso_gramas);

    system("pause");
}
