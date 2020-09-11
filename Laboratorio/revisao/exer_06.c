#include<stdio.h>
#include<stdlib.h>

main() {
    float salario, novo_salario;

    printf("Informe seu salário =>");
    scanf("%f", &salario);
    

    if(salario < 500) {
        novo_salario = salario + ((salario * 30) / 100); 
        printf("novo salario = %f \n", novo_salario);
    } else {
        printf("funcionario ganha mais que R$500,00 e não tem direito ao aumento\n");
    }

    system("pause");
}