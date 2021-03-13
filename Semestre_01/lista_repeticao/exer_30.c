#include<stdlib.h>
#include<stdio.h>

main() {
    float salario_atual = 1000, aumento, salario_final, percentual_aumento = 1.5;
    for (int i = 2006; i <= 2020; i++){
        aumento = (salario_atual * percentual_aumento) / 100;
        salario_final = salario_atual + aumento;
        salario_atual = salario_final;
        percentual_aumento = percentual_aumento * 2;
    }

    printf("Salário final do funcionário é de R$ %f \n", salario_final);

    system("pause");
}