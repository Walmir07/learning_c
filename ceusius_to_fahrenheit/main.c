#include <stdio.h>

int main(void){
  float ceusius;
  printf("Digite a temperatura em Ceusius:");
  scanf("%f", &ceusius);

  float fahrenheit = ceusius * 9 / 5 + 32;
  printf("A temperatura em fahrenheit é %2f", fahrenheit);
  return 0;
}