Algoritmo "semnome"

Var

n, cont, soma, val:inteiro
media:real
Inicio

soma <- 0
media <- 0
val <- 0
enquanto (n>=0)faca
		escreval("digite um numero:")
		leia(n)
		soma <- soma + n
		val <- val + 1
		se (n<0)entao
			val <- val - 1
      fimse
   fimenquanto
	media <- soma / val
	escreval("a soma de todos os numeros positivos e: ",soma)
	escreval("a media de todos os numeros positivos e: ",media)
	escreval("o total de todos valores positivos lidos e: ",val)

n <- 1 soma <- 1 media <- 0 val <- 0
   repita
      escreval()
      escreval("digite um numero:")
		leia(n)
		soma <- soma + n
		val <- val + 1
		se (n<0)entao
			val <- val - 1
      fimse
	ate (n < 0)
	media <- soma / val
	escreval("a soma de todos os numeros positivos e: ",soma)
	escreval("a media de todos os numeros positivos e: ",media)
	escreval("o total de todos valores positivos lidos e: ",val)

Fimalgoritmo