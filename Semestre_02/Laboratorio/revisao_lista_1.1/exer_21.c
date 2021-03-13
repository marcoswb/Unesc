#include<stdio.h>
#include<stdlib.h>

main() {
    int linhas, colunas;
    float diagonal_principal = 0;
    
    printf("Digite o numero de linhas da matriz =>");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz =>");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++){
        
        for (int y = 0; y < colunas; y++) {
            printf("Digite o %dº valor da linha %d da matriz =>\n", y+1, i+1);
            scanf("%d", &matriz[i][y]);
        }
    }

    for (int t = 0; t < linhas; t++){
        
        

        for (int r = 0; r < colunas; r++) {
            if(t == r) {
                diagonal_principal += matriz[t][r];
            }
            printf("[%d]", matriz[t][r]);
        }
        printf("\n");
    }
    
    printf("A soma da diagonal principal é = %f\n", diagonal_principal);

    system("pause");
}