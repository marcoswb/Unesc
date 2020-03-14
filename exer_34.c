#include<stdio.h>
#include<stdlib.h>

main() {
    float salario_base, gratificacao, imposto, salario_final;

    printf("Informe salário base do funcionário => ");
    scanf("%f", &salario_base);
	
	gratificacao = (salario_base * 20) / 100;
	imposto = (salario_base * 15) / 100;
	salario_final = salario_base - imposto + gratificacao;

    printf("O salário funcionário é = %f \n", salario_final); 
	
	system("pause");   
}
