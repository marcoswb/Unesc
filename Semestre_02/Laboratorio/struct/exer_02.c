#include<stdio.h>

struct habitante{
	int idade;
    char sexo;
    float salario;
    int numero_filhos;
};

struct habitante habit[10];

void input(){
    for(int i = 0; i < 10; i++){
        printf("Informe a %dº idade:", i+1); 
        scanf("%d", &habit[i].idade);

        printf("Informe o %dº sexo(F / M):", i+1); 
        scanf("%c", &habit[i].sexo);

        printf("Informe o %dº salario:", i+1); 
        scanf("%f", &habit[i].salario);

        printf("Informe o %dº numero de filhos:", i+1); 
        scanf("%d", &habit[i].numero_filhos);
    }
}

void habitantesMenorSalario(float media){

    printf("Habitantes com salario inferior a média geral\n");

    for(int i = 0; i < 10; i++){
        if(habit[i].salario < media){
            printf("Idade habitante %d = ", i+1, habit[i].idade);
            printf("Sexo habitante %c = ", i+1, habit[i].sexo);
            printf("Salario habitante %f = ", i+1, habit[i].salario);
            printf("Numero filhos habitante %f = ", i+1, habit[i].numero_filhos);
        }
    }
}

void habitantesMaiorFilhos(int media){

    printf("Habitantes com numero de filhos maior que a media geral\n");

    for(int i = 0; i < 10; i++){
        if(habit[i].numero_filhos < media){
            printf("Idade habitante %d = ", i+1, habit[i].idade);
            printf("Sexo habitante %c = ", i+1, habit[i].sexo);
            printf("Salario habitante %f = ", i+1, habit[i].salario);
            printf("Numero filhos habitante %f = ", i+1, habit[i].numero_filhos);
        }
    }
}

void mediaSalario(){
    float cont_salario, media;

    for(int i = 0; i < 10; i++){
        cont_salario += habit[i].salario;
    }

    media = cont_salario / 10;
    printf("A média salarial dos habitantes é de %f\n", media); 

    habitantesMenorSalario(media);
}

void mediaFilhos(){
    float cont_filhos, media;

    for(int i = 0; i < 10; i++){
        cont_filhos += habit[i].numero_filhos;
    }

    media = cont_filhos / 10;
    printf("A média de filhos dos habitantes é de %f\n", media);

    habitantesMaiorFilhos(media);
}

main(){
    
	input();
    mediaSalario();
    mediaFilhos();
}