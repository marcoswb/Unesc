#include<stdio.h>
#include<stdlib.h>

printVetor(float salario[5]) {
    for(int i = 0; i < 5 ; i++) {
        printf("\n%dº funcionário\n", i+1);
        printf("Salário: %f\n", salario[i]);
    }
}

main() {
    float salario[5], novoSalario[5];
    char nome[20][5];

    for(int i = 0; i < 5; i++){
        printf("Informe o nome do %dº funcionário =>", i+1);
        scanf("%s", &nome[i]);
        
        printf("Informe o salario do %dº funcionário =>", i+1);
        scanf("%f", &salario[i]);

        novoSalario[i] = salario[i] + ((salario[i] * 8) / 100);
    }
    
    printVetor(novoSalario);
    
    system("pause");
}