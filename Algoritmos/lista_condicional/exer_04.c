#include<stdlib.h>
#include<stdio.h>

main() {
    float nota_01, nota_02, media;
    printf("Informe a primeira nota => ");
    scanf("%f", &nota_01);
    printf("Informe a segunda nota => ");
    scanf("%f", &nota_02);

    media = (nota_01 + nota_02) / 2;

    if(media < 3) {
        printf("Aluno reprovado com média %f \n", media);
    } else if((media >= 3) && (media < 7)) {
        printf("Aluno terá que fazer o exame pois tem média %f \n", media);
    } else {
        printf("Aluno aprovado com média %f \n", media);
    }

    system("pause");
}