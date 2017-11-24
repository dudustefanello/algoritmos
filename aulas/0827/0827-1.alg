algoritmo "1"
// Função :
// Autor :
// Data : 28/8/2015
// Seção de Declarações 
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
