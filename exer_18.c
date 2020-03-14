#include<stdio.h>
#include<stdlib.h>

main() {
    char nome[50], endereco[50], cidade[50], UF[50], CEP[50], telefone[50], CPF[50], RG[50], data_nascimento[50], escolaridade[50], curso[50];

    printf("Informe seu nome => ");
    scanf("%s", nome);
    printf("Informe seu endereço => ");
    scanf("%s", endereco);
    printf("Informe sua cidade => ");
    scanf("%s", cidade);
    printf("Informe sua UF => ");
    scanf("%s", UF);
    printf("Informe seu CEP => ");
    scanf("%s", CEP);
    printf("Informe seu telefone => ");
    scanf("%s", telefone);
    printf("Informe seu CPF => ");
    scanf("%s", CPF);
    printf("Informe seu RG => ");
    scanf("%s", RG);
    printf("Informe sua data de nascimento => ");
    scanf("%s", data_nascimento);
    printf("Informe sua escolaridade => ");
    scanf("%s", escolaridade);
    printf("Informe o curso que você leciona => ");
    scanf("%s", curso);

    printf("Nome -------------------- %s \n", nome);
    printf("Endereço ---------------- %s \n", endereco);
    printf("Cidade ------------------ %s \n", cidade);
    printf("UF ---------------------- %s \n", UF);
    printf("CEP --------------------- %s \n", CEP);
    printf("Telefone ---------------- %s \n", telefone);
    printf("CPF --------------------- %s \n", CPF);
    printf("RG ---------------------- %s \n", RG);
    printf("Data de nascimento ------ %s \n", data_nascimento);
    printf("Grau de escolaridade ---- %s \n", escolaridade);
    printf("Curso que leciona ------- %s \n", curso);

    system("pause");
}
