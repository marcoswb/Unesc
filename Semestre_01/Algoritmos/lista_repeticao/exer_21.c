#include<stdlib.h>
#include<stdio.h>

main() {

    int idade, contador[2];
    float peso, media_pesos[2], acumulador_pesos[2];

    acumulador_pesos[0] = 0;
    acumulador_pesos[1] = 0;
    contador[0] = 0;
    contador[1] = 0;

    for (int i = 1; i <= 12; i++){
        printf("Informe a idade da %dº pessoa => ", i);
        scanf("%d", &idade);

        printf("Informe o peso da %dº pessoa => ", i);
        scanf("%f", &peso);

        if((idade >= 0) && (idade <= 18)) {
            acumulador_pesos[0] = acumulador_pesos[0] + peso;
            contador[0] = contador[0] + 1;
        } else if(idade > 28) {
            acumulador_pesos[1] = acumulador_pesos[1] + peso;
            contador[1] = contador[1] + 1;
        }
    }

    media_pesos[0] = acumulador_pesos[0] / contador[0];
    media_pesos[1] = acumulador_pesos[1] / contador[1];
    
    printf("A média de peso de %d pessoas da faixa de 0 a 18 anos é %f Kg \n", contador[0], media_pesos[0]);
    printf("A média de peso de %d pessoas da faixa de maiores de 28 anos é %f Kg \n", contador[1], media_pesos[1]);

    system("pause");
}