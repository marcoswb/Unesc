#include<stdio.h>
#include<stdlib.h>

main() {
    float hora_aula, INSS, salario, salario_desconto;
    int aulas;

    printf("Informe o valor da hora aula do professor => ");
    scanf("%f", &hora_aula);
    printf("Informe o número de aulas dadas no mês => ");
    scanf("%d", &aulas);
    printf("Informe o percentual de desconto do INSS => ");
    scanf("%f", &INSS);

	salario = (aulas * hora_aula);
	salario_desconto = salario - ((salario * INSS) / 100);	

    printf("O salário do professor é = %f \n", salario_desconto); 
	
	system("pause");   
}
