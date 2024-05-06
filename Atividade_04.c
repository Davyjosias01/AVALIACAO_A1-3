#include <stdio.h>

int main(void) {

  int x = 0, dVeri = 0, aux = 0;
  int conta[4], auxConta[4];
  
  while ((x < 1000) || (9999 < x)) {
    printf("\nDigite o número da conta com o número de validação: ");
      scanf("%d",&x);
    if ((x < 1000) || (9999 < x)) {
      printf("***Número de conta inválido, digite um número de conta válido!");
    }
  } //fimwhile

  int y = 1000;
  for(int i = 0; i < 4; i++){
    conta[i] = x/y;
    x = x - conta[i] * y;
    y = y / 10;
  }
  dVeri = conta[3];

  //calculo para validação do código verificador
  x = conta[2]*100 + conta[1]*10 + conta[0] + conta[0]*100 + conta[1]*10 + conta[2];
  
  y = 1000;
  aux = 0;
  for (int i = 0; i < 4; i++){
    auxConta[i] = x/y;
    x = x - auxConta[i] * y;
    y = y / 10;
    auxConta[i] = auxConta[i]*i;
    aux = aux + auxConta[i];
  }
  
  y = 1000;
  for(int i = 0; i < 4; i++){
    auxConta[i] = aux/y;
    aux = aux - auxConta[i] * y;
    y = y / 10;
  }

  if (dVeri == auxConta[3]){
    printf("\nNúmero de conta e código verificador válidos!");
  } else {
    printf("\nCódigo verificador inválido");
  }
}