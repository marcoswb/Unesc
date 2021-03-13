#include<stdlib.h>
#include<stdio.h>

main() {
    int idade, faixa_etaria[5], percentual_faixa01, percentual_faixa04;
    faixa_etaria[0] = 0;
    faixa_etaria[1] = 0;
    faixa_etaria[2] = 0;
    faixa_etaria[3] = 0;
    faixa_etaria[4] = 0;

    for (int i = 1; i <= 8; i++){

        printf("Informe a idade da %dª pessoa => ", i);
        scanf("%d", &idade);
        
        switch (idade){
        case 0 ... 15: {
            faixa_etaria[0]++;
            break;
        }
        
        case 16 ... 30: {
            faixa_etaria[1]++;
            break;
        }

        case 31 ... 45: {
            faixa_etaria[2]++;
            break;
        }

        case 46 ... 60: {
            faixa_etaria[3]++;
            break;
        }

        case 61 ... 150: {
            faixa_etaria[4]++;
            break;
        }

        default:
            break;
        }
    }

    percentual_faixa01 = (faixa_etaria[0] * 100) / 8;
    percentual_faixa04 = (faixa_etaria[4] * 100) / 8;

    printf("%d pessoas tem menos de 15 anos \n", faixa_etaria[0]);
    printf("%d pessoas tem entre 16 e 30 anos \n", faixa_etaria[1]);
    printf("%d pessoas tem entre 31 e 45 anos \n", faixa_etaria[2]);
    printf("%d pessoas tem entre 46 e 60 anos \n", faixa_etaria[3]);
    printf("%d pessoas tem acima de 60 anos \n", faixa_etaria[4]);
    printf("%d porcento tem 15 anos \n", percentual_faixa01);
    printf("%d porcento tem mais de 60 anos \n", percentual_faixa04);

    system("pause");
}