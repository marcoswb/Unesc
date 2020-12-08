#include <stdlib.h>
#include <stdio.h>

int main() {
  int a = 12, b = 8;
  int *p = &a, *q = &b;

  printf("%d\n", a+(*p));
  printf("%d\n", 30*(*q));
  printf("%d\n", *p-*q);
  printf("%d\n", *p-(30 + *q) + 7);

  system("PAUSE");
}