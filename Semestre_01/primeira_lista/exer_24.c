#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main() {
    float numero, quadrado, cubo, raiz_quadrada, raiz_cubica;

    printf("Informe um numero (somente números acima de 0 são válidos) => ");
    scanf("%f", &numero);
	
    if(numero > 0) {
        quadrado = pow(numero, 2);
        cubo = pow(numero, 3);
        raiz_quadrada = sqrt(numero);
        raiz_cubica = pow(numero, (1.0/3.0));
        

        printf("Numero digitado: %f \n", numero); 
        printf("Numero ao quadrado: %f \n", quadrado); 
        printf("Numero ao cubo: %f \n", cubo); 
        printf("Raiz quadrada: %f \n", raiz_quadrada); 
        printf("Raiz cubica: %f \n", raiz_cubica); 
        
        system("pause");  
    } else {
        printf("Você digitou um número inválido \n");
        printf("Até a próxima 👋 \n");

        system("pause");
    }
	 
}
