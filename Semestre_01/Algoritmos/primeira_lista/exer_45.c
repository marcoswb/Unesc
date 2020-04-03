#include<stdio.h>
#include<stdlib.h>

main() {
    int ano_nacimento, ano_atual, idade, idade_meses, idade_semanas, idade_dias;

    printf("Informe o seu ano de nascimento => ");
    scanf("%d", &ano_nacimento);

    printf("Informe o ano atual => ");
    scanf("%d", &ano_atual);

    if(ano_nacimento > ano_atual) {
        printf("O ano atual é menor que seu ano de nascimento \n");
        return;
    }

    idade = ano_atual - ano_nacimento;
    idade_meses = idade * 12;
    idade_semanas = idade_meses * 4;
    idade_dias = idade_semanas * 7;

    printf("Você nasceu em: %d \n", ano_nacimento);
    printf("Você tem %d anos de idade \n", idade);
    printf("Você tem %d meses de idade \n", idade_meses);
    printf("Você tem %d semanas de idade \n", idade_semanas);
    printf("Você tem %d dias de idade \n", idade_dias);
}