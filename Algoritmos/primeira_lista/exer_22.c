#include<stdio.h>
#include<stdlib.h>

main() {
    int numero, antecessor, sucessor;

    printf("Informe um numero => ");
    scanf("%d", &numero);

	antecessor = numero - 1;
	sucessor = numero + 1;

    printf("Antecessor: %d \n", antecessor);
    printf("Numero digitado: %d \n", numero); 
    printf("Sucessor: %d \n", sucessor); 
	
	system("pause");   
}
