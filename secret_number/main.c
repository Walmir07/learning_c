#include <stdio.h>

int main(void){
  int numero_secreto = 7;
  int palpite, tentativas = 0, max_tentativas = 5;

  printf("Bem vindo ao jogo de número secreto!\n");
  printf("Você tem %d tantativas para adivinhar o número entre 1 e 15\n", max_tentativas);

  for(tentativas = 1; tentativas <= max_tentativas; tentativas++){
    printf("Tentativa %d: Digite seu palpite:", tentativas);
    scanf("%d", &palpite);

    if(palpite == numero_secreto){
      printf("Parabéns, você encontrou o número secreto: %d\n", numero_secreto);
      break;
    } else if(palpite < numero_secreto){
      printf("O número secreto é maior\n");
    } else {
      printf("O número secreto é menor\n");
    }
  }

  if(tentativas > max_tentativas){
    printf("Você esgotou suas tentativas. O número secreto era %d\n", numero_secreto);
  }

  return 0;
}