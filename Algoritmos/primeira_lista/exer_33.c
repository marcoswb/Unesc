#include<stdio.h>
#include<stdlib.h>

main() {
    float salario_base, gratificacao, imposto, salario_final;

    printf("Informe sal�rio base do funcion�rio => ");
    scanf("%f", &salario_base);
	
	gratificacao = 50;
	imposto = (salario_base * 10) / 100;
	salario_final = salario_base - imposto + gratificacao;

    printf("O sal�rio funcion�rio � = %f \n", salario_final); 
	
	system("pause");   
}
