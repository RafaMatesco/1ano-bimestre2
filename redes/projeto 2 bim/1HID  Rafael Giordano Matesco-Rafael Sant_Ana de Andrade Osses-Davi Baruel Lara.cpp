#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include<time.h>


int pack;
int cont;
char astolfo [30];
int tempo;
int lossrand;
int loss;
int receive;
int ping;
int max, min, s;
float media, perda;
main(){
	srand(time(NULL));
	printf("quantos pacotes? ");
	scanf("%d",&pack);
	fflush(stdin);
	Sleep(800);
	printf("\nDisparando www.google.com.br [172.217.30.163] com 32 bytes de dados:\n");
	 max = -1;
	 min = 101;

	 for(cont=1; cont<=pack; cont=cont+1){	 
	 	 ping = rand() % 100;
		 Sleep(800);
		 printf("Resposta de 172.217.30.163 bytes=32 tempo=%dms TTL=115\n", ping);
	 s = s + ping;
	 if (ping > max){
	  max = ping;
}
    if (ping < min) {
	min = ping;
}
	 }
	 
	 cont=1;
	 do{
	 	lossrand = rand () %10;
	 	if(lossrand > 5){
	 		loss++;
	 	}else{
	 		if(lossrand <= 5){
	 			receive++;
			 }
		 }
	 cont++;
	}while(cont<=pack);
	 
	 perda = loss*100/pack;
	 media = s/cont;
	 
	 printf("\nEstatisticas do Ping para 172.217.30.163:\nPacotes: Enviados = %d, Recebidos = %d, Perdidos = %d ( %.0f por cento de perda)", pack, receive, loss, perda);
	 printf("\n\nAproximar um numero redondo de vezes em milissegundos:\n");
	 printf("   Minimo = %dms, Maximo = %dms, Media = %.0fms", min, max, media);
	 
}