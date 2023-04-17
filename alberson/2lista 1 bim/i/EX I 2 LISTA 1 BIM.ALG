Algoritmo "ex i 2 lista 1 bim"

Var
 n1, n2, n3, n4, n5:inteiro
maior:inteiro
menor:inteiro


Inicio

escreval("digite um numero inteiro:")
leia(n1)
escreval("digite outro numero inteiro:")
leia(n2)
escreval("digite outro numero inteiro:")
leia(n3)
escreval("digite outro numero inteiro:")
leia(n4)
escreval("digite outro numero inteiro:")
leia(n5)


se((n1 > n2) e (n1 > n3) e (n1 > n4) e (n1 > n5))entao
	maior <- n1
   senao
		se((n2 > n1) e (n2 > n3) e (n2 > n4) e (n2 > n5))entao
			maior <- n2
      senao
			se((n3 > n1) e (n3 > n2) e (n3 > n4) e (n3 > n5))entao
				maior <- n3
         senao
				se((n4 > n1) e (n4 >= n2) e (n4 > n3) e (n4 > n5))entao
					maior <- n4
           senao
					se((n5 > n1) e (n5 >= n2) e (n5 > n3) e (n5 > n4))entao
						maior <- n5
               fimse
            fimse
         fimse
      fimse
   fimse

se((n1 < n2) e (n1 < n3) e (n1 < n4) e (n1 < n5))entao
	menor  <- n1
   senao
		se((n2 < n1) e (n2 < n3) e (n2 < n4) e (n2 < n5))entao
			menor  <- n2
      senao
			se((n3 < n1) e (n3 < n2) e (n3 < n4) e (n3 < n5))entao
				menor  <- n3
         senao
				se((n4 < n1) e (n4 < n2) e (n4 < n3) e (n4 < n5))entao
					menor  <- n4
           senao
					se((n5 < n1) e (n5 < n2) e (n5 < n3) e (n5 < n4))entao
						menor <- n5
               fimse
            fimse
         fimse
      fimse
   fimse

escreval("o maior numero e:",maior)
escreval("o menor numero e:",menor)
Fimalgoritmo