#include<stdlib.h>
#include<stdio.h>

main() {
    float nota_01, nota_02, nota_03, nota_04, media;
    printf("Informe a primeira nota => ");
    scanf("%f", &nota_01);
    printf("Informe a segunda nota => ");
    scanf("%f", &nota_02);
    printf("Informe a terceira nota => ");
    scanf("%f", &nota_03);
    printf("Informe a quarta nota => ");
    scanf("%f", &nota_04);

    media = (nota_01 + nota_02 + nota_03 + nota_04) / 4;

    if(media >= 6) {
        printf("Aluno aprovado com média %f \n", media);
    } else {
        printf("Aluno reprovado com média %f \n", media);
    }

    system("pause");
}