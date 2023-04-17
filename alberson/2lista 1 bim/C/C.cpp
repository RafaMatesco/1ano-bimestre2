#include <stdio.h>

int not1, not2, not3, not4, med;


   main() {
   	
   	
   	printf("digite a primeira nota:");
   	scanf("%d", &not1);
   	printf("digite a segunda nota:");
   	scanf("%d", &not2);
   	printf("digite a terceira nota:");
   	scanf("%d", &not3);
   	printf("digite a quarta nota:");
   	scanf("%d", not4);
   	
   	med = (not1+not2+not3+not4)/4;
   	
   	
   	 if (med<5) {
   	 	
   	 	printf("reprovado \n");
   	 	printf("media: %d", med );
   	 	
		}else{
			
		 printf("aprovado \n");	
		 printf("media: %d", med );	
			
		}
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   }