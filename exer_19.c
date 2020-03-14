#include<stdio.h>
#include<stdlib.h>

main() {
    char nome[50], descricao[50];
    float frequencia, media;

    printf("Informe o nome da disciplina => ");
    scanf("%s", nome);
    printf("Informe a descrição da disciplina => ");
    scanf("%s", descricao);
    printf("Informe a frequência necessária para a disciplina => ");
    scanf("%f", &frequencia);
    printf("Informe a média da disciplina => ");
    scanf("%f", &media);

    printf("Nome da disciplina --------- %s \n", nome);
    printf("Descrição da disciplina ---- %s \n", descricao);
    printf("Frequência da disciplina --- %f% \n", frequencia);
    printf("Média para a disciplina ---- %f \n", media);

    system("pause");
}
