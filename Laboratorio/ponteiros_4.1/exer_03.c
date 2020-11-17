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
  float temp_a, temp_b, temp_c;
  
  if((*A < *B) && (*A < *C)){
    if((*B < *C)){
      temp_b = *B;
      temp_c = *C;
    } else {
      temp_b = *C;
      temp_c = *B;
    }
    temp_a = *A;
  } 
  
  if((*B < *A) && (*B < *C)){
    if((*A < *C)){
      temp_b = *A;
      temp_c = *C;
    } else {
      temp_b = *C;
      temp_c = *A;
    }
    temp_a = *B;
  } 

  if((*C < *A) && (*C < *B)){
    if((*A < *B)){
      temp_b = *A;
      temp_c = *B;
    } else {
      temp_b = *B;
      temp_c = *A;
    }
    temp_a = *C;
  }

  *A = temp_a;
  *B = temp_b;
  *C = temp_c;

}