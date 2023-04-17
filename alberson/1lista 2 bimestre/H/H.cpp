#include <stdio.h>
int i = 1;
int base = 1;
int expoente = 1;
int resultado = 1;
main(){
      printf("Digite o valor da base: ");
      scanf("%d", &base);

      printf("Digite o valor do expoente: ");
      scanf("%d", &expoente);

      for (i = 1; i <= expoente; i++){
            resultado = resultado * base;
      }

      printf("\n\nResposta: %d elevado a %d = %d", base, expoente, resultado);
}

