#include<stdio.h>
#include<stdlib.h>

main() {
    float n1, n2, p1, p2, media;

    printf("Informe a primeira nota =>");
    scanf("%f", &n1);
    printf("Informe o peso da nota =>");
    scanf("%f", &p1);
    printf("Informe a segunda nota =>");
    scanf("%f", &n2);
    printf("Informe o peso da nota =>");
    scanf("%f", &p2);
    media = ((n1 * p1) + (n2 * p2)) / (p1 + p2);

    printf("A média ponderada é = %f, %f, %f, %f, %f \n", n1, n2, p1, p2, media);

    system("pause");
}
