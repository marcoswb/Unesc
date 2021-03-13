#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main() {
    int angulo;
    float seno, coseno, tangente, secante, cosecante, cotangente;

    printf("Informe um angulo => ");
    scanf("%d", &angulo);
	
	seno = sin(angulo);
	coseno = cos(angulo);
	tangente = tan(angulo);
	secante = 1/coseno;
	cosecante = 1/seno;
	cotangente = 1/tangente;
	

    printf("Angulo digitado: %d \n", angulo); 
    printf("Seno: %f \n", seno); 
    printf("Coseno: %f \n", coseno); 
    printf("Tangente: %f \n", tangente); 
    printf("Secante: %f \n", secante); 
    printf("Cosecante: %f \n", cosecante); 
    printf("Cotangente: %f \n", cotangente); 
	
	system("pause");   
}
