#include<stdio.h>
#include<stdlib.h>

main() {
    int numero, contador = 0, contador_lista = 0, lista[100];

    do {
        printf("Digite um número =>");
        scanf("%d", &numero);

        if((numero % 2) == 0){
            lista[contador_lista] = numero;
            contador_lista++;
        }
        
        contador++;
    }while((numero != -999) && (contador <= 100));


    for(int i = 0; i <= contador_lista; i++){

        printf("%d\n", lista[i]);
    }
    system("pause");
}