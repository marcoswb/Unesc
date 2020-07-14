#include<stdio.h>
#include<stdlib.h>

main() {
    int matriz[4][5], soma_linhas[4], soma_colunas[5];

    for(int y = 0; y < 4; y++){
        for(int z = 0; z < 5; z++){
            soma_colunas[z] = 0;
        }
        soma_linhas[y] = 0;
    }

    for(int i = 0; i < 4; i++){
        for(int x = 0; x < 5; x++){
            printf("Informe o %dº número da posição %d =>", x+1, i+1);
            scanf("%d", &matriz[i][x]);

            soma_linhas[i] = soma_linhas[i] + matriz[i][x];
            
            soma_colunas[x] = soma_colunas[x] + matriz[i][x];
        }
    }

    printf("\nResultados:\n");
    for(int r = 0; r < 5; r++){
        printf("Coluna %d = %d\n", r, soma_colunas[r]);
    }

    for(int s = 0; s < 4; s++){
        printf("Linha %d = %d\n", s, soma_linhas[s]);
    }
    

    system("pause");
}