#include<stdio.h>

struct trabalhador{
	int id;
    char nome[30];
    char sexo;
    float salario;
};

struct trabalhador trab[3];

void menu(){
    int opcao;
    char sexo;
    float aumento;

    printf("\nEscolha alguma ação para realizar:\n");
    printf("1. Mostrar todos os trabalhadores\n");
    printf("2. Mostrar os trabalhadores de determinado sexo\n");
    printf("3. Alterar salários\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: {
        mostrarTodosTrabalhadores();
        break;
    }
    case 2: {
        printf("Informe o um sexo para aplicar o filtro: "); 
        scanf("%s", &sexo);
        mostrarTrabalhadoresPorSexo(sexo);
        break;
    }

    case 3: {
        printf("Informe o percentual de aumento"); 
        scanf("%f", &aumento);
        atualizarSalario(aumento);
        break;
    }
        
    default:
        printf("Opção inválida digitada!");
        break;
    }
}

void voltarMenu(){
    int opcao;
    printf("Deseja voltar ao menu principal ? (1. SIM / 2.NÃO)"); 
    scanf("%d", &opcao);

    if(opcao == 1){
        menu();
    } else {
        return;
    }
}

void input(){
    for(int i = 0; i < 3; i++){
        printf("Informe o %dº id:", i+1); 
        scanf("%d", &trab[i].id);

        printf("Informe o %dº nome:", i+1); 
        fflush(stdin);
        gets(trab[i].nome);

        printf("Informe o %dº sexo(F / M):", i+1); 
        scanf("%c", &trab[i].sexo);

        printf("Informe o %dº salario:", i+1); 
        scanf("%f", &trab[i].salario);
    }
}

void mostrarTodosTrabalhadores(){
    for(int i = 0; i < 3; i++){
        printf("ID trabalhador %d = ", i+1, trab[i].id);
        printf("Nome trabalhador %s = ", i+1, trab[i].nome);
        printf("Sexo trabalhador %c = ", i+1, trab[i].sexo);
        printf("Salario trabalhador %f = ", i+1, trab[i].salario);
    }

    voltarMenu();
}

void mostrarTrabalhadoresPorSexo(char sexo){
    for(int i = 0; i < 3; i++){
        if(trab[i].sexo == sexo){
            printf("ID trabalhador %d = ", i+1, trab[i].id);
            printf("Nome trabalhador %s = ", i+1, trab[i].nome);
            printf("Sexo trabalhador %c = ", i+1, trab[i].sexo);
            printf("Salario trabalhador %f = ", i+1, trab[i].salario);
        }
    }

    voltarMenu();
}

void atualizarSalario(float percentual){
    float novo_salario;

    for(int i = 0; i < 3; i++){
        novo_salario = trab[i].salario + ((trab[i].salario * percentual) / 100);
        trab[i].salario = novo_salario;

        printf("ID trabalhador %d = ", i+1, trab[i].id);
        printf("Nome trabalhador %s = ", i+1, trab[i].nome);
        printf("Sexo trabalhador %c = ", i+1, trab[i].sexo);
        printf("Novo salario trabalhador %f = ", i+1, trab[i].salario);
    }

    voltarMenu();
}

main(){
    
	input();
    menu();
    
}