#include<stdio.h>
#include<stdlib.h>

main() {
    float salario, novo_salario;

    printf("Informe o salário do funcionário => ");
    scanf("%f", &salario);

	novo_salario = salario + ((salario * 25) / 100);

    printf("O novo salário do funcionário é = %f \n", novo_salario); 
	
	system("pause");   
}
