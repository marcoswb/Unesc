#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main() {

    char nome[20];
    int filhos, contador_salario[2];
    float salario, media_salario[2], acumulador_salario[2];

    acumulador_salario[0] = 0;
    acumulador_salario[1] = 0;
    contador_salario[0] = 0;
    contador_salario[1] = 0;

    for (int i = 1; i <= 100; i++){
        printf("Informe o nome da %dº pessoa => ", i);
        scanf("%s", &nome);

        printf("Informe o salário da %dº pessoa => ", i);
        scanf("%f", &salario);

        printf("Informe o numero de filhos da %dº pessoa => ", i);
        scanf("%d", &filhos);
        
        if(filhos == 2) {
            acumulador_salario[0] = acumulador_salario[0] + salario;
            contador_salario[0] = contador_salario[0] + 1;
        } else if(filhos == 1) {
            acumulador_salario[1] = acumulador_salario[1] + salario;
            contador_salario[1] = contador_salario[1] + 1;
        }
    }

    media_salario[0] = acumulador_salario[0] / contador_salario[0];
    media_salario[1] = acumulador_salario[1] / contador_salario[1];

    if(media_salario[0] > media_salario[1]) {
        printf("A média de salário das pessoas que tem 2 filhos é maior \n");
    } else {
        printf("A média de salário das pessoas que tem 1 filho é maior \n");
    }

    printf("%d pessoas tem 2 filhos e seu salário médio é %f \n", contador_salario[0], media_salario[0]);
    printf("%d pessoas tem 1 filho e seu salário médio é %f \n", contador_salario[1], media_salario[1]);
    
    system("pause");
}