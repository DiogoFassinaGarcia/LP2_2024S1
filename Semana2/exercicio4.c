#include <stdio.h>
float cat1, cat2;
int main(void){
   printf("escreva o primeiro lado do triangulo: ");
  scanf("%f", &cat1);
  printf("escreva o segundo lado do triangulo: ");
  scanf("%f", &cat2);
  printf("Um triângulo retângulo com lados %f e %f tem uma hipotenusa igual a %f.", cat1, cat2, sqrt((cat1 * cat1) + (cat2 * cat2)));
}
