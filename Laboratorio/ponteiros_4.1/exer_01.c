#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void calcula(int *x, int *y);

int main() {
  int x, y;

  printf("Informe um valor para x =>");
  scanf("%d", &x);

  printf("Informe um valor para y =>");
  scanf("%d", &y);

  calcula(&x, &y);

  printf("X + Y = %d\n", x);
  printf("X - Y = %d\n", y);
  
  system("PAUSE");
}

void calcula(int *x, int *y){
  int temp = *x;
  *x = *x + *y;
  *y = temp - *y;
}