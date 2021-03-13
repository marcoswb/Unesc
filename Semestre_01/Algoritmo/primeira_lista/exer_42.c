#include<stdio.h>
#include<stdlib.h>

main() {
    float pe, jarda, milha;

    printf("Informe uma distância (em pés) => ");
    scanf("%f", &pe);

    jarda = pe / 3;
    milha = jarda / 1760;

    printf("Distância em pés: %f \n", pe);
    printf("Distância em jardas: %f \n", jarda);
    printf("Distância em milhas: %f \n", milha);
}