#include <stdio.h>
#include <string.h>

int main(void) {
  double area_total = 0;
  double largura;
  double comprimento;

  char comodo[50];

  while(1) {
    printf("\nIntroduza o nome, largura e comprimento do comodo:\n");
    scanf("%s %lf %lf", comodo, &largura, &comprimento);

    double area = largura * comprimento;

    printf("\nArea do comodo introduzido: %lf\n", area);
    printf("Pretende adicionar mais um comodo?\n");

    area_total += area;

    char escolha[3];
    scanf("%s", escolha);
    if (strcmp("NAO", escolha) == 0) break;
  }

  printf("\nArea total: %lf\n", area_total);

  return 0;
}
