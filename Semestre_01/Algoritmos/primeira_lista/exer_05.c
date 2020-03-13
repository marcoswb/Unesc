#include<stdio.h>
#include<stdlib.h>

main() {
    float preco, novo_preco;

    printf("Informe a preço do produto =>");
    scanf("%f", &preco);
    novo_preco = preco - ((preco * 10) / 100);

    printf("O preço do produto com desconto de 10% é = %f \n", novo_preco);

}