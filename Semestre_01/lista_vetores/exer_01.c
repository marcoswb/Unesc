#include<stdio.h>
#include<stdlib.h>

main() {
    int numeros[7];

    for(int i = 0; i < 7; i++){
        printf("Informe o %dº número =>", i+1);
        scanf("%d", &numeros[i]);
    }

    for(int x = 0; x < 7; x++){
        printf("%dº número digitado = %d\n", x+1, numeros[x]);
    }

    system("pause");
}