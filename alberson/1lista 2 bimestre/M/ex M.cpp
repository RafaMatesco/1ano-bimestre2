#include<stdio.h>
#include<stdlib.h>

int n, cont, soma, media;

main(){
	
	printf("escreva dez numeros inteiros:\n");
	for(cont=1;cont<=10; cont=cont+1){
		scanf("%d", &n);		
		soma=soma+n;
		}
	printf("a soma de todos os numeros e: %d\n", soma);
	media=soma/10;
	printf("a media de todos os numeros e: %d\n",media);
	
	printf("\nescreva dez numeros inteiros:\n");
	soma=0; media=0; cont=1;
	do{
	   	scanf("%d", &n);		
		soma=soma+n;
		cont=cont+1;	
	}while(cont<=10);
	printf("a soma de todos os numeros e: %d\n", soma);
	media=soma/10;
	printf("a media de todos os numeros e: %d\n",media);
	
	
	printf("\nescreva dez numeros inteiros:\n");
	soma=0; media=0; cont=1;
	while(cont<=10){
	   	scanf("%d", &n);		
		soma=soma+n;
		cont=cont+1;	
	}
	printf("a soma de todos os numeros e: %d\n", soma);
	media=soma/10;
	printf("a media de todos os numeros e: %d\n",media);
	system("pause");
	return(0);
}
