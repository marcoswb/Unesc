#include<stdio.h>
#include<stdlib.h>

main() {
    float lado, area;

    printf("Informe o lado do quadrado =>");
    scanf("%f", &lado);
    area = lado * lado;

    printf("A área do quadrado com as seguintes medidas é = %f \n", area);

}