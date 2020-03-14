#include<stdio.h>
#include<stdlib.h>

main() {
    float A, B, C = 0;

    printf("Informe um valor para A => ");
    scanf("%f", &A);
    printf("Informe um valor para B => ");
    scanf("%f", &B);

    C = A;
    A = B;
    B = C;

    printf("O novo valor de A = %f e o novo valor de B = %f \n", A, B);

    system("pause");
}
