#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define QTDcontas 20
#define QTDnotas 20

typedef struct{
	int maxcem;
	int maxcinq;
	int maxvin;
	int maxdez;
	int maxcinc;
	int maxdois;
}cedulas;

typedef struct{
	//dados:
	char Pnome[50];
	char Snome[50];
	long int cpf;
	int numero;
	char senha1[8];
	char senha2[8]; 
	double saldo;
	//limites:
	int valorsaque;
	double valortrans;
	short qtdsaque;
	short qtdtrans;
}contas;

//estrutura global para cadastros:
contas cadastros[QTDcontas];

//estrutura global para cedulas disponíveis:
cedulas disponiveis;

int cpf(long int *numerocpf){
	int soma1 = 0, soma2 = 0, verificadores, digito1, digito2, i;
	long int numero2, numero = *numerocpf;
	verificadores = numero % 100;
	numero -= numero % 100;
	numero /= 100;
	numero2 = numero * 10;
	for(i = 2; i <= 10; i++){
		soma1 += (numero % 10) * i;
		numero /= 10;
	}
	digito1 = soma1 % 11 < 2 ? 0 : 11 - (soma1 % 11);
	numero2 += digito1;
	for(i = 2; i <= 11; i++){
		soma2 += (numero2 % 10) * i;
		numero2 /= 10;
	}
	digito2 = soma2 % 11 < 2 ? 0 : 11 - (soma2 % 11);
	if(digito1 * 10 + digito2 == verificadores)
		return 0;
	else{
		printf("CPF Inválido\n");
		return 1;
	}
}

int digitoconta(int *numeroconta){
	int numero = *numeroconta, soma = 0, i;
	int numero2 = numero, digito;
	numero2 /= 10;
	for(i = 6; i <= 9; i++){
		soma += (numero2 % 10) * i;
		numero2 /= 10;
	}
	digito = soma % 11 <= 10 ? soma % 11 : 0;
	if(digito == numero % 10)
		return 0;
	else{
		printf("Dígito verificador inválido\n");
		return 1;
	}
}

int buscacontarepetida(int indice, int buscado){
	int j;
	for(j = 0; j < QTDcontas; j++){
		if(j != indice){
			if(cadastros[j].numero == buscado){
				printf("Conta ja existe!\n");
				return 1;
			}
		}
	}
	return 0;
}

int buscacpfrepetido(int indice, int buscado){
	int j;
	for(j = 0; j < QTDcontas; j++){
		if(j != indice){
			if(cadastros[j].numero == buscado){
				printf("CPF ja cadastrado!\n");
				return 1;
			}
		}
	}
	return 0;
}

int versenha(int indice, char senha[]){
	if(!strcmp(cadastros[indice].senha1, senha))
		return 0;
	else{
		printf("Senha inválida.\n");
		return 1;
	}
}

void limpatela(){
	system("clear");
	printf("-----------------------------------\n");
	printf("------- Banco Stefanello SA -------\n");
	printf("-----------------------------------\n");
}

void cadastro(){
	short flag, i;
	char novocad = 's';
	for(i = 0; i < QTDcontas && (novocad == 's' || novocad == 'S'); i++){
		limpatela();
		printf("Cadastro de Cliente:\n");
		printf("Primeiro Nome: ");
		scanf("%s", cadastros[i].Pnome);
		printf("Ultimo Nome: ");
		scanf("%s", cadastros[i].Snome);
		do{
			printf("CPF: ");
			scanf("%ld", &cadastros[i].cpf);
		}while(cpf(&cadastros[i].cpf) || buscacpfrepetido(i, cadastros[i].cpf));
		do{
			printf("Numero da conta: ");
			scanf("%d", &cadastros[i].numero);
		}while(digitoconta(&cadastros[i].numero) || buscacontarepetida(i, cadastros[i].numero));
		do{
			printf("Digite uma senha: ");
			scanf("%s", cadastros[i].senha1);
			printf("Confirme a senha: ");
			scanf("%s", cadastros[i].senha2);
			flag = strcmp(cadastros[i].senha1, cadastros[i].senha2);
			printf("%s", flag ? "senhas nao correspondem\n": "");
		}while(flag);
		printf("Saldo Inicial da Conta: ");
		scanf("%lf", &cadastros[i].saldo);
		cadastros[i].valorsaque = 500.0;
		cadastros[i].valortrans = 500.0;
		cadastros[i].qtdsaque = 3;
		cadastros[i].qtdtrans = 3;
		printf("Cadastrar nova conta?\n[s/n] ");
		getchar();
		scanf("%c", &novocad);
	}
}

int busca(int numero){
	int i;
	for(i = 0; i < QTDcontas; i++){
		if(numero == cadastros[i].numero)
			return i;
	}
	printf("Conta Inválida\n");
	return QTDcontas + 1;
}

