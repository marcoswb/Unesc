#include<stdio.h>
#include<stdlib.h>

main() {
    float area, diagonal_maior, diagonal_menor;

    printf("Informe a diagonal maior =>");
    scanf("%f", &diagonal_maior);
    printf("Informe a diagonal menor =>");
    scanf("%f", &diagonal_menor);
    area = (diagonal_maior * diagonal_menor) / 2;

    printf("A área do losango com as seguintes medidas é = %f \n", area);

    system("pause");
}
