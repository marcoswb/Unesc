#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void ordena(float *A, float *B, float *C);

int main() {
  int A, B, C;

  printf("Informe um valor para A =>");
  scanf("%d", &A);

  printf("Informe um valor para B =>");
  scanf("%d", &B);

  printf("Informe um valor para C =>");
  scanf("%d", &C);

  ordena(&A, &B, &C);

  printf("A = %d\n", A);
  printf("B = %d\n", B);
  printf("C = %d\n", C);
  
  system("PAUSE");
}

void ordena(float *A, float *B, float *C){
  float temp;
  
  if(*A > *B){
    temp = *A;
    *B = *A;
  }

  if(*A > *C){
    temp = *A;
    *C = *A;
  }

  if(*B > *C){
    temp = *B;
    *C = *B;
  }

}