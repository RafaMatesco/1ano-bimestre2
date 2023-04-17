#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;
int n1;

main(){
	
//FOR
for(i=2;i<=500;i=i+2){
        if(i%2==0){
		n1=n1+i;
    	}
	}
	printf("\na soma de todos os pares de 1 a 500 e = %d\n", n1);
	system("pause");

//WHILE
i=2;
n1=0;
while(i<=500){
	if(i%2==0){
    n1=n1+i;
	}
	i=i+2;
	}
	printf("\na soma de todos os pares de 1 a 500 e = %d\n", n1);
	system("pause");

//DO-WHILE
i=2;
n1=0;
do{
		if(i%2==0){
    	n1=n1+i;
		}
		i=i+2;	
	}while(i<=500);
	printf("\na soma de todos os pares de 1 a 500 e = %d\n", n1);
	system("pause");
	return(0);

}