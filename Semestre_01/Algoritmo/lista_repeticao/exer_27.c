#include<stdlib.h>
#include<stdio.h>

main() {
    float nota_01, nota_02, nota_03, nota_04, nota_05, media, acumulador_medias = 0, media_geral, percentual_media;
    int contador = 0;

    for (int i = 1; i <= 20; i++){
        printf("Informe a 1ª nota do aluno %dº => ", i);
        scanf("%f", &nota_01);

        printf("Informe a 2ª nota do aluno %dº => ", i);
        scanf("%f", &nota_02);

        printf("Informe a 3ª nota do aluno %dº => ", i);
        scanf("%f", &nota_03);

        printf("Informe a 4ª nota do aluno %dº => ", i);
        scanf("%f", &nota_04);

        printf("Informe a 5ª nota do aluno %dº => ", i);
        scanf("%f", &nota_05);

        media = (nota_01 + nota_02 + nota_03 + nota_04 + nota_05) / 5;
        acumulador_medias = acumulador_medias + media;

        if(media >= 5) {
            contador++;
        }

        printf("Aluno com média %f \n", media);
    }

    media_geral = acumulador_medias / 2;
    percentual_media = (contador * 100) / 20;

    printf("A média da classe foi de %f \n", media_geral);
    printf("O percentual de alunos com média igual ou superior a 5 foi de %f \n", percentual_media);

    system("pause");
}