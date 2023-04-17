algoritmo "divisao"
var
valor1,valor2,valor3,valor4:inteiro

inicio
escreva ("Digite o primeiro valor = ")
leia (valor1)
escreva ("Digite o segundo valor = ")
leia (valor2)
escreva ("Digite o terceiro valor = ")
leia (valor3)
escreva ("Digite o quarto valor = ")
leia (valor4)
se ((valor1 mod 2)=0) e ((valor1 mod 3)=0) entao
   escreval ("Primeiro valor é divisivel por 2 e 3 =",valor1)
   escreval ("Dividido por 2 =",valor1/2)
   escreval ("Dividido por 3 =",valor1/3)
fimse
se ((valor2 mod 2)=0) e ((valor2 mod 3)=0) entao
   escreval ("Segundo valor é divisivel por 2 e 3 =",valor2)
   escreval ("Dividido por 2 =",valor2/2)
   escreval ("Dividido por 3 =",valor2/3)
fimse
se ((valor3 mod 2)=0) e ((valor3 mod 3)=0) entao
   escreval ("Terceiro valor é divisivel por 2 e 3 =",valor3)
   escreval ("Dividido por 2 =",valor3/2)
   escreval ("Dividido por 3 =",valor3/3)
fimse
se ((valor4 mod 2)=0) e ((valor4 mod 3)=0) entao
   escreval ("Quarto valor é divisivel por 2 e 3 =",valor4)
   escreval ("Dividido por 2 =",valor4/2)
   escreval ("Dividido por 3 =",valor4/3)
fimse
fimalgoritmo