#include<stdio.h>
#include<stdlib.h>

main() {
    float area, base_maior, base_menor, altura;

    printf("Informe a base maior =>");
    scanf("%f", &base_maior);
    printf("Informe a base menor =>");
    scanf("%f", &base_menor);
    printf("Informe a altura =>");
    scanf("%f", &altura);
    area = ((base_maior + base_menor) * altura) / 2;

    printf("A área do trapézio com as seguintes medidas é = %f \n", area);

    system("pause");
}
