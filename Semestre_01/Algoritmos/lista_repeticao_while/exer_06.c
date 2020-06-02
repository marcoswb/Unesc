#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
    int idade, contador_geral = 0, acumulador_idade = 0, contador_feminino = 0, contador_masculino = 0;
    float media_idade;
    char sexo[2];
    
    do {
        printf("Informe a idade =>");
        scanf("%d", &idade);
        printf("Informe o sexo (M– masculino, F – feminino) =>");
        scanf("%s", &sexo);
        
        if(idade != 0) {
            contador_geral++;
            acumulador_idade = acumulador_idade + idade;

            if(strcmp(sexo, "F") == 0){
                contador_feminino++;
            } else if(strcmp(sexo, "M") == 0) {
                contador_masculino++;
            }
        }

        
    }
    while (idade != 0);
    
    media_idade = acumulador_idade / contador_geral;
        
    printf("Você digitou a idade 0\n");
    printf("Pessoas do sexo masculino %d\n", contador_masculino);
    printf("Pessoas do sexo feminino %d\n", contador_feminino);
    printf("A média de idade é %f\n", media_idade);
    system("pause");
}