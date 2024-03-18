#include <stdio.h>

int primo(int n){
  for (int i = 1; i < n+1; ++i){
    // check para ver se o numero é primo
    if (n%i == 0 && n == i){
      return 1;
    }
    // o numero é divisível por outro a não ser ele próprio, não é primo
    if (n%i == 0 && i != 1){
      return 0;
    }
  }
  // não é primo
  return 0;
}

int check_primo(x,y){
  // cria um vetor com os números primos que serão impressos, e um contador para o vetor
  int respostaf[1000];
  int j = 0;

  // for verifica cada número entre x e y, e registrando ele no vetor se for primo
  for (int i = x; i < y+1; i++){
    if (primo(i) == 1){
      respostaf[j] = i;
      j = j + 1;
    }
   }
  // imprime a resposta e cada número do vetor
  printf("Os números primos entre %d e %d são: ", x, y);
  for (int i = 0; i < j; i++){
    printf("| %d ", respostaf[i]);
  }
  printf("|");
  
  return 0;
}

int a = 0;
int b = 0;

int main(void) {

  // pede os valores de x e y
  printf("coloque o primeiro valor: ");
  scanf("%d", &a);

  printf("coloque o segundo valor: ");
  scanf("%d", &b);
  
  // chama a função
  check_primo(a,b);
  return 0;
}
