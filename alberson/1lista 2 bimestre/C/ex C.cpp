#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cont;
int resultado;

main(){


//FOR	
printf("a soma de todos os numeros de 1 a 100 = ");
for(cont=1;cont<=100;cont=cont+1){
	resultado = cont+1;
}
	resultado = resultado * 50;
	printf("%d\n", resultado);
	system("pause");
	

//WHILE	
printf("\na soma de todos os numeros de 1 a 100 = ");
cont=1;
resultado=1;
while(cont<=100){
		resultado = cont+1;
		cont=cont+1;
	}
	resultado = resultado * 50;
	printf("%d\n", resultado);
	system("pause");
	

//DO-WHILE	
printf("\na soma de todos os numeros de 1 a 100 = ");
cont=1;
resultado=1;
do{
		resultado = cont+1;
		cont=cont+1;	
	}while(cont<=100);
	resultado = resultado * 50;
	printf("%d\n", resultado);
	system("pause");
	return(0);
	
}