#include <stdio.h>

int main(void) {
  
  float valTotal, valProd, valMedio, centavos, reais;
  int quant, aux, not[7], x;
  char c = 's';
  
  printf("Este algorítmo apresenta diversas informações sobre a compra efetuada, para finalizar a compra digite um valor menor ou igual a 0!\n");
  
  while ((c == 's') || (c == 'S')){
    valTotal=0; valProd=0; valMedio=0; centavos=0; reais=0, quant=1, aux=0;
    
    while (quant > 0) {

      printf("\nDigite a quantidade do produto: ");
        scanf("%d", & quant);

      if (quant > 0){
        printf("\nDigite o valor do produto: ");
          scanf("%f", & valProd);

        valTotal = valTotal + valProd * quant;
        valMedio = valMedio + valProd;
        aux ++;
      }
    } //fimwhile
  
    valMedio = valMedio/aux;
    x = valTotal; //x é inteiro, val total é float
    reais = x/1;
    centavos = valTotal - reais;
  
    printf("=============================================");
    printf("\n\nVALOR TOTAL DA COMPRA: R$ %.2f", valTotal);  
    printf("\nVALOR MÉDIO DA COMPRA: R$ %.2f", valMedio);
    printf("\n\nO valor total da compra é %.0f reais e %.2f centavos.", reais, centavos);
  
    // calculo do número de notas
    not[0] = reais/100;
    reais = reais - not[0]*100;
    not[1] = reais/50;
    reais = reais-not[1]*50;
    not[2] = reais/20;
    reais = reais-not[2]*20;
    not[3] = reais/10;
    reais = reais-not[3]*10;
    not[4] = reais/5;
    reais = reais-not[4]*5;
    not[5] = reais/2;
    reais = reais-not[5]*2;
    not[6] = reais;
  
    printf("\n\n%d notas de 100\n", not[0]);
    printf("%d notas de 50\n", not[1]);
    printf("%d notas de 20\n", not[2]);
    printf("%d notas de 10\n", not[3]);
    printf("%d notas de 5\n", not[4]);
    printf("%d notas de 2\n", not[5]);
    printf("%d moedas de 1\n", not[6]);
  
    printf("\n\nDeseja repetir o programa (S ou N)?  ");
      scanf("%s", &c);

    printf("\n=============================================\n");
  }
  printf("\nFim do programa!");
}