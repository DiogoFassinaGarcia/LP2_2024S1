#include <stdio.h>
float celsius;
int main(void){
  printf("insira a temperatura em celsius: ");
  scanf("%f", &celsius);
  printf("Uma temperatura de %f graus Celsius equivale a %f graus Fahrenheit", celsius , ((celsius * 9 / 5) + 32));
return 0;
}
