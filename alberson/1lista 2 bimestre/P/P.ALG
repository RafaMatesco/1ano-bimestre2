Algoritmo "aritmética"

Var

c,soma: inteiro
media: real
Inicio

escreval("P) Valores pares de 50 a 70, comando (para)")
    escreval
    para c de 50 ate 70 passo 1 faca
        se(c % 2=0)entao
            escreval(c," Valor Par!")
            soma<- soma+c
            media<- soma/11
        senao
        fimse
        fimpara
   escreval
    escreval("Resultado da soma= ",soma)
    escreval("Media: ",media)

    escreval("Comando (enquanto):")
    escreval
    c<-50
    enquanto (c<=70)faca
        se(c % 2=0)entao
            escreval(c," Valor Par!")
            soma<-soma+c
            media<-soma/11
      senao
      fimse
    c<-c+1
   fimenquanto

 ESCREVAL
    escreval("Resultado da soma= ",soma)
    escreval("Media: ",media)
    escreval


    escreval("Comando (repita):")
   escreval
   soma<-0
    c<-50
   repita
        se(c % 2=0)entao
            escreval(c,"  Valor Par!")
            soma<- soma+c
            media<- soma/11
      senao
      fimse
    c<- c+1
    ate c>70

   escreval
    escreval("Resultado da soma= ",soma)
    escreval("Media: ",media)

Fimalgoritmo