#include<stdio.h>
#include<stdlib.h>

main() {
    float salario, vendas, comissao, salario_final;

    printf("Informe o salário do funcionário =>");
    scanf("%f", &salario);
    printf("Informe o valor das vendas do funcionário =>");
    scanf("%f", &vendas);
    comissao = (vendas * 4) / 100;
    salario_final = salario + comissao;

    printf("A comissão do funcionário será de %f e seu salário é = R$ %f \n", comissao, salario_final);

}