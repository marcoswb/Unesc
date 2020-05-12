#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main() {
    float numeros[4], raiz[4];

    for (int i = 1; i <= 4; i++){
        printf("Informe o %dº número => ", i);
        scanf("%f", &numeros[i]);

        raiz[i] = sqrt(numeros[i]);
    }
    
    for (int i = 1; i <= 4; i++){
        printf("\n A raiz quadrada do número %f é igual a %f \n", numeros[i], raiz[i]);
    }
    
    system("pause");
}