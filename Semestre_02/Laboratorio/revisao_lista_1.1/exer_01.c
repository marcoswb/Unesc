#include<stdio.h>
#include<stdlib.h>

main() {
    int numero, contador = 0, lista[100];

    do {
        printf("Digite um número =>");
        scanf("%d", &numero);
        lista[contador] = numero;
        contador++;
    }while((numero >= 0) && (contador <= 100));


    for(int i = contador-2; i >= 0; i--){

        printf("%d\n", lista[i]);
    }
    system("pause");
}