#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main() {
  char frase[100];
  char vogais[] = "aeiou";
  int cont = 0;

	printf ("\nInforme uma frase: \n");
	gets (frase);

	for (int x = 0; x < strlen(vogais); x++) {

		for (int y = 0; y < strlen (frase); y++) {

			if (frase[y] == vogais[x]){
        cont++;
			}
    }
  }

  printf ("\nA Frase '%s' contem %d vogais\n", frase, cont);

  system("pause");
}