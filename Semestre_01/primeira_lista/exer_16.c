#include<stdio.h>
#include<stdlib.h>

main() {
    float lado01, lado02, area, iluminacao;

    printf("Informe um lado do cômodo => ");
    scanf("%f", &lado01);
    printf("Informe o outro lado do cômodo => ");
    scanf("%f", &lado02);
    area = lado01 * lado02;
    iluminacao = area * 18;

    printf("A área do cômodo é = %f então precisa de %fW de potência de iluminação \n" , area, iluminacao);    
}