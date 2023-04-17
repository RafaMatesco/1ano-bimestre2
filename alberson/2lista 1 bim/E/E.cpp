#include <stdio.h>
#include <math.h>

int main(void) {
  double a,b,c;

  printf("\nIntroduza os valores de A, B e C:\n");
  scanf("%lf %lf %lf", &a,&b,&c);

  int delta = (b*b) - 4*a*c;

  if (delta < 0) printf("Erro, delta < 0.\n");
  else {
    double x1 = (-b + sqrt(delta))/2*a;
    double x2 = (-b - sqrt(delta))/2*a;

    printf("\nRaizes:\n%lf\n%lf\n", x1, x2);
  }

  return 0;
}
