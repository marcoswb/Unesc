#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float PI =  3.14159;

void calculaEsfera(float r, float *area, float *volume);

int main() {
  float r, area, volume;

  printf("Informe o raio da esfera =>");
  scanf("%f", &r);

  calculaEsfera(r, &area, &volume);

  printf("Raio = %f\n", r);
  printf("Área = %f\n", area);
  printf("Volume = %f\n", volume);
  
  system("PAUSE");
}

void calculaEsfera(float r, float *area, float *volume){
  *area = 4 * PI * pow(r, 2);
  *volume = (4 * PI * pow(r, 3) / 3);
}