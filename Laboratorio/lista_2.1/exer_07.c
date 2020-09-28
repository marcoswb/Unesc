#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <stdio.h>
#include<ctype.h>

int lenghtString(char frase[20]){
	int cont = 0;

	for(int i=0; i<20; i++) {
		if(frase[i] != '\0') {
      cont++;
    } else {
      return cont;
    }
	}

  return cont;
}

int main() {

  char frase[20];
  int tamanho;

  printf("Digite uma Frase:");
  gets(frase);

  tamanho = lenghtString(frase);
  
  printf("Foram digitados %d caracteres na frase '%s' \n", tamanho, frase);

  system("PAUSE");
}