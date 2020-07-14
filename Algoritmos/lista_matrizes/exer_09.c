#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
    float alturas[5][10], maior_altura[5];
    char nomes[5][10];

    for(int i = 0; i < 5; i++){
        for(int x = 0; x < 10; x++){
            printf("Altura do jogador %d da delegação %d =>", x+1, i+1);
            scanf("%f", &alturas[i][x]);

            printf("Nome do jogador %d da delegação %d =>", x+1, i+1);
            gets(nomes[i][x]);

            if(x == 0){
                maior_altura[i] = alturas[i][x];
            } else {
                if(alturas[i][x] > maior_altura[i]) {
                    maior_altura[i] = alturas[i][x];
                }
            }
        }
    }

    for(int y = 0; y < 5; y++){
        for(int z = 0; z < 10; z++){
            if(z == 0){
                maior_altura[y] = alturas[y][z];
            } else {
                if(alturas[y][z] > maior_altura[y]) {
                    maior_altura[y] = alturas[y][z];
                }
            }
        }
    }

    printf("\nResultados:\n");
    for(int r = 0; r < 5; r++){
        for(int s = 0; s < 5; s++){
            printf("Jogador %d da delegação %d = %s =>\n", s+1, r+1, nomes[r][s]);
        }

        printf("Maior jogador da delegação mede %f\n", maior_altura[r]);
    }
    system("pause");
}