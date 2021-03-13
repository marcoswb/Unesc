#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main() {
    float numero_01, numero_02, resultado_01, resultado_02;
    char comando;
    printf("Informe o primeiro número => ");
    scanf("%f", &numero_01);
    printf("Informe o segundo número => ");
    scanf("%f", &numero_02);

    printf("+-------------------------------------------------------------+\n");
    printf("| Escolha do Usuário |                Operação                |\n");
    printf("+--------------------+----------------------------------------+\n");
    printf("|         a          |  O primeiro número elevado ao segundo  |\n");
    printf("|         b          |  Raiz quadrada de cada um dos números  |\n");
    printf("|         c          |   Raiz cúbica de cada um dos números   |\n");
    printf("+--------------------+----------------------------------------+\n");
    printf("Escolha a sua opção =>");
    scanf("%s", &comando);

    if(comando == 'a') {
        resultado_01 = pow(numero_01, numero_02);
        printf("A potenciação tem resultado %f \n", resultado_01);
    } else if(comando == 'b') {
        resultado_01 = sqrt(numero_01);
        resultado_02 = sqrt(numero_02);
        printf("A raiz quadrada do número %f é %f \n", numero_01, resultado_01);
        printf("A raiz quadrada do número %f é %f \n", numero_02, resultado_02);
    } else if(comando == 'c') {
        resultado_01 = pow(numero_01, 1.0/3.0);
        resultado_02 = pow(numero_02, 1.0/3.0);
        printf("A raiz cúbica do número %f é %f \n", numero_01, resultado_01);
        printf("A raiz cúbica do número %f é %f \n", numero_02, resultado_02);
    } else {
        printf("Opção de operação inválida \n");
        return;
    }

    system("pause");
}