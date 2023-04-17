#include <stdio.h>
#include<stdlib.h>

int n1, n2, n3, n4, n5;
int maior;
int menor;


main(){

printf("digite um numero inteiro:");
scanf("%d", &n1);
printf("digite outro numero inteiro:");
scanf("%d", &n2);
printf("digite outro numero inteiro:");
scanf("%d", &n3);
printf("digite outro numero inteiro:");
scanf("%d", &n4);
printf("digite outro numero inteiro:");
scanf("%d", &n5);

if((n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5)){
	maior = n1;
	}else{	
		if((n2 > n1) && (n2 > n3) && (n2 > n4) && (n2 > n5)){
			maior = n2;
		}else{
			if((n3 > n1) && (n3 > n2) && (n3 > n4) && (n3 > n5)){	
				maior = n3;
			}else{
				if((n4 > n1) && (n4 >= n2) && (n4 > n3) && (n4 > n5)){
					maior = n4;
				}else{
					if((n5 > n1) && (n5 >= n2) && (n5 > n3) && (n5 > n4)){
						maior = n5;
					}
				}
			}
		}	
	}
	
if((n1 < n2) && (n1 < n3) && (n1 < n4) && (n1 < n5)){
	menor = n1;
	}else{	
		if((n2 < n1) && (n2 < n3) && (n2 < n4) && (n2 < n5)){
			menor = n2;
		}else{
			if((n3 < n1) && (n3 < n2) && (n3 < n4) && (n3 < n5)){	
				menor = n3;
			}else{
				if((n4 < n1) && (n4 < n2) && (n4 < n3) && (n4 < n5)){
					menor = n4;
				}else{
					if((n5 < n1) && (n5 < n2) && (n5 < n3) && (n5 < n4)){
						menor = n5;
					}
				}
			}
		}	
	}
	
	printf("\no maior numero e: %d", maior);
	printf("\no menor numero e: %d\n", menor);

system("pause");
return(0);
}