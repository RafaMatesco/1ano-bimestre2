Algoritmo "potencias"

var

c: inteiro
resultado: real


Inicio

   escreval("G)Potencia de 3 ate o 15, com o comando (PARA).")

        para c de 0 ate 15 passo 1 faca
        resultado<- 3^c
      escreval("3 elevado a ",c," =  ",resultado)
     fimpara

    escreval("Comando (enquanto):")
        c<-0
        enquanto (c<=15)faca
        resultado<- 3^c
      escreval("3 elevado a ",c," =  ",resultado)
      c<-c+1
   fimenquanto

    escreval("Comando (repita):")
    c<-1
   repita
    resultado<- 3^c
  escreval("3 elevado a ",c," =  ",resultado)
    c<-c+1
    ate(c>15)
    
Fimalgoritmo