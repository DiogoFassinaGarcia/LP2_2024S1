#include <stdio.h>
float altu, peso;

int main(void) {
  printf("insira seu peso: ");
  scanf("%f", &peso);
  printf("insira sua altura: ");
  scanf("%f", &altu);
  printf("O IMC de uma pessoa com peso %f kg e altura %f m é igual a %f.", peso, altu, peso / (altu * altu));
return 0;
}
