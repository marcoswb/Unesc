#include<stdio.h>
#include<stdlib.h>

main() {
    float salario_base, gratificacao, imposto, salario_final;

    printf("Informe sal�rio base do funcion�rio => ");
    scanf("%f", &salario_base);
	
	gratificacao = (salario_base * 20) / 100;
	imposto = (salario_base * 15) / 100;
	salario_final = salario_base - imposto + gratificacao;

    printf("O sal�rio funcion�rio � = %f \n", salario_final); 
	
	system("pause");   
}
