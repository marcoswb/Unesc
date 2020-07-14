#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
    float alunos[70][5], medias[70], acumulador = 0, acumulador_geral = 0, media_geral;
    int contador_acima_media = 0;

    for(int i = 0; i < 70; i++){
        printf("Matricula do aluno %d =>", i+1);
        scanf("%f", &alunos[i][0]);

        printf("1º nota do aluno %d =>", i+1);
        scanf("%f", &alunos[i][1]);

        printf("2º nota do aluno %d =>", i+1);
        scanf("%f", &alunos[i][2]);

        printf("3º nota do aluno %d =>", i+1);
        scanf("%f", &alunos[i][3]);

        printf("4º nota do aluno %d =>", i+1);
        scanf("%f", &alunos[i][4]);
        
    }

    for(int y = 0; y < 70; y++){
        acumulador = 0;

        for(int z = 0; z < 5; z++){
            if(z != 0) {
                acumulador += alunos[y][z];
            }
        }

        medias[y] = acumulador / 4;

        acumulador_geral += medias[y];
    }

    media_geral = acumulador_geral / 70;

    printf("\nResultados:\n");
    for(int r = 0; r < 70; r++){
        if(medias[r] >= media_geral){
            contador_acima_media += 1;
        }
    }

    printf("Média da turma %f \n", media_geral);
    printf("%d alunos tiveram nota maior ou igual a media geral\n", contador_acima_media);
    system("pause");
}