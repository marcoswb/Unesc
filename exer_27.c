#include<stdio.h>
#include<stdlib.h>

main() {
    float n1, n2, n3, media;

    printf("Informe a primeira nota => ");
    scanf("%f", &n1);
    printf("Informe a segunda nota => ");
    scanf("%f", &n2);
    printf("Informe a terceira nota => ");
    scanf("%f", &n3);

	media = (n1 + n2 + n3) /3;

    printf("A média das notas é = %f \n", media); 
	
	system("pause");   
}
