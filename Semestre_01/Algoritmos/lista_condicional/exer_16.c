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
    printf("+--------------------------------+-----------------------+\n");
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

    
    if(codigo == 1) {
        strcpy(procedencia, "Sul");
    } else if(codigo == 2) {
        strcpy(procedencia, "Norte");
    } else if(codigo == 3) {
        strcpy(procedencia, "Leste");
    } else if(codigo == 4) {
        strcpy(procedencia, "Oeste");
    } else if((codigo == 5) | (codigo == 6)) {
        strcpy(procedencia, "Nordeste");
    } else if((codigo == 7) | (codigo == 8) | (codigo == 9)) {
        strcpy(procedencia, "Sudeste");
    } else if((codigo >= 10) && (codigo <= 20)) {
        strcpy(procedencia, "Centro-Oeste");
    } else if((codigo > 20) && (codigo <= 30)) {
        strcpy(procedencia, "Nordeste");
    } else {
        strcpy(procedencia, "Inválida");
    }

    printf("Preço produto = R$ %f \n", preco);
    printf("Código de origem %d \n", codigo);
    printf("Procedência = %s \n", procedencia);
    system("pause");
}