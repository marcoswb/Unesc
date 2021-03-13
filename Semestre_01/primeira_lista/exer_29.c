#include<stdio.h>
#include<stdlib.h>

main() {
    float nota_01, nota_02, nota_03, peso_01, peso_02, peso_03, media_ponderada;

    printf("Informe a primeira nota => ");
    scanf("%f", &nota_01);
    printf("Informe o peso da nota => ");
    scanf("%f", &peso_01);
    printf("Informe a segunda nota => ");
    scanf("%f", &nota_02);
    printf("Informe o peso da nota => ");
    scanf("%f", &peso_02);
    printf("Informe a terceira nota => ");
    scanf("%f", &nota_03);
    printf("Informe o peso da nota => ");
    scanf("%f", &peso_03);

	media_ponderada = ((nota_01 * peso_01) + (nota_02 * peso_02) + (nota_03 * peso_03)) / (peso_01 + peso_02 + peso_03);

    printf("A média ponderada das notas é = %f \n", media_ponderada); 
	
	system("pause");   
}
