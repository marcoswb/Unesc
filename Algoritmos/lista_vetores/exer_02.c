#include<stdio.h>
#include<stdlib.h>

main() {
    int numeros[5];

    for(int i = 0; i < 5; i++){
        printf("Informe o %dº número =>", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\nOrdem normal dos números:\n");
    for(int x = 0; x < 5; x++){
        printf("%dº número digitado = %d\n", x+1, numeros[x]);
    }

    printf("\nOrdem inversa dos números:\n");
    for(int y = 5; y > 0; y--){
        printf("%dº número digitado = %d\n", y, numeros[y-1]);
    }

    system("pause");
}