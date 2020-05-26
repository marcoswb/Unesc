#include<stdlib.h>
#include<stdio.h>

main() {

    int idade, opiniao, contador_excelente = 0, contador_regular = 0, contador_bom = 0;
    float media_idade, acumulador_idade = 0, percentual_bom;

    for (int i = 1; i <= 10; i++){
        printf("Informe a idade do %dº expectador => ", i);
        scanf("%d", &idade);

        printf("Opiniões do filme \n");
        printf("1. regular \n");
        printf("2. bom \n");
        printf("3. excelente \n");
        printf("Informe a opinião em relação ao filme da %dº pessoa => ", i);
        scanf("%d", &opiniao);
        
        if(opiniao == 3) {
            acumulador_idade = acumulador_idade + idade;
            contador_excelente++;
        } else if(opiniao == 1) {
            contador_regular++;
        } else if(opiniao == 2) {
            contador_bom++;
        } else {
            printf("Opção inválida \n");
        }
    }
    
    media_idade = acumulador_idade / contador_excelente;
    percentual_bom = (contador_bom * 100) / 10;

    printf("Media de idade dos expectadores que votaram em excelente é de %f \n", media_idade);
    printf("%d votaram em regular \n", contador_regular);
    printf("%f por cento de pessoas acharam o filme bom", percentual_bom);

    system("pause");
}