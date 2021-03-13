#include<stdio.h>
#include<stdlib.h>

main() {
    int time, bairro, contador_times[3], torcedores_centro = 0;
    float salario, acumulador_salario, media_salario;

    contador_times[0] = 0;
    contador_times[1] = 0;
    contador_times[2] = 0;

    do {
        printf("Qual seu time de coração ? (1, 2 ou 3)\n");
        printf("1 - Criciúma\n");
        printf("2 - Próspera\n");
        printf("3 - Outro\n");
        scanf("%d", &time);
        printf("\n");

        if(time == 0) {
            printf("Saindo do loop...");
            return;
        }

        printf("Qual bairro você mora ? (1, 2 ou 3)\n");
        printf("1 - Pinheirinho\n");
        printf("2 - Centro\n");
        printf("3 - Outro\n");
        scanf("%d", &bairro);
        printf("\n");

        printf("Qual seu salário\n");
        scanf("%f", &salario);
        printf("\n");
        printf("\n");

        switch (time) {
        case 1: {
            contador_times[0]++;
            break;
        }
        case 2: {
            contador_times[1]++;
            acumulador_salario = acumulador_salario + salario;
            printf("%f acumulador\n", acumulador_salario);
            break;
        }
        case 3: {
            contador_times[2]++;
            if(bairro == 2) {
                torcedores_centro++;
            }

            break;
        }
        default:
            break;
        }
    } while (time != 0);

    media_salario = acumulador_salario / contador_times[1];
    
    printf("Torcedores do Criciúma: %d \n", contador_times[0]);
    printf("Torcedores do Próspera: %d \n", contador_times[1]);
    printf("Torcedores de outros times: %d \n", contador_times[2]);
    printf("Média salarial dos torcedores do Próspera %f \n", media_salario);
    printf("Pessoas que moram no centro e torcem para outros times: %d \n", torcedores_centro);
    system("pause");
}