#include<stdio.h>
#include<stdlib.h>

main() {
    float n1, n2, n3, p1, p2, p3, media;

	p1 = 2;
	p2 = 3;
	p3 = 5;
    printf("Informe a primeira nota => ");
    scanf("%f", &n1);
    printf("Informe a segunda nota => ");
    scanf("%f", &n2);
    printf("Informe a terceira nota => ");
    scanf("%f", &n3);

	media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

    printf("A média ponderada das notas é = %f \n", media); 
	
	system("pause");   
}
