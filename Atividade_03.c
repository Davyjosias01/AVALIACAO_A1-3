// este código deverá utilizar o sortInsert
#include <stdio.h>

int main(void) {
  int x = 0, mincomp, totalcomp;
  
  //validando o número de competidores inscritos
  while ((x < 1 ) || (x >1000)){
    printf("\nDigite o número de competidores inscritos: ");
      scanf("%d", &x);
    if ((x < 1 ) || (x >1000)){
      printf("***O número de competidores deve ser maior que 0 e menor que 1000");
    }
  } //fimwhile
  
  int limite = x, comp[x], pont[x];
  totalcomp = x;
  
  //validando o número minimo de competidores classificados
  while ((mincomp < 1 ) || (mincomp > x)){
    printf("\nDigite o número mínimo de competidores classificados: ");
      scanf("%d", &mincomp);
    if ((mincomp < 1) || (mincomp > x)){
      printf("***O número minimo de competidores classificados deve ser maior que 0 e menor que o número de competidores inscritos");
    }
  } //fimwhile
  
  // recebendo e validando a pontuação de cada participante 
  for(int i = 0; i < x;i++){
    printf("\nPontuação do %dº participante: ", i+1);  
      scanf("%d", &pont[i]);
    if ((pont[i] < 1) || (pont[i] > 1000)){
      printf("\nPontuação inválida, digite uma pontuação entre 1 e 1000");  
      i--;
    } 
  }//fimfor
  
  //insertion-sort
  int chave, i;
  for(int j = 1; j < limite ; j++){
    chave = (pont[j]);
    i=j-1;
    while ((i >= 0 ) && (pont[i] > chave)){
      pont[i+1] = pont[i];
      i = i - 1;
    } 
    pont [i+1] = chave;
  }//fimfor

  
  // validação do insertion-sort
  /*
  for (int j = 0; j<limite;j++){
    printf("%d\n", pont[j]);
  }
  */

  // descobrindo o número de competidores classificados
  x = limite;
  int classificados = 0;
  while ((classificados <= mincomp) || (pont[x] == pont[x-1])) {
      classificados++;
      x--;
  }

  //Present the sum of all the classified participant
  printf("\n\nNúmero de participantes classificados: %d", classificados);
  
  return 0;
}