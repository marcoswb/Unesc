#include<stdio.h>
#include<stdlib.h>

main() {
    float n1, n2, x;

    printf("Informe o primeiro numero => ");
    scanf("%f", &n1);
    printf("Informe o segundo numero => ");
    scanf("%f", &n2);

	x = n1 + n2 + 2 * (n1 - n2);

    printf("A equação x = n1 + n2 + 2 * (n1 - n2) = %f \n", x); 
	
	system("pause");   
}
