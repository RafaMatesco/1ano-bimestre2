#include<stdio.h>
#include<stdlib.h>

int n;

main(){
	
	printf("Digite um numero: ");
    scanf("%d", &n);

    if(n%2==0){
		printf("e par\n");
    		}else{
				printf("e impar\n");
		}
        
	
        
    
	system("pause");
    return(0);
	}