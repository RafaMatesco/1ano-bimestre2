//1HID LE Rafael Giordano Matesco-Rafael Sant'Ana de Andrade Osses-Davi Baruel Lara 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char curso1[15], curso2[15];
char nomecomp1[50], nomecomp2[50];
int insc1, insc2;
int idade1;
int idade2;
int nota1;
int nota2;
char info[15];
char ele[15];
char adm[15];
int aprovacao1;
int aprovacao2;
int qntapro;
int porcentagem;
char melhornome[50];
int melhornota;

main(){
 strcpy(info, "informatica");
 strcpy(ele, "eletronica");
 strcpy(adm, "administracao");
 fflush(stdin);
 printf("Cursos disponiveis:\n-Informatica\n-Administracao\n-Eletronica\n");
 
 do{
 	printf("\ndigite o curso do aluno 1: ");
 	gets(curso1);
 	fflush(stdin);
 	if((strcmp(curso1, info)!=0) && (strcmp(curso1, adm)!=0) && (strcmp(curso1, ele)!=0)){
 		printf("Digite um curso disponivel.\n\n");
 	}
 }while((strcmp(curso1, info)!=0) && (strcmp(curso1, adm)!=0) && (strcmp(curso1, ele)!=0));
printf("\nnumero de inscricao: 1\nCurso escolhido: %s\n", curso1);
fflush(stdin);
 
 do{
 printf("\ndigite o curso do aluno 2: ");
 gets(curso2);
 fflush(stdin);
 if((strcmp(curso2, info)!=0) && (strcmp(curso2, adm)!=0) && (strcmp(curso2, ele)!=0)){
 		printf("Digite um curso disponivel.\n\n");
 	}
 }while((strcmp(curso2, info)!=0) && (strcmp(curso2, adm)!=0) && (strcmp(curso2, ele)!=0));
 printf("\nnumero de inscricao: 2\nCurso escolhido: %s\n", curso2);
 fflush(stdin);
 system("pause");
 system("cls");
 

 printf("\npreencha abaixo a ficha do aluno.\n");
 
 	do{
 	printf("numero de inscricao: ");
 	scanf("%d", &insc1);
 	fflush(stdin);
 	if((insc1 != 1) && (insc1 != 2)){
 		printf("numero de inscricao invalido, tente novamente.\n\n");
 		}
	}while((insc1 != 1) && (insc1 != 2));
	fflush(stdin);
	
 printf("digite o nome completo do aluno: ");
 fflush(stdin);
 gets(nomecomp1);
 fflush(stdin);
 
 do{

	printf("digite a idade do aluno: ");
 	scanf("%d", &idade1);
 	fflush(stdin);
	 if((idade1 < 18) || (idade1 > 49)){
 		printf("a sua idade deve ser maior que 18 anos e menor que 50, tente novamente.\n\n");
	 }
 }while((idade1 < 18) || (idade1 > 49));
 fflush(stdin);
 
 do{
 	printf("nota do aluno no concurso(de 0 a 10):");
 	scanf("%d", &nota1);
	fflush(stdin); 
 	if((nota1 < 0) || (nota1 > 10)){
 		printf("\ndigite uma nota valida.\n");
 		}
	}while((nota1 < 0) || (nota1 > 10));
 	fflush(stdin);
 
 system("pause");
 //------------------------------------------------------------
 
 printf("\npreencha abaixo a ficha do outro aluno.\n");
 
 	do{
 	printf("numero de inscricao: ");
 	scanf("%d", &insc2);
 	fflush(stdin);
 	if((insc2 == insc1) || (insc2 > 2) || (insc2 < 1)){
 		printf("numero de inscricao invalido ou ja foi usado, tente novamente.\n\n");
 		}
	}while((insc2 == insc1) || (insc2 > 2) || (insc2 < 1));
	fflush(stdin);
	
 do{
 printf("digite o nome completo do aluno: ");
 fflush(stdin);
 gets(nomecomp2);
 fflush(stdin);
 if(strcmp(nomecomp1, nomecomp2)==0){
 	printf("esse nome ja foi usado ou voce ja esta inscrito, tente novamente.\n\n");
 	}
 }while(strcmp(nomecomp1, nomecomp2)==0);
 fflush(stdin);
 
 do{

	 printf("digite a idade do aluno: ");
 	scanf("%d", &idade2);
 	fflush(stdin);
 	if((idade2 < 18) || (idade2 > 49)){
 		printf("a sua idade deve ser maior que 18 anos e menor que 50, tente novamente.\n\n");
	 }
 }while((idade2 < 18) || (idade2 > 49));
 fflush(stdin);
 
 do{
 	printf("nota do aluno no concurso(de 0 a 10):");
 	scanf("%d", &nota2);
 	fflush(stdin);
 	if((nota2 < 0) || (nota2 > 10)){
 		printf("\ndigite uma nota valida.\n");
 		}
	}while((nota2 < 0) || (nota2 > 10));
	fflush(stdin);
	
	if(nota1 >= 7){
 	aprovacao1 = 1;
 	//aprovacao == 1 quer dizer que  foi aprovado
 }else{
 	if(nota1 <= 7){
 	aprovacao1 = 2;
	 //aprovacao == 2 quer dizer que  foi reprovado	
	 }
	}
	if(nota2 >= 7){
 	aprovacao2 = 1;
 	//aprovacao == 1 quer dizer que  foi aprovado
 }else{
 	if(nota2 <= 7){
 	aprovacao2 = 2;
	 //aprovacao == 2 quer dizer que  foi reprovado	
	 }
}
 fflush(stdin);
 
 if((aprovacao1 == 1) && (aprovacao2 == 1)){
 	qntapro = aprovacao1 + aprovacao2;	
 }else{
 	if((aprovacao1 == 2) && (aprovacao2 == 2)){
 		qntapro = aprovacao1 - aprovacao2;
	 }else{
	 	if((aprovacao1 == 1) && (aprovacao2 == 2)){
	 		qntapro = aprovacao2 - aprovacao1;
		 }else{
		 	if((aprovacao1 == 2) && (aprovacao2 == 1)){
		 		qntapro = aprovacao1 - aprovacao2;
			 }
		 }
	 }
 }
 fflush(stdin);
 
 if(qntapro == 1){
 	porcentagem = 50;
 }else{
	if(qntapro == 2){
		porcentagem = 100;
	}else{
		if(qntapro < 1){
			porcentagem = 0;
		}
	}
 }
 fflush(stdin);
 
 if(nota1 > nota2){
 	strcpy(nomecomp1, melhornome);
 	melhornota = nota1;
 }else{
 	if(nota2 > nota1){
 		strcpy(nomecomp2, melhornome);
 		melhornota = nota2;
	 }
 }
 fflush(stdin);
 
 printf("\n--------------\nficha do aluno %s:\n", nomecomp2);
 printf(" -Numero de inscricao: %d\n", insc2);
 printf(" -Idade: %d\n", idade2);
 printf(" -Nota: %d\n", nota2);
fflush(stdin);
 printf("\nficha do aluno %s:\n", nomecomp1);
 printf(" -Numero de inscricao: %d\n", insc1);
 printf(" -Idade: %d\n", idade1);
 printf(" -Nota: %d\n--------------", nota1);
fflush(stdin);
 //-------------------------------------------
 printf("\nRESULTADOS VESTIBULINHO:\n");
 
 if(aprovacao1 == 1){
 	printf("-%s aprovado.\n", nomecomp1);
 }else{
 	if(aprovacao1 == 2){
 		printf("-%s reprovado\n", nomecomp1);
	 }
 }
 fflush(stdin);
 
 if(aprovacao2 == 1){
 	printf("-%s aprovado.\n", nomecomp2);
 }else{
 	if(aprovacao2 == 2){
 		printf("-%s reprovado\n", nomecomp2);
	 }
 }
 fflush(stdin);
 printf("\na quantidade de candidatos aprovados foi %d de um total de 2\n", qntapro);
 printf("candidatos aprovado = %d por cento\n", porcentagem);
 printf("o melhor candidato foi o %s e sua nota foi %d\n", melhornome, melhornota);
 system("pause");
}
