#include<stdio.h>
#include<stdlib.h>

main() {
    float hora_aula, INSS, salario, salario_desconto;
    int aulas;

    printf("Informe o valor da hora aula do professor => ");
    scanf("%f", &hora_aula);
    printf("Informe o n�mero de aulas dadas no m�s => ");
    scanf("%d", &aulas);
    printf("Informe o percentual de desconto do INSS => ");
    scanf("%f", &INSS);

	salario = (aulas * hora_aula);
	salario_desconto = salario - ((salario * INSS) / 100);	

    printf("O sal�rio do professor � = %f \n", salario_desconto); 
	
	system("pause");   
}
