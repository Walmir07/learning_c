#include <stdio.h>

int main(void){
  int x;
  int y;

  printf("Digite o valor de x:\n");
  scanf("%d", &x);
  printf("Digite o valor de y:\n");
  scanf("%d", &y);

  int soma = x + y;
  printf("A soma do valor x igual a %d e do valor y igual a %d é igual a: %d\n", x, y, soma);
  return 0;
}