#include<stdlib.h>
#include<stdio.h>

main() {
    int codigo, quantidade;
    float preco_unitario, preco_nota, desconto_nota, preco_final_nota;
    printf("Informe o código do produto => ");
    scanf("%d", &codigo);
    printf("Informe a quantidade comprada do produto => ");
    scanf("%d", &quantidade);

    switch (codigo){
        case 1 ... 10: {
            preco_unitario = 10;
            break;
        }
        case 11 ... 20: {
            preco_unitario = 15;
            break;
        }
        case 21 ... 30: {
            preco_unitario = 20;
            break;
        }
        case 31 ... 40: {
            preco_unitario = 30;
            break;
        }
        default: {
            return;
            break;
        }
        
    }  

    preco_nota = preco_unitario * quantidade;

    if(preco_nota < 250){
        desconto_nota = (preco_nota * 5) / 100;
    } else if((preco_nota >= 250) && (preco_nota <= 500)){
        desconto_nota = (preco_nota * 10) / 100;
    } else {
        desconto_nota = (preco_nota * 15) / 100;
    }

    preco_final_nota = preco_nota - desconto_nota;

    printf("Preço unitário do produto = R$ %f \n", preco_unitario);
    printf("Preço total da nota = R$ %f \n", preco_nota);
    printf("Valor do desconto da nota = R$ %f \n", desconto_nota);
    printf("Valor da nota com desconto = R$ %f \n", preco_final_nota);
    system("pause");
}