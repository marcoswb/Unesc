#include<stdio.h>
#include<stdlib.h>

main() {
    float vetor[10], soma_positivos = 0;
    int contador_negativos = 0;

    printf("\nValores do vetor\n");
    for(int i = 0; i < 10; i++){
        printf("Informe o %dº número do vetor A =>", i+1);
        scanf("%f", &vetor[i]);

        if(vetor[i] < 0) {
            contador_negativos++;
        } else {
            soma_positivos += vetor[i];
        }
    }

   
    printf("\n%d numeros negativos foram encontrados\n", contador_negativos);
    printf("A soma dos numeros positivos é = %f\n", soma_positivos);
      
    system("pause");
}