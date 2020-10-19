#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void mostrarMes(int mes){
  
  switch(mes) {
    case 1: printf("Mês digitado = Janeiro\n"); break;
    case 2: printf("Mês digitado = Fevereiro\n"); break;
    case 3: printf("Mês digitado = Março\n"); break;
    case 4: printf("Mês digitado = Abril\n"); break;
    case 5: printf("Mês digitado = Maio\n"); break;
    case 6: printf("Mês digitado = Junho\n"); break;
    case 7: printf("Mês digitado = Julho\n"); break;
    case 8: printf("Mês digitado = Agosto\n"); break;
    case 9: printf("Mês digitado = Setembro\n"); break;
    case 10: printf("Mês digitado = Outubro\n"); break;
    case 11: printf("Mês digitado = Novembro\n"); break;
    case 12: printf("Mês digitado = Dezembro\n"); break;
    default: printf("Mês inválido");
  }

}

int main() {
  int mes;

  do{
    printf("Informe um número entre 1 e 12 =>");
    scanf("%d", &mes);
  }while((mes < 1) || (mes > 12));
  
  mostrarMes(mes);
  
  system("PAUSE");
}