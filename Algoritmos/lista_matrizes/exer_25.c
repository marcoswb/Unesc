#include<stdio.h>
#include<stdlib.h>

main() {
    char nomes[5];
    float precos[5][2], media_produtos_mais_100, acumulador = 0;
    int produtos_mais_50 = 0, contador = 0;

    for(int i = 0; i < 5; i++){
        printf("Informe o nome do produto %d =>", i+1);
        scanf("%s", &nomes[i]);

        printf("Informe o valor do produto %d =>", i+1);
        scanf("%f", &precos[i][0]);

        if(precos[i][0] < 50) {
            produtos_mais_50++;
        } else if((precos[i][0] >= 50) && (precos[i][0] < 100)) {
            precos[i][1] = 1;
        } else {
            acumulador += precos[i][0];
            contador++;
        }
    }

    media_produtos_mais_100 = acumulador / contador;

    printf("%d produtos tem preço menor que R$ 50,00\n", produtos_mais_50);
    for(int y = 0; y < 5; y++){
        if(precos[y][1] == 1){
            printf("Produto %s tem valor entre R$ 50,00 e R$ 100,00\n", nomes[y]);
        }
    }

    printf("A media dos produtos com preço maior que R$ 100,00 é = R$ %f\n", media_produtos_mais_100);    
      
    system("pause");
}