#include<stdio.h>
#include<stdlib.h>

main() {
    int matriz[5][5], matriz_nova[5][5];

    for(int i = 0; i < 5; i++){
        for(int x = 0; x < 5; x++){
            printf("Informe o %dº número da posição %d =>", x+1, i+1);
            scanf("%d", &matriz[i][x]);
        }
    }
    
    for(int y = 0; y < 5; y++){
        for(int z = 0; z < 5; z++){
            matriz_nova[y][z] = matriz[y][z];
            if(y == 1){
                matriz_nova[y][z] = matriz[y+2][z];
            } else if(y == 3){
                matriz_nova[y][z] = matriz[y-3][z];
            }
        }
    }

    printf("\nResultados:\n");
    for(int y = 0; y < 5; y++){
        for(int z = 0; z < 5; z++){
            printf("Linha %d, coluna %d = %d\n", y+1, z+1, matriz_nova[y][z]);
        }
    }

    system("pause");
}