#include<stdio.h>
#include<stdlib.h>

main() {
    float numero, parte;

    printf("Informe um numero => ");
    scanf("%f", &numero);

	parte = numero / 3;

    printf("Numero digitado: %f \n", numero); 
    printf("Terça parte do numero: %f \n", parte); 
	
	system("pause");   
}
