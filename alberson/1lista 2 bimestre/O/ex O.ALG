Algoritmo "semnome"

Var

n,cont, fat:inteiro

Inicio

fat <- 1
para n de 1 ate 10 passo 2 faca
 	fat <- fat * n
   fimpara
	escreval("fatorial dos numeros impares entre 1 e 10: ",fat)

fat <- 1
n <- 1
enquanto (n<=10)faca
	fat <- fat * n
	n <- n + 2
   fimenquanto

	escreval("fatorial dos numeros impares entre 1 e 10: ",fat)
	
fat <- 1
n <- 1
repita
	fat <- fat * n
	n <- n + 2
ate(n=10)fimrepita


escreval("fatorial dos numeros impares entre 1 e 10: ",fat)
escreval()


Fimalgoritmo