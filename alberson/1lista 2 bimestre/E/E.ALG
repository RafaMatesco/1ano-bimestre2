Algoritmo "semnome"

Var
c: inteiro


Inicio
    ESCREVAL("E)0 a 20, numeros impares, comando (para).")

      para c de 1 ate 20 passo 1 faca

     se(c % 2=1)entao
            escreval(c," numero impar")
      senao
      fimse
fimpara

    escreval("Comando (enquanto):")
    c<-1

  enquanto (c<=20)faca
        se(c % 2=1)entao
            escreval(c," numero impar")
       senao
        fimse
        c<-c+1
        fimenquanto

    escreval("Comando (Repita):")
    c<-1
    repita
        se(c % 2=1)entao
            escreval(c," numero impar")
      senao
      fimse
        c<-c+1
    ate (c>20)

Fimalgoritmo