Algoritmo "semnome"

Var

i:inteiro
n1:inteiro

Inicio

//FOR
para i de 2 ate 500 passo 2 faca
        se(i%2=0)entao
		n1 <- n1+i
      fimse
   fimpara
	escreval("a soma de todos os pares de 1 a 500 e =",n1)

//WHILE
i <- 2
n1 <- 0
enquanto (i<=500)faca
	      se(i%2=0)entao
       n1 <- n1+i
       fimse
	i <- i+2
   fimenquanto
	escreval("a soma de todos os pares de 1 a 500 e =",n1)

//DO-WHILE
i <- 2
n1 <- 0
repita
		 se(i%2=0)entao
    	 n1 <- n1+i
       fimse
		i <- i+2
	ate(i=501) fimrepita
	escreval("a soma de todos os pares de 1 a 500 e =",n1)

Fimalgoritmo