#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main() {
    float preco;
    int codigo;
    char procedencia[15];
    printf("Informe o preço do produto => ");
    scanf("%f", &preco);
    printf("Informe o código do produto => ");
    scanf("%d", &codigo);

    printf("A procedência será calculada seguindo a seguinte tabela.\n");
    printf("+------------------+--------------+\n");
    printf("| Código de origem |  Procedência |\n");
    printf("+------------------+--------------+\n");
    printf("|         1        |      Sul     |\n");
    printf("|         2        |     Norte    |\n");
    printf("|         3        |     Leste    |\n");
    printf("|         4        |     Oeste    |\n");
    printf("|      5 ou 6      |   Nordeste   |\n");
    printf("|    7 ou 8 ou 9   |   Sudeste    |\n");
    printf("|     10 a 20      | Centro-Oeste |\n");
    printf("|     21 a 30      |   Nordeste   |\n");
    printf("+------------------+--------------+\n");


    switch (codigo){
        case 1: {
            strcpy(procedencia, "Sul");
            break;
        }
        case 2: {
            strcpy(procedencia, "Norte");
            break;
        }
        case 3: {
            strcpy(procedencia, "Leste");
            break;
        }
        case 4: {
            strcpy(procedencia, "Oeste");
            break;
        }  
        case 5 ... 6: {
            strcpy(procedencia, "Nordeste");
            break;
        }
        case 7 ... 9: {
            strcpy(procedencia, "Sudeste");
            break;
        }
        case 10 ... 20: {
            strcpy(procedencia, "Centro-Oeste");
            break;
        }
        case 21 ... 30: {
            strcpy(procedencia, "Nordeste");
            break;
        }    
        default: {
            strcpy(procedencia, "Inválida");
            break;
        }
        
    }  

    printf("Preço produto = R$ %f \n", preco);
    printf("Código de origem %d \n", codigo);
    printf("Procedência = %s \n", procedencia);
    system("pause");
}