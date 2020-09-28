#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main() {
  char frase[100];
  char alfabeto[] = "abcdefghijklmnopqrstuvxzwy";
  int cont = 0, repetidas[26];

	printf ("\nInforme uma frase: \n");
	gets (frase);

	for (int x = 0; x < strlen(alfabeto); x++) {

		for (int y = 0; y < strlen (frase); y++) {

			if (frase[y] == alfabeto[x]){
        cont++;
			}
    }

    repetidas[x] = cont;
    cont=0;

    
  }

  for (int i = 0; i < strlen (alfabeto); i++) {

			if (repetidas[i] > 1){
        printf ("\nA letra %c contem %d vez(es) na frase\n", alfabeto[i], repetidas[i]);
			}
    }
  system("pause");
}