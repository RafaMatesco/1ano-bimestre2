algoritmo "Bhaskara"
var
A, B, C, DELTA, x1, x2: real
inicio
escreval("Digite o valor de A: ")
leia(A)
escreval("Digite o valor de B: ")
leia(B)
escreval("Digite o valor de C: ")
leia(C)
DELTA <- (B*B)-4*A*C
se(DELTA < 0) entao
   escreval("N�o h� ra�zes reais")
senao
   se(DELTA = 0) entao
      x1 <- -b/2*a
      escreval("Uma �nica raiz real: x =", x1)
   senao
      se(DELTA > 0) entao
         x1 <- (-b + raizq(DELTA))/(2*a)
         x2 <- (-b - raizq(DELTA))/(2*a)
         escreval("Duas ra�zes reais e distintas: ")
         escreval("x1 =",x1, " x2 =",x2)
      fimse
   fimse
fimse
fimalgoritmo