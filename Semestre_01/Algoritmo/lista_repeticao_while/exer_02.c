#include<stdio.h>
#include<stdlib.h>

main() {
    int numero = 0, triplo = 0;
    
    while (numero != -999){
        printf("Informe um número =>");
        scanf("%d", &numero);
        triplo = numero * 3;
        printf("%d x 3 = %d\n", numero, triplo);
    }
        
    printf("Você informou o número -999\n");
    system("pause");
}