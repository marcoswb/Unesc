#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

float mostraImpares() {
  int cont = 0;

  for(int i = 250; i <= 500; i++){
    if((i % 2) != 0){
      printf("%d\n", i);
      cont += i;
    }
  }

  printf("A soma de todos os ímpares neste intervalo é = %d\n", cont);
}

int main() {
  
  mostraImpares();
  
  system("PAUSE");
}