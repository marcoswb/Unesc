#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

main() {
    float peso, altura, IMC;
    char nome[50], faixa_risco[20];
    printf("Informe o nome do paciente => ");
    gets(nome);

    printf("Informe o peso do paciente => ");
    scanf("%f", &peso);
    
    printf("Informe a altura do paciente => ");
    scanf("%f", &altura);

    IMC = peso / pow(altura, 2);

    if(IMC < 20) {
        strcpy(faixa_risco, "Abaixo do peso");
    } else if((IMC >= 20) && (IMC <= 25)) {
        strcpy(faixa_risco, "Normal");
    } else if((IMC > 25) && (IMC <= 30)) {
        strcpy(faixa_risco, "Excesso de peso");
    } else if((IMC > 31) && (IMC <= 35)) {
        strcpy(faixa_risco, "Obesidade");
    } else if(IMC > 35) {
        strcpy(faixa_risco, "Obesidade Mórbida");
    }

    printf("Paciente %s \n", nome);
    printf("Faixa de risco: %s \n", faixa_risco);
    system("pause");
}