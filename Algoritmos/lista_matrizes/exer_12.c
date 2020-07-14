#include<stdio.h>
#include<stdlib.h>

main() {
    float vendas[12][4], vendas_mes[12], semanas[4], total_vendido, acumulador = 0, acumulador_semanas[4];

    for(int i = 0; i < 12; i++){
        acumulador = 0;

        for(int x = 0; x < 4; x++){
            printf("Informe o valor das vendas na semana %d do mês %d =>", x+1, i+1);
            scanf("%f", vendas[i][x]);

            acumulador += vendas[i][x];

            switch(x){
                case 0: {
                    acumulador_semanas[x] += vendas[i][x];
                    break;
                }

                case 1: {
                    acumulador_semanas[x] += vendas[i][x];
                    break;
                }
                
                case 2: {
                    acumulador_semanas[x] += vendas[i][x];
                    break;
                }

                case 3: {
                    acumulador_semanas[x] += vendas[i][x];
                    break;
                }
            
                default:
                    break;
                }
        }

        vendas_mes[i] = acumulador;
    }

    printf("\nResultados:\n");
    for(int y; y < 12; y++){
        printf("Total de vendas do mês %d = %f\n", y+1, total_vendido);
    }

    for(int z = 0; z < 4; z++){
        printf("Total de vendas das semanas %d = %f\n", z+1, total_vendido);   
    }

    printf("Total de vendas do ano %f\n", total_vendido);
    system("pause");
}