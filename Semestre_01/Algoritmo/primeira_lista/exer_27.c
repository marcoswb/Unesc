#include<stdio.h>
#include<stdlib.h>

main() {
    float nota_01, nota_02, nota_03, media;

    printf("Informe a primeira nota => ");
    scanf("%f", &nota_01);
    printf("Informe a segunda nota => ");
    scanf("%f", &nota_02);
    printf("Informe a terceira nota => ");
    scanf("%f", &nota_03);

	media = (nota_01 + nota_02 + nota_03) / 3;

    printf("A média das notas é = %f \n", media); 
	
	system("pause");   
}
