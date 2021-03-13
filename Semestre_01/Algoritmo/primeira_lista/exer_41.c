#include<stdio.h>
#include<stdlib.h>

main() {
    float peso, peso_gramas;

    printf("Informe seu peso => ");
    scanf("%f", &peso);

	peso_gramas = peso * 1000;

    printf("Peso em Kg: %f \n", peso);
    printf("Peso em gramas: %f \n", peso_gramas); 
}