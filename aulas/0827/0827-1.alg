algoritmo "1"
// Fun��o :
// Autor :
// Data : 28/8/2015
// Se��o de Declara��es 
var
   a, b: inteiro
   
Inicio

	leia (A)
	leia (B)

	se(A >= B) entao
		A := A + 100
		escreval (A)
	senao
		se(B > A) entao
			B := B + 100
			escreval (B)
		fimse
	fimse
	
FimAlgoritmo
