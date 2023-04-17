Algoritmo "semnome"

//1HID LE Rafael Giordano Matesco-Rafael Sant'Ana de Andrade Osses-Davi Baruel Lara

Var

curso1:caractere
curso2:caractere
nomecomp1:caractere
nomecomp2:caractere
insc1:inteiro
insc2:inteiro
idade1:inteiro
idade2:inteiro
nota1:inteiro
nota2:inteiro
info:caractere
ele:caractere
adm:caractere
aprovacao1:inteiro
aprovacao2:inteiro
qntapro:inteiro
porcentagem:inteiro
melhornome:caractere
melhornota:inteiro

Inicio
info <- "informatica"
adm <- "administracao"
ele <- "eletronica"
escreval("Cursos disponiveis:")
escreval("-Informatica")
escreval("-Administracao")
escreval("-Eletronica")
escreval("")


escreval("digite o curso do aluno 1: ")
leia(curso1)
escreval("")
escreval("numero de inscricao: 1")
escreval("Curso escolhido: ", curso1)

escreval("digite o curso do aluno 2: ")
leia(curso2)
escreval("")
escreval("numero de inscricao: 2")
escreval("Curso escolhido: ", curso2)


limpatela

 escreval("preencha abaixo a ficha do aluno.")
 escreval("")

 	repita
 	escreva("numero de inscricao: ")
 	leia(insc1)
 	se((insc1 <> 1) e (insc1 <> 2))entao
 		escreval("numero de inscricao invalido, tente novamente.")
 		escreval("")
      fimse
      ate((insc1 = 1) ou (insc1 = 2))
 escreval("")
 escreva("digite o nome completo do aluno: ")
 leia(nomecomp1)
 escreval("")

 repita
	escreva("digite a idade do aluno: ")
 	leia(idade1)
 	escreval("")
	 se((idade1 < 18) ou (idade1 > 49))entao
 		escreval("a sua idade deve ser maior que 18 anos e menor que 50, tente novamente.")
      escreval
       fimse
 ate((idade1 >= 18) e (idade1 <= 49))

 repita
 	escreva("nota do aluno no concurso(de 0 a 10):")
 	leia(nota1)
 	se((nota1 < 0) ou (nota1 > 10))entao
       escreval("")
       escreval("digite uma nota valida.")
      fimse
      ate((nota1 >= 0) e (nota1 <= 10))

 //------------------------------------------------------------
 limpatela
 
 escreval("")
 escreval("preencha abaixo a ficha do outro aluno.")

   repita
 	escreva("numero de inscricao: ")
 	leia(insc2)
  escreval("")
    se((insc2 = insc1) ou (insc2 > 2) ou (insc2 < 1))entao
 		escreval("numero de inscricao invalido ou ja foi usado, tente novamente.")
 		escreval("")
      fimse
   ate((insc2 <> insc1) e (insc2 <= 2))

 repita
 escreva("digite o nome completo do aluno: ")
 leia(nomecomp2)
 escreval("")
 se(nomecomp1 = nomecomp2)entao
 	escreval("esse nome ja foi usado ou voce ja esta inscrito, tente novamente.")
   escreval("")
   fimse
  ate(nomecomp1 <> nomecomp2)

 repita
	 escreva("digite a idade do aluno: ")
 	leia(idade2)
 	se((idade2 < 18) ou (idade2 > 49))entao
 		escreva("a sua idade deve ser maior que 18 anos e menor que 50, tente novamente.")
      escreval("")
    fimse
 ate((idade2 >= 18) e (idade2 <= 49))

 repita
 	escreva("nota do aluno no concurso(de 0 a 10):")
 	leia(nota2)
 	se((nota2 < 0) ou (nota2 > 10))entao
       escreval("")
       escreval("digite uma nota valida.")
      fimse
      ate((nota2 >= 0) e (nota2 <= 10))

	se(nota1 >= 7)entao
 	aprovacao1 <- 1
 senao
 	se(nota1 <= 7)entao
 	aprovacao1 <- 2
    fimse
 fimse

 se(nota2 >= 7)entao
 	aprovacao2 <- 1
 senao
 	se(nota2 <= 7)entao
 	aprovacao2 <- 2
    fimse
 fimse


 se((aprovacao1 = 1) e (aprovacao2 = 1))entao
 	qntapro <- aprovacao1 + aprovacao2
 senao
 	se((aprovacao1 = 2) e (aprovacao2 = 2))entao
 		qntapro <- aprovacao1 - aprovacao2
    senao
	 	se((aprovacao1 = 1) e (aprovacao2 = 2))entao
	 		qntapro <- aprovacao2 - aprovacao1
		 senao
		 	se((aprovacao1 = 2) e (aprovacao2 = 1))entao
		 		qntapro <- aprovacao1 - aprovacao2
          fimse
       fimse
    fimse
 fimse

 se(qntapro = 1)entao
 	porcentagem <- 50
senao
	se(qntapro = 2)entao
		porcentagem <- 100
   senao
		se(qntapro < 1)entao
			porcentagem <- 0
      fimse
   fimse
 fimse

 se(nota1 > nota2)entao
 	melhornome <- nomecomp1
 	melhornota <- nota1
 senao
 	se(nota2 > nota1)entao
     nomecomp2 <- melhornome
	  melhornota <- nota2
    fimse
 fimse

 escreval("")
 escreval("--------------")
 escreval("ficha do aluno :", nomecomp2)
 escreval(" -Numero de inscricao: ", insc2)
 escreval(" -Idade: ", idade2)
 escreval(" -Nota: ", nota2)
 
 escreval("")
 escreval("--------------")
 escreval("ficha do aluno :", nomecomp1)
 escreval(" -Numero de inscricao: ", insc1)
 escreval(" -Idade: ", idade1)
 escreval(" -Nota: ", nota1)
 escreval("--------------")
 //-------------------------------------------

 escreval("")
 escreval("RESULTADOS VESTIBULINHO:")

 se(aprovacao1 = 1)entao
 	escreval("-", nomecomp1, " aprovado.")
 senao
 	se(aprovacao1 = 2)entao
 		escreval("-" nomecomp1 " reprovado")
    fimse
 fimse

 se(aprovacao2 = 1)entao
 	escreval("-" nomecomp2 " aprovado.")
 senao
 	se(aprovacao2 = 2)entao
 		escreval("-", nomecomp2, " reprovado")
    fimse
 fimse
 escreval("")
 escreval("a quantidade de candidatos aprovados foi", qntapro ," de um total de 2")
 escreval("candidatos aprovado = ", porcentagem, " por cento")
 escreval("o melhor candidato foi o ", melhornome, " e sua nota foi ", melhornota)

Fimalgoritmo