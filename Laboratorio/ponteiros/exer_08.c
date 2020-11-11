#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int raizesReais(float a, float b, float c, float *x1, float *x2);
bool deltaReal(float a, float b, float c, float *delta);

int main() {
  float a, b, c, x1, x2;

  printf("Informe o valor de A =>");
  scanf("%f", &a);

  printf("Informe o valor de B =>");
  scanf("%f", &b);

  printf("Informe o valor de C =>");
  scanf("%f", &c);

  if(raizesReais(a, b, c, &x1, &x2) == 0){
    printf("O valor de delta foi menor que zero e assim a raíz é complexa!\n");
  } else {
    printf("A = %f\n", a);
    printf("B = %f\n", b);
    printf("C = %f\n", c);
    printf("X1 = %f\n", x1);
    printf("X2 = %f\n", x2);
    
  }
  
  system("PAUSE");
}

int raizesReais(float a, float b, float c, float *x1, float *x2){
  int RAIZREAL = 0;
  float delta;

  if(deltaReal(a, b, c, &delta)){
    *x1 = ((-b + (sqrt(delta))) / (2 * a));
    *x2 = ((-b - (sqrt(delta))) / (2 * a));
        
    RAIZREAL = 1;
  } else {
    RAIZREAL = 0;
  }
  
  return RAIZREAL;
}

bool deltaReal(float a, float b, float c, float *delta){
  *delta = pow(b, 2) - 4 * a * c;

  if(*delta < 0){
    return false;
  } else {
    return true;
  }
}