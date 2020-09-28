#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main() {
  char frase[100];
  char consoantes[] = "bcdfghjklmnpqrstvxzwy";
  int cont = 0;

	printf ("\nInforme uma frase: \n");
	gets (frase);

	for (int x = 0; x < strlen(consoantes); x++) {

		for (int y = 0; y < strlen (frase); y++) {

			if (frase[y] == consoantes[x]){
        cont++;
			}
    }
  }

  printf ("\nA Frase '%s' contem %d consoantes\n", frase, cont);

  system("pause");
}