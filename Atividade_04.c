#include <stdio.h>

int main(void) {

  int x = 0;
  int conta[4];

  while ((x < 1000) || (9999 < x)) {
    printf("\nDigite o número da conta com o número de validação: ");
      scanf("%d",&x);
    if ((x < 1000) || (9999 < x)) {
      printf("***Número de conta inválido, digite um número de conta válido!");
    }
  } //fimwhile

  int y = 1000;
  for (int i = 0; i < 4; i++){
    conta[i] = x/y;
    x = x - conta[i] * y;
    y = y / 10;
  }
  
  for (int i=0; i < 4; i++){
    printf("\n%d\n", conta[i]);
  }
    
    

    
    
    
    
}