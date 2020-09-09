#include<stdio.h>
#include<stdlib.h>

main() {
    float horas_trabalhadas, salario_minimo, salario_bruto, valor_hora, imposto, salario_final;

    printf("Informe suas horas trabalhadas =>");
    scanf("%f", &horas_trabalhadas);
    
    printf("Informe o salário minimo =>");
    scanf("%f", &salario_minimo);

    valor_hora = (salario_minimo / 10);
    salario_bruto = valor_hora * horas_trabalhadas;
    imposto = (salario_bruto * 3) / 100;
    salario_final = salario_bruto - imposto;
    

    printf("salario = %f \n", salario_final);

    system("pause");
}