void saldo(){
	int conta, indice;
	char senha[8];
	do{
		printf("Conta: ");
		scanf("%d", &conta);
	}while(busca(conta) == QTDcontas + 1);
	indice = busca(conta);
	do{
		printf("Senha: ");
		scanf("%s", senha);
	}while(versenha(indice, senha));
	printf("\n-----------------------------------\n");
	printf("Cliente: %s %s\n", cadastros[indice].Pnome, cadastros[indice].Snome);
	printf("Saldo: R$ %.2lf\n", cadastros[indice].saldo);
	printf("-----------------------------------\n\n");
}

void ced(){
	disponiveis.maxcem = QTDnotas;
	disponiveis.maxcinq = QTDnotas;
	disponiveis.maxvin = QTDnotas;
	disponiveis.maxdez = QTDnotas;
	disponiveis.maxcinc = QTDnotas;
	disponiveis.maxdois = QTDnotas;
}

void notas(int valor){
	int cem, cinq, vin, dez, cinc, dois;
	cem = cinq = vin = dez = cinc = dois = 0;
	if(valor % 10 == 3){
		dois += 4;
		disponiveis.maxdois -= 4;
		cinc += 1;
		disponiveis.maxcinc--;
		valor -= 13;
	}
	else if(valor % 10 == 1){
		dois += 3;
		disponiveis.maxdois -= 3;
		cinc += 1;
		disponiveis.maxcinc--;
		valor -= 13;
	}
    while(disponiveis.maxcem-- && valor >= 100){
    	cem++;
    	valor -= 100;
    }
    while(disponiveis.maxcinq-- && valor >= 50){
    	cinq++;
    	valor -= 50;
    }
    while(disponiveis.maxvin-- && valor >= 20){
    	vin++;
    	valor -= 20;
    }
    while(disponiveis.maxdez-- && valor >= 10){
    	dez++;
    	valor -= 10;
    }
    while(disponiveis.maxcinc-- && valor >= 5){
    	cinc++;
    	valor -= 5;
    }
    while(disponiveis.maxdois-- && valor >= 2){
    	dois++;
    	valor -= 2;
    }
    if(cem != 0) printf("%i nota(s) de R$ 100,00\n", cem);
    if(cinq != 0) printf("%i nota(s) de R$ 50,00\n", cinq);
    if(vin != 0) printf("%i nota(s) de R$ 20,00\n", vin);
    if(dez != 0) printf("%i nota(s) de R$ 10,00\n", dez);
    if(cinc != 0) printf("%i nota(s) de R$ 5,00\n", cinc);
    if(dois != 0) printf("%i nota(s) de R$ 2,00\n", dois);
}

int disp(int valor){
	int soma = 0;
	soma += disponiveis.maxcem * 100;
	soma += disponiveis.maxcinq * 50;
	soma += disponiveis.maxvin * 20;
	soma += disponiveis.maxdez * 10;
	soma += disponiveis.maxcinc * 5;
	soma += disponiveis.maxdois * 2;
	return valor <= soma ? 0 : 1;
}

void saque(){
	int conta, indice, sacar, flag;
	char senha[8];
	do{
		printf("Conta: ");
		scanf("%d", &conta);
	}while(busca(conta) == QTDcontas + 1);
	indice = busca(conta);
	do{
		printf("Senha: ");
		scanf("%s", senha);
	}while(versenha(indice, senha));
	do{
		if(cadastros[indice].qtdsaque == 0){
			system("gdialog --title \"Erro!\" --infobox \"Quantidade máxima diária atingida.\" 0 0");
			//printf("Quantidade máxima diária atingida\n");
			flag = 0;
			continue;
		}
		flag = 1;
		printf("Valor do saque: ");
		scanf("%d", &sacar);
		if(disp(sacar)){
			system("gdialog --title \"Erro!\" --infobox \"cedulas indisponíveis.\" 0 0");
			//printf("Cedulas indisponíveis\n");
			flag = 0;
			continue;
		}
		if(sacar < 5 && sacar % 2 == 1){
			system("gdialog --title \"Erro!\" --infobox \"Valor indisponível.\" 0 0");
			//printf("Valor indisponível\n");
			flag = 0;
			continue;
		}
		if(sacar > cadastros[indice].valorsaque){
			system("gdialog --title \"Erro!\" --infobox \"valor diário máximo atingido.\" 0 0");
			//printf("Valor diário máximo atingido\n");
			flag = 0;
			continue;
		}
		if(sacar > (int) cadastros[indice].saldo){
			system("gdialog --title \"Erro!\" --infobox \"Saldo insuficiente em conta.\" 0 0");
			//printf("Saldo insuficiente em conta\n");
			flag = 0;
			continue;
		}
		cadastros[indice].saldo -= sacar;
		cadastros[indice].valorsaque -= sacar;
		cadastros[indice].qtdsaque--;
		notas(sacar);
		printf("Saque realizado com sucesso!\n");
		flag = 0;
	}while(flag);
}

