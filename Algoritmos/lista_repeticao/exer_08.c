#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main() {
    char nome[20], sexo[2];
    int idade;

    for (int i = 1; i <= 20; i++) {
        printf("\nInforme o nome da %dª pessoa => ", i);
        scanf("%s", &nome);

        printf("Informe a idade da %dª pessoa => ", i);
        scanf("%d", &idade);

        printf("Informe o sexo da %dª pessoa => ", i);
        scanf("%s", &sexo);

        if((strcmp(sexo, "M") == 0) && (idade > 21)) {
            printf("%s é homem e tem mais de 21 anos \n", nome);
        }
    }
    
    system("pause");
}