#include<stdio.h>
#include<stdlib.h>

main() {
	float base, altura, area;
	
	printf("Informe a base do triangulo => ");
	scanf("%f", &base);
	printf("Informe a altura do triangulo => ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("A �rea do triangulo � = %f", area); 
	
	system("pause");
}
