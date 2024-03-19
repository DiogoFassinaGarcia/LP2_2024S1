#include <stdio.h>
#include <math.h>

float funcao(int n){
  float resposta = 0;
  float aux;
  for (int i = 1; i < n + 1; i++){
    aux = ((float)i / pow(i, 2)) * pow(-1, (float)i + 1);
    resposta = resposta + aux;
  }
  return resposta;
}

int x = 0;

int main(void) {
  printf("insira o valor de n: ");
  scanf("%d", &x);

  printf("o valor da função para o n dado é aproximadamente: %f", funcao(x));

  return 0;
}
