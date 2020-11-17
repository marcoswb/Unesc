#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertMaiuscula(char *frase);

int main() {
   char frase[50];

  printf("\nDigite uma frase: ");
  gets(frase);

  convertMaiuscula(&frase);

  printf("Nova frase = %s\n", frase);
  
  system("PAUSE");
}

void convertMaiuscula(char *frase){
  int tamanho = strlen(*frase);

    for (int i=0; i <= tamanho; i++) {
      *frase[i] = toupper(*frase[i]);
  }

}