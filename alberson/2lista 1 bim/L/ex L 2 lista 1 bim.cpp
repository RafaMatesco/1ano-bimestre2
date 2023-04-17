#include<stdio.h>
#include<stdlib.h>

int n;

main(){

printf("digite um numero: ");
scanf("%d", &n);

if(!(n>3)){
	printf("%d nao e maior que 3\n", n);
	system("pause");
return(0);
}else{
	printf("e maior que 3\n");
	system("pause");
return(0);
}
system("pause");
return(0);
}