#include<stdio.h>
#include<stdlib.h>

main() {
    float salario, novo_salario;

    printf("Informe o sal�rio do funcion�rio => ");
    scanf("%f", &salario);

	novo_salario = salario + ((salario * 25) / 100);

    printf("O novo sal�rio do funcion�rio � = %f \n", novo_salario); 
	
	system("pause");   
}
