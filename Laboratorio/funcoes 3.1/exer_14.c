#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

float mostrarNumeros() {
  for(int i = 1; i <= 100; i++){
    printf("%d\n", i);
  }
}

int main() {
  
  mostrarNumeros();
  
  system("PAUSE");
}