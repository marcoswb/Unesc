#include<stdio.h>
#include<stdlib.h>

int multiplicacao(int numero) {
    int aux = 0;
    for(int i = 1; i <= numero; i++) {
        for(int j = 1; j <= i; j++) {
            aux = i * j;
            printf("%d  ", aux);
        }
        printf("\n");
    }

}

main() {
    int numero;
    do {
        printf("Informe um número entre 1 e 9 =>");
        scanf("%d", &numero);
    }while((numero <= 0) || (numero >= 10));
    
    multiplicacao(numero);
    
    system("pause");
}