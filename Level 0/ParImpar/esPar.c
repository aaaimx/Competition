#include <stdio.h>

int main(void) {
  int numero;
  printf("Escribe un número:\n");
  scanf("%d", &numero);
  if (numero % 2 == 0) {
    printf("Si");
  } else {
    printf("No");
  }
  return 0;
}