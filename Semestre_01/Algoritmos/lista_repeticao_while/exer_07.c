#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
    int idade, contador_geral = 0, contador_separados = 0, contador_casados = 0, contador_solteiros = 0, contador_viuvos = 0, acumulador_viuvos = 0;
    float media_viuvos, porcentagem_separados;
    char estado_civil[2];
    
    do {
        printf("Informe a idade =>");
        scanf("%d", &idade);
        printf("Informe o estado civil (C – casado, S – solteiro, V – viúvo, e D – desquitado ou separado) =>");
        scanf("%s", &estado_civil);
        
        if(idade >= 0) {
            contador_geral++;

            if(strcmp(estado_civil, "C") == 0){
                contador_casados++;
            } else if(strcmp(estado_civil, "S") == 0) {
                contador_solteiros++;
            } else if(strcmp(estado_civil, "V") == 0) {
                contador_viuvos++;
                acumulador_viuvos = acumulador_viuvos + idade;
            } else if(strcmp(estado_civil, "D") == 0) {
                contador_separados++;
            }
        }

        
    }
    while (idade >= 0);

    media_viuvos = acumulador_viuvos / contador_viuvos;
    porcentagem_separados = (contador_separados * 100) / contador_geral;
        
    printf("Você digitou a idade menor que 0\n");
    printf("%d pessoas são casadas\n", contador_casados);
    printf("%d pessoas são solteiras\n", contador_solteiros);
    printf("A média de idade das pessoas viúvas é %f anos\n", media_viuvos);
    printf("%f por cento das pessoas são desquisitadas ou separadas\n", porcentagem_separados);
    system("pause");
}