#include<stdio.h>
#include<stdlib.h>

main() {
    float M[2][3], metade[2][3];

    printf("\nValores da matriz M\n");
    for(int i = 0; i < 2; i++){
        for(int x = 0; x < 3; x++){
            printf("Informe o %dº número da posição %d =>", x+1, i+1);
            scanf("%f", &M[i][x]);
        }
    }

    printf("\nResultados:\n");
    for(int y = 0; y < 2; y++){
        for(int z = 0; z < 3; z++){
            metade[y][z] = M[y][z] / 2;
            printf("M[%d][%d] = %f\n", y, z, M[y][z]);
            printf("M /2 = %f\n", y, z, metade[y][z]);
            printf("==============\n");
        }
    }

    system("pause");
}