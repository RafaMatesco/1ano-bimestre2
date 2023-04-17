#include<stdio.h>
#include<stdlib.h>

int n;

main(){
	
	printf("faixa permitida:entre 0 e 9\ndigite um valor: ");
	scanf("%d", &n);
	
	if((n<0) || (n>9)){
		printf("seu numero esta fora da faixa permitida\n");
	}else{
		printf("seu numero esta dentro da faixa permitida\n");
	}

system("pause");
return(0);
}