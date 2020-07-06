#include<stdio.h>
#include<stdlib.h>

main() {
    float M[2][3], P[2][3], S[2][3];

    printf("\nValores da matriz M\n");
    for(int i = 0; i < 2; i++){
        for(int x = 0; x < 3; x++){
            printf("Informe o %dº número da posição %d =>", x+1, i+1);
            scanf("%f", &M[i][x]);
        }
    }

    printf("\nValores da matriz P\n");
    for(int r = 0; r < 2; r++){
        for(int s = 0; s < 3; s++){
            printf("Informe o %dº número da posição %d =>", s+1, r+1);
            scanf("%f", &P[r][s]);
        }
    }

    printf("\nResultados:\n");
    for(int y = 0; y < 2; y++){
        for(int z = 0; z < 3; z++){
            S[y][z] = M[y][z] - P[y][z];
            printf("M[%d][%d] = %f\n", y, z, M[y][z]);
            printf("P[%d][%d] = %f\n", y, z, P[y][z]);
            printf("M - P = %f\n", y, z, S[y][z]);
            printf("==============\n");
        }
    }

    system("pause");
}