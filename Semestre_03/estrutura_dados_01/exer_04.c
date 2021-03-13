
// Desenvolva um programa que efetue o processamento de classificação alfabética, 
// apresentando os nomes em ordem, independente daquela em que foram informados,
// facilitando dessa forma a localização de algum nome, quando for efetuada uma pesquisa visual.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
    char nome[3][100], copia[100];

    int i, j;

    for (int x = 0; x < 3; x ++){
        printf("Informe o nome: ");
        gets(nome[x]);
    }

    for(i = 0;i < (3-1) ;i ++){
        for(j = i + 1;j < 3;j ++){
            if(strcmp(nome[i], nome[j]) > 0){
                
                strcpy(copia, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], copia);
            }
   
        }
    }

    for (int x = 0; x < 3; x ++){
        printf("posição %d = %s\n", x+1, nome[x]);
    }



    system("pause");
}