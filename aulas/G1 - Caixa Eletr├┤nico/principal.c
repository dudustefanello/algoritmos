#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char 	nome[200][50];
	char 	sobrenome[200][50];
	char	CPF[200][15];
	int 	numero[200];
	double 	saldo[200];
	int 	senha[200];
	double	limiteVS[200];	//limite valor saque
	double	limiteVT[200];	//limite valor transferencia
	short	limiteDS[200];	//limite diario saques
	short	limiteDT[200];	//limite diario tranferencias
}contas;

contas conta;

short indicar(int busca){
	for(int i = 0; i < 10; i++)
		if(conta.numero[i] == busca)
			return i;
}

void decrementador(){

}

short limites(int tentativa, short i, short op){
	switch(op){
		case 2: //SAQUE
			if(conta.limiteDS[i] < 1 || conta.limiteVS[i] < tentativa){
				printf("ERRO 1000\n");
				printf("ERRO 3000\n");
				return 0;
			}
			return 1;
		case 4:	//TRANSFERENCIA
			if(conta.limiteDT[i] < 1 && conta.limiteVT[i] < tentativa){
				printf("ERRO 2000\n");
				printf("ERRO 4000\n");
				return 0;
			}
			return 1;
	}
}

void saldo(){
	int numero, senha, indice;
	scanf("%d", &numero); //solicita numero da conta
	indice = indicar(numero);
	scanf("%d", &senha);
	if(conta.senha[indice] == senha){
		printf("Saldo: R$ %.2lf\n", conta.saldo[indice]);
	}
	else
		printf("ERRO 7000\n");
}

void saque(){
	int numero, senha, indice, flag;
	double valor;
	scanf("%d", &numero); //solicita numero da conta
	indice = indicar(numero);
	scanf("%lf", &valor);
	flag = limites(valor, indice, 2);
	scanf("%d", &senha);
	if(conta.senha[indice] == senha){
		if(flag){

		}
	}
}

void deposito(){

}

void transferencia(){

}

short cpfsintaxe(char cpf[50]){
	short flag = 0;
	flag = (cpf[0] > 47 && cpf[0] < 58
		 && cpf[1] > 47 && cpf[1] < 58
		 && cpf[2] > 47 && cpf[2] < 58) ? 0 : 1;
	flag = (cpf[4] > 47 && cpf[4] < 58
		 && cpf[5] > 47 && cpf[5] < 58
		 && cpf[6] > 47 && cpf[6] < 58) ? 0 : 1;
	flag = (cpf[8] > 47 && cpf[8] < 58
		 && cpf[9] > 47 && cpf[9] < 58
		 && cpf[10] > 47 && cpf[10] < 58) ? 0 : 1;
	flag = (cpf[12] > 47 && cpf[12] < 58
		 && cpf[13] > 47 && cpf[13] < 58) ? 0 : 1;
	flag = (cpf[3] == 46 && cpf[7] == 46
		 && cpf[11] == 45) ? 0 : 1;
	if(!flag)
		return flag;
	else{
		printf("ERRO 0003\n");
		return 1;
	}
}

short digitoverificar(int conta){
	int vetor[5], i = 5, soma = 0;
	for(int i = 0; i < 5; i++){
		vetor[i] = conta % 10;
		conta /= 10;
	}
	for(int i = 4; i > 0; i--){
		vetor[i] *= i + 5;
		soma += vetor[i];
	}
	if(soma % 11 == vetor[0])
		return 0;
	else{
		printf("ERRO 0002\n");
		return 1;
	}
}

void cadastro(void){
	int n, i;
	scanf("%d", &n);							//quantidade de cadastros a serem feitos
	for(i = 0; i < n; i++){
		scanf("%s", conta.nome[i]);
		scanf("%s", conta.sobrenome[i]);
		do{
			scanf("%s", conta.CPF[i]);	
		}while(cpfsintaxe(conta.CPF[i]), i);
		do{
			scanf("%d", &conta.numero[i]);	
		}while(digitoverificar(conta.numero[i]));
		scanf("%lf", &conta.saldo[i]);
		scanf("%d", &conta.senha[i]);
		conta.limiteVS[i] = 500.00;
		conta.limiteDS[i] = 3;
		conta.limiteVT[i] = 500.00;
		conta.limiteDT[i] = 3;
	}
}

void operacao(void){
	int escolheop;
	printf("1 - Saldo\n");
	printf("2 - Saque\n");
	printf("3 - Deposito\n");
	printf("4 - Transferencia\n");
	scanf("%d", &escolheop);
	switch(escolheop){
		case 1: saldo(); break;
		case 2: saque(); break;
		case 3: deposito(); break;
		case 4: transferencia(); break;
		default: printf("ERRO 0001\n"); 
	}
}

int main(void){
	contas();
	operacao();
}