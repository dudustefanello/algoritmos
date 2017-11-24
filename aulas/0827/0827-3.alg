algoritmo "3"
// Função :
// Autor :
// Data : 28/8/2015
// Seção de Declarações 
var
   qtd, unit, preco, final, descontado5, descontado10: real
   
inicio
      escreva("    Quantidade: ")
      leia(qtd)
      escreva("Valor unitário: ")
      leia(unit)
      
      preco := qtd * unit

      se(preco < 100) entao
               final := preco - preco * 0.05
               senao
               se(preco <= 1000) e (preco >= 100) entao
                              descontado5 := preco - preco * 0.05
                              final := descontado5 - descontado5 * 0.05
                              senao
                              se(preco > 1000) entao
                                             descontado10 := preco - preco * 0.1
                                             final := descontado10 - descontado10 * 0.05
                                             escreval("Cliente VIP")
                              fimse
               fimse
      fimse
      
      escreval(final)

fimalgoritmo
