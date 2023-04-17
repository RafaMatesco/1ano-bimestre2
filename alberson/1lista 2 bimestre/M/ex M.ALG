Algoritmo "semnome"

Var

n, cont, soma:inteiro
media:real
Inicio

escreval("escreva um numero inteiro:")
   para cont de 1 ate 10 passo 1 faca
      leia(n)
      soma <- soma + n
	fimpara
   media <- soma / 10
   escreval("a soma de todos os numeros e:",soma)
	escreval("a media de todos os numeros e:",media)

escreval("")
escreval("escreva um numero inteiro:")
soma<-0
media<-0
cont<-1
n <- 0
repita
      leia(n)
		soma <-soma + n
		cont <- cont + 1
ate (cont=10)
      escreval("a soma de todos os numeros e:", soma)
	   media <- soma / 10
	   escreval("a media de todos os numeros e:",media)


   escreval("")
   escreval("escreva um numero inteiro:")
	soma <- 0
   media <- 0
   cont <- 1
enquanto (cont<=10) faca
   leia(n)
	soma <- soma + n
	cont <- cont + 1
 fimenquanto
	escreval("a soma de todos os numeros e:",soma)
	media <- soma / 10
	escreval("a media de todos os numeros e:",media)

Fimalgoritmo