#include<stdio.h>
#include<stdlib.h>

main() {
	float pi, raio, comprimento, area, volume;
	
	printf("Informe o raio da esfera => ");
	scanf("%f", &raio);
	pi = 3.14;
	comprimento = 2 * pi * raio;
	area = pi * pow(raio, 2);
	volume = (3/4) * pi * pow(raio, 3);
	
	printf("O comprimento da esfera é = %f \n", comprimento); 
	printf("A área da esfera é = %f \n", area); 
	printf("O volume da esfera é = %f \n", volume); 
	
	system("pause");
}
