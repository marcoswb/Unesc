#include<stdio.h>
#include<stdlib.h>

main() {
    float nota, peso, acumulador_notas = 0, acumulador_pesos = 0, media;

    for(int i = 0; i < 3; i++) {
        printf("Informe a %dª nota =>", i+1);
        scanf("%f", &nota);
        printf("Informe o %dª peso =>", i+1);
        scanf("%f", &peso);
        acumulador_notas += nota*peso;
        acumulador_pesos += peso;
    }

    media = acumulador_notas / acumulador_pesos;

    printf("A média ponderada resulta em: %f \n", media);

    system("pause");
}