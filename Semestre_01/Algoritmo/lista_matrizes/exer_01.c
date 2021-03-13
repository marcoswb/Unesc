#include<stdio.h>
#include<stdlib.h>

main() {
    int M[2][3];

    for(int i = 0; i < 2; i++){
        for(int x = 0; x < 3; x++){
            printf("Informe o %dº número da posição %d =>", x+1, i+1);
            scanf("%d", &M[i][x]);
        }
    }

    for(int y = 0; y < 2; y++){
        for(int z = 0; z < 3; z++){
            printf("M[%d][%d] = %d\n", y, z, M[y][z]);
        }
    }

    system("pause");
}