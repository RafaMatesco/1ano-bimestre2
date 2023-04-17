Algoritmo "semnome"

Var

num:inteiro
tabu:inteiro
res:inteiro

Inicio

escreval("digite um numero qualquer")
leia(num)


//FOR
escreval("aqui esta a tabuada do seu numero:")
para tabu de 1 ate 10 passo 1 faca
	res <- num * tabu
       escreval(num," X ",tabu," = ",res)
fimpara


escreval("")
escreval("")
escreval("digite um numero qualquer")
leia(num)

//WHILE
tabu <- 1
escreval("aqui esta a tabuada do seu numero:")
enquanto (tabu <= 10)faca
	res <- num * tabu
       escreval(num," X ",tabu," = ",res)
	tabu <- tabu + 1;
fimenquanto



escreval("")
escreval("")
escreval("digite um numero qualquer")
leia(num)

//DO-WHILE
tabu <- 1
escreval("aqui esta a tabuada do seu numero:")
repita
	res <- num * tabu
       escreval(num," X ",tabu," = ",res)
	tabu <- tabu + 1
ate (tabu = 11)

Fimalgoritmo