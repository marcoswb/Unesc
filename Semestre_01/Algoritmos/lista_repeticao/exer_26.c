#include<stdlib.h>
#include<stdio.h>

main() {
    float nota_01, nota_02, media, acumulador_notas = 0, media_geral;
    int contador_aprovados = 0, contador_exame = 0, contador_reprovados = 0;

    for (int i = 1; i <= 6; i++){
        printf("Informe a 1ª nota do aluno %dº => ", i);
        scanf("%f", &nota_01);

        printf("Informe a 2ª nota do aluno %dº => ", i);
        scanf("%f", &nota_02);

        media = (nota_01 + nota_02) / 2;
        acumulador_notas = acumulador_notas + media;

        if(media <= 3) {
            printf("Aluno reprovado com média %f \n", media);
            contador_reprovados++;
        } else if((media > 3) && (media < 7)) {
            printf("Aluno em exame com média %f \n", media);
            contador_exame++;
        } else {
            printf("Aluno aprovado com média %f \n", media);
            contador_aprovados++;
        }
    }

    media_geral = acumulador_notas / 6;

    printf("%d alunos foram aprovados \n", contador_aprovados);
    printf("%d alunos ficaram em exame \n", contador_exame);
    printf("%d alunos foram reprovados \n", contador_reprovados);
    printf("A média da classe foi de %f \n", media_geral);

    system("pause");
}