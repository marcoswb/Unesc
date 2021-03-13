#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <stdio.h>
#include<ctype.h>

mediaPonderada(float notas[2][3]){
  float acumulador_notas = 0, acumulador_pesos = 0, media;

  for(int i=0; i < 3; i++) {
    acumulador_notas += notas[0][i] * notas[1][i];
    acumulador_pesos += notas[1][i];
  }

  media = acumulador_notas / acumulador_pesos;

  printf("A média ponderada das notas é = %f\n", media);
}

int main() {
  float notas_pesos[2][3];

  for(int i=0; i < 3; i++) {
    printf("Informe a %dª nota =>", i+1);
    scanf("%f", &notas_pesos[0][i]);

    printf("Informe o peso da %dª nota =>", i+1);
    scanf("%f", &notas_pesos[1][i]);
  }

  mediaPonderada(notas_pesos);

  system("PAUSE");
}