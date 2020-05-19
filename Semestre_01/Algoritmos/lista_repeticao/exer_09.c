#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main() {
    char nome[20];
    float avaliacao_01, avaliacao_02, media;

    for (int i = 0; i < 15; i++) {
        printf("\nInforme o nome do estudante => ");
        scanf("%s", &nome);

        printf("Informe a nota da avaliação 1 do estudante => ");
        scanf("%f", &avaliacao_01);

        printf("Informe a nota da avaliação 2 do estudante => ");
        scanf("%f", &avaliacao_02);

        media = (avaliacao_01 + avaliacao_02) / 2;

        printf("O aluno %s tirou %f na 1ª avaliação, %f na 2ª avaliação e tem média %f \n", nome, avaliacao_01, avaliacao_02, media);
    }
    
    system("pause");
}