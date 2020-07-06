#include<stdio.h>
#include<stdlib.h>

main() {
    int M[2][3], SL[2];

    printf("\nValores da matriz M\n");
    for(int i = 0; i < 2; i++){
        for(int x = 0; x < 3; x++){
            printf("Informe o %dº número da posição %d =>", x+1, i+1);
            scanf("%d", &M[i][x]);
        }
    }

    printf("\nResultados:\n");
    for(int y = 0; y < 2; y++){
        printf("%dª linha\n", y+1);
        for(int z = 0; z < 3; z++){
            SL[y] = SL[y] + M[y][z];
            printf("%dº elemento = %d\n", z, M[y][z]);
        }
        printf("Soma da %dª linha = %d\n", y+1, SL[y]);
        printf("==============\n");
    }

    system("pause");
}