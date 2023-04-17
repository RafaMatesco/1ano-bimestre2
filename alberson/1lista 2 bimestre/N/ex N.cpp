#include<stdio.h>
#include<stdlib.h>

int n, cont, soma, media, val;

main(){
soma=0; media=0;	
for(cont=1;cont<=1;cont=cont+1){
		cont = cont - 1;
		printf("digite um numero(quando vc digitar um numero negativo o program ira parar):\n");
		scanf("%d", &n);		
		if (n<0){
			cont = 10;
		}else{
			soma=soma+n;
			val=val+1; 			
	}
}
	media=soma/val;
	printf("a soma de todos os numeros positivos e: %d\n", soma);
	printf("a media de todos os numeros positivos e: %d\n",media);
	printf("o total de todos valores positivos lidos e: %d\n",val);	


n=1; soma=1; media=0; val=0;
while(n>=0){
		printf("\ndigite um numero(quando vc digitar um numero negativo o program ira parar):\n");
		scanf("%d", &n);		
		soma=soma+n;
		val=val+1;
		if(n<0){
			val=val-1;
		}
	}
	media=soma/val;
	printf("a soma de todos os numeros positivos e: %d\n", soma);
	printf("a media de todos os numeros positivos e: %d\n",media);
	printf("o total de todos valores positivos lidos e: %d\n",val);	
	
n=1; soma=1; media=0; val=0; 
	do{	
		printf("\ndigite um numero(quando vc digitar um numero negativo o program ira parar):\n");
		scanf("%d", &n);		
		soma=soma+n;
		val=val+1;
		if(n<0){
			val=val-1;
		}
	}while(n>=0);	
	media=soma/val;
	printf("a soma de todos os numeros positivos e: %d\n", soma);
	printf("a media de todos os numeros positivos e: %d\n",media);
	printf("o total de todos valores positivos lidos e: %d\n",val);
	
	
	
	system("pause");
	return(0);
	
	
	
	
	
}
