#include<stdlib.h>
#include<stdio.h>

main() {
    int numeros_para_ler;

    printf("Informe quantos numeros você quer que sejam lidos => ");
    scanf("%d", &numeros_para_ler);

    float numeros[numeros_para_ler], triplo[numeros_para_ler];

    for (int i = 0; i < numeros_para_ler; i++){
        printf("Informe o %dº número => ", i+1);
        scanf("%f", &numeros[i]);

        triplo[i] = numeros[i] * 3;
    }
    
    for (int i = 0; i < numeros_para_ler; i++){
        printf("\nO triplo de %f é igual a %f => \n", numeros[i], triplo[i]);
    }
    
    system("pause");
}