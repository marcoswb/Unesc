#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void mostraMensagem(int resultado){
  printf("A soma de todos os pares neste intervalo é = %d\n", resultado);
}

float mostraPares() {
  int cont = 0;

  for(int i = 2; i <= 250; i++){
    if((i % 2) == 0){
      printf("%d\n", i);
      cont += i;
    }
  }

  mostraMensagem(cont);
}

int main() {
  
  mostraPares();
  
  system("PAUSE");
}