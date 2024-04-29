#include <stdio.h>

  int main(void) {
    int a[3];
    int primeiro, segundo, terceiro, resultado;
  
    for(int i=0; i < 3; i++){
      a[i] = 0;
      
      while ((a[i] <=  0 ) || ( a[i]  >= 1000 )){
        printf("\nDigite o número de pessoas trabalhando no %.dº andar:", i+1);
          scanf(" %d", & a[i]);
  
        if ((a[i] <= 0 ) || ( a[i]>= 1000)){
          printf("\n***Número inválido, o número de pessoas trabalhando por andar deve ir de 0 a 1000.\n");
        }  
      }// fimwhile
    }//fimfor
    
    primeiro = (a[2]*4 + a[1]*2);
    segundo = (a[0]*2 + a[2]*2);
    terceiro = (a[0]*4 + a[1]*2);

    if(primeiro < segundo){
      resultado = primeiro;
    } else {
      resultado = segundo;
    }
    if (terceiro < resultado){
      resultado = terceiro;
    }

    printf("\nResultado = %d", resultado);
  
return 0;
  
  
}