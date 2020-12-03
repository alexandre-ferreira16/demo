#include <stdio.h>

int soma(int x, int y) {
  return x + y;
}

int main() {
  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);

  printf("Soma = %d\n\n", soma(a,b));

  return 0;
}
