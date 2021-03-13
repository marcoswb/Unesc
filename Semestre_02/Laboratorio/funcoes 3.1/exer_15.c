#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

float mostrarNumeros() {
  for(int i = 100; i >= 1; i--){
    printf("%d\n", i);
  }
}

int main() {
  
  mostrarNumeros();
  
  system("PAUSE");
}