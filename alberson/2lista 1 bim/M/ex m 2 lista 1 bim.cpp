#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char sexo[1];
char nome[60];



main(){
				
				printf("digite seu nome(pressione enter) e digite o seu sexo(use f para feminino e m para masculino):\n");
				scanf("%s %s",&nome, &sexo);
			
				
				if(strcmp(sexo,"f")==0){
					printf("Ilma Srta.%s\n\n", nome);
					system("pause");
					return (0);
				}else{
						if(strcmp(sexo,"m")==0){
							printf("Ilmo sr.%s!\n\n", nome);
							system("pause");
							return (0);
					}
				}
	
system("pause");
return(0);
}
