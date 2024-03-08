#include <stdio.h>
#include <math.h>
float raio;
int main(void){
  printf("escreva o raio do círculo: ");
  scanf("%f", &raio);
  printf("Um círculo com raio %f tem área igual a %f.", raio, M_PI * (raio * raio));
return 0;
}
