#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cont;
int quad;

main(){
	
	
printf("numeros de 15 a 200 ao quadrado\n");

//WHILE
cont = 15;
while(cont <= 200){
	quad = cont * cont;
	printf("%d\n", quad);
	cont = cont + 1;	
}
system("pause");

//FOR
for(cont = 15; cont <= 200; cont = cont + 1){
	quad = cont * cont;
	printf("%d\n", quad);
}
system("pause");

//DO-WHILE
cont = 15;
do{
	quad = cont * cont;
	printf("%d\n", quad);
	cont = cont + 1;
}while( cont<= 200);
system("pause");
return(0);


}