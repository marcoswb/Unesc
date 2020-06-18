#include<stdio.h>
#include<stdlib.h>

main() {
    float salario, novo_salario, aumento;

    printf("Informe o salário do funcionário => ");
    scanf("%f", &salario);
    printf("Informe o percentual de aumento => ");
    scanf("%f", &aumento);

	novo_salario = salario + ((salario * aumento) / 100);

    printf("O novo salário do funcionário é = %f \n", novo_salario); 
	
	system("pause");   
}
