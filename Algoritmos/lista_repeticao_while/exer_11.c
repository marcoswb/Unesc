#include<stdio.h>
#include<stdlib.h>

main() {
    float salario_minimo, salario, valor_hora, acrescimo, valor_hora_extra, salario_bruto, imposto_renda, salario_liquido, salario_final, gratificao;
    int horas, dependentes, horas_extras;

    do {
        printf("Informe o salário mínimo =>");
        scanf("%f", &salario_minimo);
        printf("\n");

        printf("salario minimo %f\n", salario_minimo);

        printf("Informe as horas trabalhadas => \n");
        scanf("%d", &horas);
        printf("\n");

        if(horas == -1) {
            printf("Saindo do loop...\n");
            return;
        }

        printf("Informe o numero de dependentes do funcionário => \n");
        scanf("%d", &dependentes);
        printf("\n");

        printf("Informe o numero de horas extras trabalhadas pelo funcionário => \n");
        scanf("%d", &horas_extras);
        printf("\n");

        valor_hora = salario_minimo / 10;
        valor_hora_extra = valor_hora;

        for (int i = 0; i < horas_extras; i++) {
            valor_hora_extra = valor_hora_extra + ((valor_hora * 50) / 100);
        }
        
        acrescimo = dependentes * 32;

        salario = horas * valor_hora;

        salario_bruto = salario + acrescimo + valor_hora_extra;

        if(salario_bruto <= 900) {
            imposto_renda = 0;
            gratificao = 100;
        } else if((salario_bruto > 900) && (salario_bruto <= 1500)) {
            imposto_renda = 10;
            gratificao = 50;
        } else {
            imposto_renda = 20;
            gratificao = 50;
        }

        salario_liquido = salario_bruto - ((salario_bruto * imposto_renda) / 100);
        salario_final = salario_liquido + gratificao;

        printf("O salário final do funcionário foi: R$ %f\n\n", salario_final);
        
    } while (horas != -1);

    system("pause");
}