Algoritmo "semnome"

Var

a: vetor [1..10] de inteiro
p: inteiro

Inicio

para p de 1 ate 10 passo 1 faca
     leia(a[p])
     fimpara

p <- 0
para p de 1 ate 10 passo 1 faca
     se((a[p] % 1 = 0) e (a[p+1] % a[p] <> 0))entao

        escreval(a[p])

     fimse
fimpara

Fimalgoritmo