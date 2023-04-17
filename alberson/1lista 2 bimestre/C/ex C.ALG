Algoritmo "semnome"

Var

cont:inteiro
resultado:inteiro

Inicio

//FOR
escreva("a soma de todos os numeros de 1 a 100 = ")
para cont de 1 ate 100 passo 1 faca
	resultado <- cont + 1
fimpara
	resultado <- resultado * 50
	escreval(resultado)
   escreval()


//WHILE
escreva("a soma de todos os numeros de 1 a 100 = ")
cont <- 1
resultado <- 1
enquanto (cont<=100)faca
		resultado <- cont + 1
		cont <- cont + 1
   fimenquanto
	resultado <- resultado * 50
	escreval(resultado)
   escreval()


//DO-WHILE
escreva("a soma de todos os numeros de 1 a 100 = ")
cont <- 1
resultado <- 1
repita
		resultado <- cont + 1
		cont <- cont + 1
	ate(cont=101) fimrepita

   resultado <- resultado * 50
	escreval(resultado)

Fimalgoritmo