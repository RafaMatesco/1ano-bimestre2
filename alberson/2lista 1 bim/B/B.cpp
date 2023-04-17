#include <stdio.h>

  int num, ngt;
  
  main(){
  	
  	
  	printf("escolha um numero positivo ou negativo:");
  	scanf("%d", &num);
  	
  	
  	if (num>=1) {
  		
  		printf("numero: %d", num);
  		
      }else{
    	
    	ngt = num*-1;
    
    	
    	printf("numero transformado em posirivo: %d", ngt);
	}
  		
  		
	  }