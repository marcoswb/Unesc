#include<stdlib.h>
#include<stdio.h>

main() {
    float peso;
    int idade, grupo;

    printf("Informe a idade da pessoa => ");
    scanf("%d", &idade);
    printf("Informe o peso da pessoa => ");
    scanf("%f", &peso);

    printf("O grupo de risco será calculado seguindo a seguinte tabela.\n");
    printf("+-------+-----------------------------------------------+\n");
    printf("|                |                  Peso                |\n");
    printf("+      Idade     +--------+---------------+-------------+\n");
    printf("|                | Até 60 | Entre 60 e 90 | Acima de 90 |\n");
    printf("+----------------+--------+---------------+-------------+\n");
    printf("| Menores que 20 |    9   |       8       |       7     |\n");
    printf("|   De 20 a 50   |    6   |       5       |       4     |\n");
    printf("| Maiores que 50 |    3   |       2       |       1     |\n");
    printf("+----------------+--------+---------------+-------------+\n");

    
    if(idade < 20) {
        if(peso <= 60) {
            grupo = 9;
        } else if((peso > 60) && (peso <= 90)) {
            grupo = 8;
        } else {
            grupo = 7;
        }
    } else if((idade >= 20) && (idade < 50)) {
        if(peso <= 60) {
            grupo = 6;
        } else if((peso > 60) && (peso <= 90)) {
            grupo = 5;
        } else {
            grupo = 4;
        }
    } else {
        if(peso <= 60) {
            grupo = 3;
        } else if((peso > 60) && (peso <= 90)) {
            grupo = 2;
        } else {
            grupo = 1;
        }
    }

    printf("Idade = %d anos \n", idade);
    printf("Peso = %f Kg \n", peso);
    printf("Grupo de risco = %d \n", grupo);
    system("pause");
}