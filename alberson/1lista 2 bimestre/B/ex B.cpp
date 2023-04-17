#include<stdio.h>
#include<stdlib.h>


int num;
int tabu;
int res;

main(){

printf("digite um numero qualquer\n");
scanf("%d", &num);


//FOR
printf("aqui esta a tabuada do seu numero:\n");
for(tabu = 1; tabu <= 10; tabu = tabu + 1){
	res = num * tabu;
	printf("%d X %d = %d\n\n", num, tabu, res);
}
system("pause");


printf("digite um numero qualquer\n");
scanf("%d", &num);

//WHILE
tabu = 1;
printf("aqui esta a tabuada do seu numero:\n");
while(tabu <= 10){
	res = num * tabu;
	printf("\n%d X %d = %d\n\n", num, tabu, res);
	tabu = tabu + 1;	
}
system("pause");


printf("digite um numero qualquer\n");
scanf("%d", &num);

//DO-WHILE
tabu = 1;
printf("aqui esta a tabuada do seu numero:\n");
do{
	res = num * tabu;
	printf("\n%d X %d = %d\n\n", num, tabu, res);
	tabu = tabu + 1;		
}while(tabu <= 10);
system("pause");
return(0);
	
}