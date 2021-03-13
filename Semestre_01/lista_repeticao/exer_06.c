#include<stdlib.h>
#include<stdio.h>

main() {

    printf("Iniciando contagem...\n");

    for (int i = 100; i >= 1; i--){
        printf("%d \n", i);
    }

    printf("Fim da contagem.\n");

    system("pause");
}