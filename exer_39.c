#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main() {
	float pi, raio, area;
	
	printf("Informe o raio do circulo => ");
	scanf("%f", &raio);
	pi = 3.14;
	area = pi * pow(raio, 2);
	
	printf("A �rea do circulo � = %f", area); 
	
	system("pause");
}
