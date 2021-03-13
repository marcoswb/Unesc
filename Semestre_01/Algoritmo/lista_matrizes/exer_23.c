#include<stdio.h>
#include<stdlib.h>

main() {
    float notas[6][2], acumulador_notas = 0, media_geral, media_aluno, perc_reprovacao, perc_aprovacao, perc_exame;
    char nomes[20][6];
    int reprovados = 0, aprovados = 0, exame = 0;

    for(int i = 0; i < 6; i++){
        printf("Informe o nome do %dº aluno =>", i+1);
        scanf("%s", &nomes[i]);

        printf("Informe a 1ª nota do aluno %d =>", i+1);
        scanf("%f", &notas[i][0]);

        printf("Informe a 2ª nota do aluno %d =>", i+1);
        scanf("%f", &notas[i][1]);

        media_aluno = (notas[i][0] + notas[i][1]) / 2;
        acumulador_notas += media_aluno;

        if(media_aluno >= 7) {
            aprovados++;
        } else if((media_aluno >=5) && (media_aluno < 7)){
            exame++;
        } else {
            reprovados++;
        }
    }

    media_geral = acumulador_notas / 6;

    perc_reprovacao = (reprovados * 100) / 6; 
    perc_exame = (exame * 100) / 6;
    perc_aprovacao = (aprovados * 100) / 6;

    printf("A media da classe foi %f\n", media_geral);
    printf("Percentual de aprovação %f\n", perc_aprovacao);
    printf("Percentual de alunos em exame %f\n", perc_exame);
    printf("Percentual de reprovação %f\n", perc_reprovacao);

    system("pause");
}