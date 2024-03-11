#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
  int dado;

  srand(time(NULL));

  dado = 1 + rand()%101;
  
  printf("lancei o dado, tente prevê-lo\n");
  int palpite;
  while (palpite != dado){
   printf("seu palpite: ");
   scanf("%d", &palpite);
   printf("\n");
   if (palpite == dado){
     printf("finalmente acertou!");
     }
   if (palpite > dado){ 
       printf("tente um número menor\n");
     }
   if (palpite < dado){
       printf("tente um número maior\n");
     }
     // por motivos de balanceamento, 20 é um range divertido para te indicar a proximidade do palpite
   if (palpite > dado+20){
          printf("...um número muito menor\n");
     }
   if (palpite < dado-20){
          printf("...um número muito maior\n");
     }
       
   
  }
  return 0;
}
