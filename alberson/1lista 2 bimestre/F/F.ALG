Algoritmo "semnome"

Var

c: inteiro

Inicio

   escreval("F)Numeros divisiveis por 4 ate 200, com o comando (para).")

        para c de 1 ate 200 passo 1 faca

         se(c % 4=0)entao
         escreval(c," numero DIVISIVEL por 4")
       senao
       fimse
      fimpara

    escreval("Comando (ENQAUNTO):")
        c<-1
        enquanto (c<=200)faca

         se(c % 4=0)entao
         escreval(c," numero DIVISIVEL por 4")
    senao
    fimse
    c<-c+1
fimenquanto

        escreval("Comando (Repita):")
        c<-1
      repita
            se(c % 4=0)entao
         escreval(c," numero DIVISIVEL por 4")
    senao
      fimse
         c<-c+1
        ate(c>200)

Fimalgoritmo