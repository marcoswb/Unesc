#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main() {
    float numero_01, numero_02, resultado_01, resultado_02;
    int comando;
    printf("Informe o primeiro numero => ");
    scanf("%f", &numero_01);
    printf("Informe o segundo numero => ");
    scanf("%f", &numero_02);

    printf("ID da operação | operação \n");
    printf("1              | numero 1 elevado ao numero 2\n");
    printf("2              | raiz quadrada dos dois numeros     \n");
    printf("3              | raiz cubica dos dois numeros     \n");
    scanf("%d", &comando);

    if(comando == 1) {
        resultado_01 = pow(numero_01, numero_02);
        printf("A potenciação é %f \n", resultado_01);
    } else if(comando == 2) {
        resultado_01 = sqrt(numero_01);
        resultado_02 = sqrt(numero_02);
        printf("A raiz quadrada do numero %f é %f \n", numero_01, resultado_01);
        printf("A raiz quadrada do numero %f é %f \n", numero_02, resultado_02);
    } else if(comando == 3) {
        resultado_01 = pow(numero_01, 1.3/3.0);
        resultado_02 = pow(numero_02, 0.33);
        printf("A raiz cubica do numero %f é %f \n", numero_01, resultado_01);
        printf("A raiz cubica do numero %f é %f \n", numero_02, resultado_02);
    } else {
        printf("Opção de operação inválida \n");
        return;
    }

    system("pause");
}