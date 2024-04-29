#include <stdio.h>

int main(void) {

  float valdep = 0, valbem = 0, valfim = 0, valdeptot = 0;
  int ano = 0;

  printf("Informe o valor do bem a ser depreciado: ");
    scanf("%f", &valbem);
  
  printf("Informe o periodo da depreciação (em anos): ");
    scanf("%d", &ano);

  int fim = ano;
  ano = 1;
  
  for (int j = 0; j<fim; j++){
    valdep = (valbem*0.015);
    valfim = valbem - valdep;
    valdeptot = valdeptot + valdep;
    printf("")
    printf("%.d\t %.2f\t %.2f\t %.2f\t\n", ano, valbem, valdep, valfim);
    valbem = valfim; ano++;
  }
  return 0;
}