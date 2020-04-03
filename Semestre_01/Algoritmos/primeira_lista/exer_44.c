#include<stdio.h>
#include<stdlib.h>

main() {
    int ano_nacimento, ano_atual, idade, idade_2027;

    printf("Informe o seu ano de nascimento => ");
    scanf("%d", &ano_nacimento);

    printf("Informe o ano atual => ");
    scanf("%d", &ano_atual);

    if(ano_nacimento > ano_atual) {
        printf("O ano atual é menor que seu ano de nascimento \n");
        return;
    }

    idade = ano_atual - ano_nacimento;
    idade_2027 = 2030 - ano_nacimento;

    printf("Você nasceu em: %d \n", ano_nacimento);
    printf("Você tem %d anos de idade \n", idade);
    printf("Em 2027 você terá %d anos de idade \n", idade_2027);
}