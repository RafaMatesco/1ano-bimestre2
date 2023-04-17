#include<stdio.h>
#include<math.h>


int valor1, valor2, valor3, valor4;
main(){
	

printf("Digite o primeiro valor = \n");
scanf("%d",valor1);
printf("Digite o segundo valor = \n");
scanf("%d",valor2);
printf("Digite o terceiro valor = \n");
scanf("%d",valor3);
printf("Digite o quarto valor = \n");
scanf("%d",valor4);
if((valor1 mod 2)==0) && ((valor1 mod 3)==0){
   printf("Primeiro valor e divisivel por 2 e 3 = %d",valor1);
   printf("Dividido por 2 = %d",valor1/2);
   printf("Dividido por 3 = %d",valor1/3);
}

if((valor2 mod 2)==0) && ((valor2 mod 3)==0){
   printf("Primeiro valor e divisivel por 2 e 3 = %d",valor2);
   printf("Dividido por 2 = %d",valor2/2);
   printf("Dividido por 3 = %d",valor2/3);
}

if((valor3 mod 2)==0) && ((valor3 mod 3)==0){
   printf("Primeiro valor e divisivel por 2 e 3 = %d",valor3);
   printf("Dividido por 2 = %d",valor3/2);
   printf("Dividido por 3 = %d",valor3/3);
   }

if((valor4 mod 2)==0) && ((valor4 mod 3)==0){
   printf("Primeiro valor e divisivel por 2 e 3 = %d",valor1);
   printf("Dividido por 2 = %d",valor1/2);
   printf("Dividido por 3 = %d",valor1/3);
}





}