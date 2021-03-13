#include<stdio.h>
#include<stdlib.h>

main() {
    float M[2][3], triplo[2][3];

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
            triplo[y][z] = M[y][z] * 3;
            printf("M[%d][%d] = %f\n", y, z, M[y][z]);
            printf("M * 3 = %f\n", y, z, triplo[y][z]);
            printf("==============\n");
        }
    }

    system("pause");
}