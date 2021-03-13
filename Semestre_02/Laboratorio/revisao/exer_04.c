#include<stdio.h>
#include<stdlib.h>

main() {
    int numero_termos, acumulador = 3;
    float pi = 4, teste;

    printf("Informe o numero de termos para calcular =>");
    scanf("%d", &numero_termos);

    for(int i = 0; i < numero_termos; i++) {
        if((acumulador % 2) == 0) {
             pi = pi + (4/acumulador);
        } else {
            pi = pi - (4/acumulador);
        }

        acumulador += 2;
    }

    printf("Pi = %f \n", pi);

    system("pause");
}