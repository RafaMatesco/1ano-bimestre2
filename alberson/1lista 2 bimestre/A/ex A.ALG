Algoritmo "semnome"

Var

cont:inteiro
quadr:inteiro

Inicio

escreval("numeros de 15 a 200 ao quadrado")

//WHILE
cont <- 15
enquanto (cont <= 200) faca
	quadr <- cont * cont
	escreval(quadr)
	cont <- cont + 1
fimenquanto

//FOR
para cont de 15 ate 200 passo 1 faca
	quadr <- cont * cont
	escreval(quadr)
fimpara


//DO-WHILE
cont <- 15
repita
	quadr <- cont * cont
	escreval(quadr)
	cont <- cont + 1
ate(cont = 201)

Fimalgoritmo