#include<stdlib.h>
#include<stdio.h>

main() {
    float peso, acumulador_peso = 0, acumulador_peso_geral = 0, media_peso, media_idade, media_peso_geral, media_idade_geral;
    int idade, acumulador_idade = 0, acumulador_idade_geral = 0;

    for (int i = 1; i <= 20; i++){
        printf("Time %d \n", i);

        for (int y = 1; y <= 22; y++){
            printf("Informe a idade do %dº jogador => ", y);
            scanf("%d", &idade);

            printf("Informe o peso do %dº jogador => ", y);
            scanf("%f", &peso);
            
            acumulador_peso = acumulador_peso + peso;
            acumulador_idade = acumulador_idade + idade;
        }

        media_peso = acumulador_peso / 22;
        media_idade = acumulador_idade / 22;
        acumulador_peso_geral = acumulador_peso_geral + media_peso;
        acumulador_idade_geral = acumulador_idade_geral + media_idade;
        acumulador_peso = 0;
        acumulador_idade = 0;

        printf("A media de peso do time é de %f \n", i, media_peso);
        printf("A media de idade do time é de %f \n", i, media_idade);
    }

    media_peso_geral = acumulador_peso_geral / 20;
    media_idade_geral = acumulador_idade_geral / 20;

    printf("A media de peso dos times é de %f \n", media_peso_geral);
    printf("A media de idade dos times é de %f \n", media_idade_geral);
    
    system("pause");
}