void deposito(){
	int conta, indice;
	double depositar;
	char confirmar;
	do{
		printf("Favorecido conta: ");
		scanf("%d", &conta);
	}while(busca(conta) == QTDcontas + 1);
	indice = busca(conta);
	printf("Valor para depósito: ");
	scanf("%lf", &depositar);
	printf("\nFavorecido: %s %s\n", cadastros[indice].Pnome, cadastros[indice].Snome);
	printf("Valor: R$ %.2lf\n", depositar);
	printf("Confirma? [s/n] \n");
	getchar();
	scanf("%c", &confirmar);
	if(confirmar == 's' || confirmar == 'S'){
		cadastros[indice].saldo += depositar;
		printf("\n-----------------------------------\n");
		printf("  Comprovante de depósito:\n");
		printf("\n  Favorecido:\n  %s %s\n\n", cadastros[indice].Pnome, cadastros[indice].Snome);
		printf("  Valor:\n  R$ %.2lf\n", depositar);
		printf("-----------------------------------\n\n");

	}
	else
		printf("Operação cancelada.\n");
}

void transferencia(){
	int conta, favorecido, indice, indicefavorecido, flag;
	double transferir;
	char senha[8], confirmar;
	do{
		printf("Conta: ");
		scanf("%d", &conta);
	}while(busca(conta) == QTDcontas + 1);
	indice = busca(conta);
	do{
		printf("Senha: ");
		scanf("%s", senha);
	}while(versenha(indice, senha));
	if(cadastros[indice].qtdtrans == 0){
		system("gdialog --title \"Erro!\" --infobox \"Quantidade máxima diária atingida.\" 0 0");
			//printf("Quantidade máxima diária atingida\n");
		return;
	}
	do{
		printf("Transferir para conta: ");
		scanf("%d", &favorecido);
	}while(busca(favorecido) == QTDcontas + 1);
	indicefavorecido = busca(favorecido);
	do{
		flag = 1;
		printf("Valor da transferencia: ");
		scanf("%lf", &transferir);
		if(transferir > cadastros[indice].valortrans){
			system("gdialog --title \"Erro!\" --infobox \"Valor máximo diário atingido.\" 0 0");
			//printf("Valor máximo diário atingido\n");
			flag = 0;
			continue;
		}
		if(transferir > cadastros[indice].saldo){
			system("gdialog --title \"Erro!\" --infobox \"Saldo insuficente em conta.\" 0 0");
			//printf("Saldo insuficiente em conta\n");
			flag = 0;
			continue;
		}
		printf("\nFavorecido: %s %s\n", cadastros[indicefavorecido].Pnome, cadastros[indicefavorecido].Snome);
		printf("Valor: %.2lf\n", transferir);
		getchar();
		printf("Confirma?\n[s/n] ");
		scanf("%c", &confirmar);
		if(confirmar == 's' || confirmar == 'S'){
			cadastros[indice].saldo -= transferir;
			cadastros[indice].valortrans -= transferir;
			cadastros[indice].qtdtrans--;
			cadastros[indicefavorecido].saldo += transferir;
			printf("\n-----------------------------------\n");
			printf("  Comprovante de transferencia:\n");
			printf("\n  De:\n  %s %s\n\n", cadastros[indice].Pnome, cadastros[indice].Snome);
			printf("\n  Favorecido:\n  %s %s\n\n", cadastros[indicefavorecido].Pnome, cadastros[indicefavorecido].Snome);
			printf("  Valor:\n  R$ %.2lf\n", transferir);
			printf("-----------------------------------\n\n");
		}
		flag = 0;
	}while(flag);
}

void operacao(){
	limpatela();
	printf("Opções de Auto Atendimento:\n");
	int escolheop;
	printf("1 - SALDO\n");
	printf("2 - SAQUE\n");
	printf("3 - DAPOSITO\n");
	printf("4 - TRANSFERENCIA\n");
	printf("=> ");
	scanf("%d", &escolheop);
	switch(escolheop){
		case 1: saldo(); break;
		case 2: saque(); break;
		case 3: deposito(); break;
		case 4: transferencia(); break;
		default: printf("Operação nao encontrada.\n"); 
	}
}

int main(){
	ced();
	char novaop  = 's';
		cadastro();
	do{
		operacao();
		printf("Deseja realizar outra operação?\n[s/n] ");
		getchar();
		scanf("%c", &novaop);
		limpatela();
		printf("Terminal encerrado.\n\n");
	}while(novaop == 's' || novaop == 'S');
	return 0;
}