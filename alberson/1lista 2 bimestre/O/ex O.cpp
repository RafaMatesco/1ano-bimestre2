#include<stdio.h>
#include<stdlib.h>

int n,cont, fat;

main(){
	
fat=1;
for(n=1;n<=10;n=n+2){
 	fat=fat*n;	
	}
	printf("fatorial dos numeros impares entre 1 e 10: %d\n",fat);
	
fat=1; n=1; 
while(n<=10){
	fat=fat*n;
	n=n+2;		
	}

	printf("\nfatorial dos numeros impares entre 1 e 10: %d\n",fat);

fat=1; n=1; 	
do{
	fat=fat*n;
	n=n+2;	
}while(n<=10);

printf("\nfatorial dos numeros impares entre 1 e 10: %d\n\n",fat);

system("pause");
return(0);

}
