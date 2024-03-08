#include <stdio.h>

int num1, num2;
int main(void) {
  printf("coloque dois números: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  printf("%d, %d, %d, %d", num1 + num2, num1 - num2, num1 * num2, num1 / num2);
}
