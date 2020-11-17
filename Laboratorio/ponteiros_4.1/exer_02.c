#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo);

int main() {
  int tamanho_vetor, maximo, minimo;

  printf("Informe um tamanho para o vetor =>");
  scanf("%d", &tamanho_vetor);

  int v[tamanho_vetor];

  for(int i = 0; i < tamanho_vetor; i++){
    printf("Informe o %dº valor pro vetor(%d/%d) =>", i+1, i+1, tamanho_vetor);
    scanf("%d", &v[i]);
  }

  maximoMinimo(&v, tamanho_vetor, &maximo, &minimo);

  printf("Maximo = %d\n", maximo);
  printf("Minimo = %d\n", minimo);
  
  system("PAUSE");
}

void maximoMinimo(int *v, int N, int *maximo, int *minimo){
  for(int i = 0; i < N; i++){
    if(i == 0){
      *maximo = v[i];
      *minimo = v[i];
    } else {
      if(v[i] > *maximo){
        *maximo = v[i];
      }

      if(v[i] < *minimo){
        *minimo = v[i];
      }
    }
  }

}