#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char frase[100];
  int tamanho;

	printf ("\nInforme uma frase: \n");
	gets (frase);

  tamanho = strlen (frase);

	for (int x = 0; x < tamanho; x++) {
    if(frase[x] != '\0') {
      if(isspace(frase[x])) {
        printf("\n");
      } else {
        printf("%c", frase[x]);
      }
    }
    
  }  

  system("pause");
}