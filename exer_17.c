#include<stdio.h>
#include<stdlib.h>

main() {
    char nome[30];
    int idade;

    printf("Informe seu nome => ");
    scanf("%s", &nome);
    printf("Informe sua idade =>");
    scanf("%d", &idade);

    printf("Nome ---- %s \n", nome);
    printf("Idade --- %d \n", idade); 
	
	system("pause");   
}
