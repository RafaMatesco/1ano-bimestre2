#include<stdio.h>

int c,soma,media;

main(){

    //Ja foram todos os comandos!!!
    printf("P) Valores pares de 50 a 70.\n \n");
    for(c=50;c<=70;c=c+1){
        if(c % 2==0){
            printf("%d Valor Par!\n",c);
            soma=soma+c;
            media=soma/11;
        }else{
        }


    }
    printf("\n");
    printf("Resultado da soma= %d\n",soma);
    printf("Media: %d\n",media);

    printf("Comando (While):\n");
    c=50;
    while(c<=70){
        if(c % 2==0){
            printf("%d Valor Par!\n",c);
            soma=soma+c;
            media=soma/11;
        }else{
        }
    c=c+1;
    }
    printf("\n");
    printf("Resultado da soma= %d\n",soma);
    printf("Media: %d\n",media);
    printf("\n");


    printf("Comando (Do...While):\n");

    c=50;
    do{
        if(c % 2==0){
            printf("%d Valor Par!\n",c);
            soma=soma+c;
            media=soma/11;
        }else{
        }
    c=c+1;
    }while(c<=70);

    printf("\n");
    printf("Resultado da soma= %d\n",soma);
    printf("Media: %d\n",media);
    printf("\n");
}
