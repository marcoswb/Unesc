#include<stdio.h>
#include<stdlib.h>

main() {
    float vendas[10][3], valor_comissao, acumulador_vendas = 0, maior, menor;
    char nomes[20][10];
    int maior_comissao = 0, menor_comissao = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe o nome do %dº vendedor =>", i+1);
        scanf("%s", &nomes[i]);

        printf("Informe o total de vendas do %dº vendedor =>", i+1);
        scanf("%f", &vendas[i][0]);

        printf("Informe o percentual de comissão do %dº vendedor =>", i+1);
        scanf("%f", &vendas[i][1]);

        valor_comissao = (vendas[i][0] * vendas[i][1]) / 100;
        vendas[i][2] = valor_comissao;
        acumulador_vendas += vendas[i][0];


        if(i == 0){
            maior = valor_comissao;
            menor = valor_comissao;
            maior_comissao = i;
            menor_comissao = i;
        } else {
            if(valor_comissao > maior) {
                maior = valor_comissao;
                maior_comissao = i;
            }

            if(valor_comissao < menor) {
                menor = valor_comissao;
                menor_comissao = i;
            }
        }
    }

    printf("\nResultados:\n");
    for(int y = 0; y < 10; y++){
        printf("Vendedor %s teve comissão de R$ %f\n", nomes[y], vendas[y][2]);
        
    }

    printf("Os totais de vendas de todos os vendedores deram R$ %f\n", acumulador_vendas);
    printf("Vendedor %s obteve a maior comissão = R$ %f\n", nomes[maior_comissao], vendas[maior_comissao][2]);
    printf("Vendedor %s obteve a menor comissão = R$ %f\n", nomes[menor_comissao], vendas[menor_comissao][2]);

    system("pause");
}