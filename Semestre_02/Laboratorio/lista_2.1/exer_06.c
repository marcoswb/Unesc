#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char frase[100];
  int tamanho;

	printf ("\nEscreva um texto: \n");
	gets (frase);

	tamanho = strlen(frase);

  printf("Foram digitados %d caracteres na frase '%s' \n", tamanho, frase);

}