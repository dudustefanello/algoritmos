/*
Projeto:    Caixa Eletrônico
Autor:      Eduardo Stefanello
Data:       28/11/2015
Disciplina: Algoritmos e Programação
Professor:  Guilherme Dal Bianco
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define QTDcontas 20
#define QTDnotas 20

//Estrutura para armazenar informações sobre quantidades de cédulas:
//  declaradad em main();
typedef struct{
    short maxcem;
    short maxcinq;
    short maxvin;
    short maxdez;
    short maxcinc;
    short maxdois;
}cedulas;

//Estrutura para armazenar os todos dados individuais de cada cliente/conta:
//  foi declarada em main() como vetor de estrutura;
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

//Função de verificação dos dígitos verificadores de um cpf a ser cadastrado:
//  recebe CPF por parâmetro e retorna 0 ou 1, para válido ou inválido;
short cpf(long int numero){
    int soma1 = 0, soma2 = 0;
    short verificadores, digito1, digito2, i; //usado short, alocação necessária menor que 4 bytes;
    long int numero2;
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

//Função de verificação do dígito verificador de um número de conta a ser cadastrada:
//  recebe possível número de conta por parâmetro e retorna 0 ou 1, para válido ou inválido;
short digitoconta(int numero){
    int soma = 0, numero2 = numero;
    short i, digito;
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

//Função para verificar se o numero de conta a ser cadastrado já não existe:
//  recebe o indice do cadastro que está sendo feito e o numero que está sendo cadastrado;
//  retorna 1 para já existente e 0 para disponível;
short buscacontarepetida(contas cadastros[], short indice, int buscado){
    short j;
    for(j = 0; j < indice; j++){
        if(cadastros[j].numero == buscado){
            printf("Conta ja existe!\n");
            return 1;
        }
    }
    return 0;
}

//Função para verificar se o CPF a ser cadastrado já não existe:
//  recebe o indice do cadastro que está sendo feito e o numero que está sendo cadastrado;
//  retorna 1 para já existente e 0 para nao existente nos registros;
short buscacpfrepetido(contas cadastros[], short indice, int buscado){
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

//Função que verifica se senha informada é igual a cadastrada no sistema;
//  utilizado função para facilitar impressão de mensagem de erro.
int versenha(contas cadastros[], short indice, char senha[]){
    if(!strcmp(cadastros[indice].senha1, senha))
        return 0;
    else{
        printf("Senha inválida.\n");
        return 1;
    }
}

//Função que limpa a tela e imprime o cabeçalho
void limpatela(){       //configuração de interface:
    system("clear");    //função válida para linux, para windows: "system("cls");";
    printf("-----------------------------------\n");
    printf("------- Banco Stefanello SA -------\n");
    printf("-----------------------------------\n");
}

//Função para cadastro dos clientes. Todos os dados e informações iniciais são coletados nessa função.
void cadastro(contas cadastros[]){
    short flag, i; 
    char novocad = 's';
    for(i = 0; i < QTDcontas && (novocad == 's' || novocad == 'S'); i++){
        limpatela();
        printf("Cadastro de Cliente:\n");
        printf("Primeiro Nome: ");
        scanf("%s", cadastros[i].Pnome);    //Usado scanf pois entende-se que será entrado apenas com uma palavra.
        printf("Ultimo Nome: ");
        scanf("%s", cadastros[i].Snome);
        do{
            printf("CPF: ");    //Infomar apenas números (formato: xxxxxxxxxxx);
            scanf("%ld", &cadastros[i].cpf);
        }while(cpf(cadastros[i].cpf) || buscacpfrepetido(cadastros, i, cadastros[i].cpf));
        do{
            printf("Numero da conta: ");    //Informar apenas números (formato xxxxx);
            scanf("%d", &cadastros[i].numero);
        }while(digitoconta(cadastros[i].numero) || buscacontarepetida(cadastros, i, cadastros[i].numero));
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
        //Define valores de limites padrões para todos os clientes:
        cadastros[i].valorsaque = 500.0;
        cadastros[i].valortrans = 500.0;
        cadastros[i].qtdsaque = 3;
        cadastros[i].qtdtrans = 3;
        printf("Cadastrar nova conta?\n[s/n] ");
        getchar();
        scanf("%c", &novocad);
    }
}

//Função para encontrar conta solicitada nos registros:
//  recebe numero de conta a ser buscado e retorna o índice dessa conta no vetor cadastros[] da tipo/estrutura contas;
int busca(contas cadastros[], int numero){
    short i;
    for(i = 0; i < QTDcontas; i++){
        if(numero == cadastros[i].numero)
            return i;
    }
    printf("Conta Inválida\n");
    return QTDcontas + 1;
}

//Função principal da operação "01-Saldo", informa o cliente sobre o valor disponível em sua conta:
void saldo(contas cadastros[]){
    int conta;
    short indice;
    char senha[8];
    do{
        printf("Conta: ");
        scanf("%d", &conta);
    }while(busca(cadastros, conta) == QTDcontas + 1);
    indice = busca(cadastros, conta);
    do{
        printf("Senha: ");
        scanf("%s", senha);
    }while(versenha(cadastros, indice, senha));
    printf("\nCliente: %s %s\n", cadastros[indice].Pnome, cadastros[indice].Snome);
    printf("Saldo: R$ %.2lf\n", cadastros[indice].saldo);
}

//Função que inicializa as de quantidades de cédulas de cada valor:
void ced(cedulas *disponiveis){
    disponiveis->maxcem = QTDnotas;
    disponiveis->maxcinq = QTDnotas;
    disponiveis->maxvin = QTDnotas;
    disponiveis->maxdez = QTDnotas;
    disponiveis->maxcinc = QTDnotas;
    disponiveis->maxdois = QTDnotas;
}

//Função para fornecer cedulas ao cliente na operação saque e decrementar quantidade de cédulas:
int notas(cedulas *disponiveis, int valor){
    short cem, cinq, vin, dez, cinc, dois;
    cem = cinq = vin = dez = cinc = dois = 0;
    //Condicionais para valores impares que normalmente precisariam de moedas de R$ 1,00;
    //	Se retornarem 0 é por que o valor nao está disponível;
    if(valor % 10 == 8){
        if(disponiveis->maxdois >= 4){  
            dois += 4;
            disponiveis->maxdois -= 4;
            valor -= 8;
        }
        else{
            return 0;
        }
    }
    else if(valor % 10 == 6){
        if(disponiveis->maxdois >= 3){  
            dois += 3;
            disponiveis->maxdois -= 3;
            valor -= 6;
        }
        else{
            return 0;
        }
    }
    else if(valor % 10 == 3){
    	if(disponiveis->maxdois >= 4 && disponiveis->maxcinc >= 1){  
	        dois += 4;
	        disponiveis->maxdois -= 4;
	        cinc += 1;
	        disponiveis->maxcinc--;
	        valor -= 13;
    	}
    	else{
	    	return 0;
	    }
    }
    else if(valor % 10 == 1){
    	if(disponiveis->maxdois >= 4 && disponiveis->maxcinc >= 1){
	        dois += 3;
	        disponiveis->maxdois -= 3;
	        cinc += 1;
	        disponiveis->maxcinc--;
	        valor -= 13;
	    }
	    else{
	    	return 0;
	    }
    }
    //laços retiram notas de uma a uma da pilha e incrementam na variável de saída(impressao):
    while(disponiveis->maxcem && valor >= 100){
        disponiveis->maxcem--;
        cem++;
        valor -= 100;
    }
    while(disponiveis->maxcinq && valor >= 50){
        disponiveis->maxcinq--;
        cinq++;
        valor -= 50;
    }
    while(disponiveis->maxvin && valor >= 20){
        disponiveis->maxvin--;
        vin++;
        valor -= 20;
    }
    while(disponiveis->maxdez && valor >= 10){
        disponiveis->maxdez--;
        dez++;
        valor -= 10;
    }
    while(disponiveis->maxcinc && valor >= 5){
        disponiveis->maxcinc--;
        cinc++;
        valor -= 5;
    }
    while(disponiveis->maxdois && valor >= 2){
        disponiveis->maxdois--;
        dois++;
        valor -= 2;
    }
    //Condicional de prevenção de erro. se ao final da operação existir quantidade negativa de cédulas, a operação nao acontece.
    if( disponiveis->maxdois < 0 ||
    	disponiveis->maxcinc < 0 ||
    	disponiveis->maxvin < 0 ||
    	disponiveis->maxcinq < 0 ||
    	disponiveis->maxcem < 0){
    	return 0;
    }
    else{
	    if(cem != 0) printf("%i nota(s) de R$ 100,00\n", cem);
	    if(cinq != 0) printf("%i nota(s) de R$ 50,00\n", cinq);
	    if(vin != 0) printf("%i nota(s) de R$ 20,00\n", vin);
	    if(dez != 0) printf("%i nota(s) de R$ 10,00\n", dez);
	    if(cinc != 0) printf("%i nota(s) de R$ 5,00\n", cinc);
	    if(dois != 0) printf("%i nota(s) de R$ 2,00\n", dois);
	    return 1;
	}
}

//Função que informa ao programa o valor total em cédulas disponíveis no caixa, a fim de realizar ou nao o saque:
int disp(cedulas *disponiveis, int valor){
    int soma = 0;
    soma += disponiveis->maxcem * 100;
    soma += disponiveis->maxcinq * 50;
    soma += disponiveis->maxvin * 20;
    soma += disponiveis->maxdez * 10;
    soma += disponiveis->maxcinc * 5;
    soma += disponiveis->maxdois * 2;
    return valor <= soma ? 0 : 1;
}

//Função principal da operação "02-Saque":
void saque(cedulas *disponiveis, contas cadastros[]){
    int conta, sacar;
    short indice, flag;
    char senha[8];
    do{
        printf("Conta: ");
        scanf("%d", &conta);
    }while(busca(cadastros, conta) == QTDcontas + 1);
    indice = busca(cadastros, conta);
    do{
        printf("Senha: ");
        scanf("%s", senha);
    }while(versenha(cadastros, indice, senha));
    do{
        if(cadastros[indice].qtdsaque == 0){
            printf("Quantidade máxima diária atingida\n");
            flag = 0;
            continue;
        }
        flag = 1;
        printf("Valor do saque: ");
        scanf("%d", &sacar);
        if(disp(disponiveis, sacar)){   //Não há cédulas disponíveis no terminal para o valor solicitado;
            printf("Cedulas indisponíveis\n");
            flag = 0;
            continue;
        }
        if(sacar < 5 && sacar % 2 == 1){    //Impossível fornecer valores que necessitam notas de R$ 1,00;
            printf("Valor indisponível\n");
            flag = 0;
            continue;
        }
        if(sacar > cadastros[indice].valorsaque){
            printf("Valor diário máximo atingido\n");
            flag = 0;
            continue;
        }
        if(sacar > (int) cadastros[indice].saldo){
            printf("Saldo insuficiente em conta\n");
            flag = 0;
            continue;
        }
        if(notas(disponiveis, sacar)){
        	//Decrementa valores no saldo e nos limites:
        	cadastros[indice].saldo -= sacar;
        	cadastros[indice].valorsaque -= sacar;
        	cadastros[indice].qtdsaque--;
        	printf("Saque realizado com sucesso!\n");
        	flag = 0;
        }
        else{
        	printf("Cedulas indisponíveisB\n");
            flag = 0;
        }        
    }while(flag);
}

//Função que recebe o dinheiro do depositante e incrementa valor na conta do faavorecido:
void deposito(contas cadastros[]){
    int conta, indice;
    double depositar;
    char confirmar;
    do{
        printf("Favorecido conta: ");
        scanf("%d", &conta);
    }while(busca(cadastros, conta) == QTDcontas + 1);
    indice = busca(cadastros, conta);
    printf("Valor para depósito: ");
    scanf("%lf", &depositar);
    printf("\nFavorecido: %s %s\n", cadastros[indice].Pnome, cadastros[indice].Snome);
    printf("Valor: R$ %.2lf\n", depositar);
    printf("Confirma? [s/n] \n");
    getchar();
    scanf("%c", &confirmar);
    if(confirmar == 's' || confirmar == 'S'){
        cadastros[indice].saldo += depositar;
        printf("Depósito realizado com sucesso!\n");
    }
    else
        printf("Operação cancelada.\n");
}

//Função para transferir dinheiro de uma conta para outra:
void transferencia(contas cadastros[]){
    int conta, favorecido;
    short indice, indicefavorecido, flag;
    double transferir;
    char senha[8], confirmar;
    do{
        printf("Conta: ");
        scanf("%d", &conta);
    }while(busca(cadastros, conta) == QTDcontas + 1);
    indice = busca(cadastros, conta);
    do{
        printf("Senha: ");
        scanf("%s", senha);
    }while(versenha(cadastros, indice, senha));
    if(cadastros[indice].qtdtrans == 0){
        printf("Quantidade máxima diária atingida\n");
        return;
    }
    do{
        printf("Transferir para conta: ");
        scanf("%d", &favorecido);
    }while(busca(cadastros, favorecido) == QTDcontas + 1);
    indicefavorecido = busca(cadastros, favorecido);
    do{
        flag = 1;
        printf("Valor da transferencia: ");
        scanf("%lf", &transferir);
        if(transferir > cadastros[indice].valortrans){
            printf("Valor máximo diário atingido\n");
            flag = 0;
            continue;
        }
        if(transferir > cadastros[indice].saldo){
            printf("Saldo insuficiente em conta\n");
            flag = 0;
            continue;
        }
        printf("\nFavorecido: %s %s\n", cadastros[indicefavorecido].Pnome, cadastros[indicefavorecido].Snome);
        printf("Valor: %.2lf\n", transferir);
        getchar();
        printf("Confirma?\n[s/n] "); //Confirmar destino do dinheiro;
        scanf("%c", &confirmar);
        if(confirmar == 's' || confirmar == 'S'){
            cadastros[indice].saldo -= transferir;
            cadastros[indice].valortrans -= transferir;
            cadastros[indice].qtdtrans--;
            cadastros[indicefavorecido].saldo += transferir;
            printf("Transferência efetuada com sucesso!\n");
        }
        flag = 0;
    }while(flag);
}

//Função para chamada de outras operações:
//	recebe ponteiros que serão passados para as funções de operação;
void operacao(cedulas *disponiveis, contas cadastros[]){
    short escolheop;
    limpatela();
    //configuração de interface:
    printf("- Opções de Auto Atendimento:     -\n");
    printf("-  -   -   -   -   -   -   -   -  -\n");
    printf("- SALDO ................. opcao 1 -\n");
    printf("- SAQUE ................. opcao 2 -\n");
    printf("- DAPOSITO .............. opcao 3 -\n");
    printf("- TRANSFERENCIA ......... opcao 4 -\n");
    printf("-----------------------------------\n");
    printf("=> ");
    scanf("%hd", &escolheop);
    switch(escolheop){  //Escolha das operações;
        case 1: saldo(cadastros); break;
        case 2: saque(disponiveis, cadastros); break;
        case 3: deposito(cadastros); break;
        case 4: transferencia(cadastros); break;
        default: printf("Operação nao encontrada.\n"); 
    }
}

//Função principal do programa:
int main(void){
    //Estruturas para os cadastros (vetor) e as cédulas:
    //  Serão passados por referência a todas as funções que utilizem os dados dessas estruturas; 
    contas cadastros[QTDcontas];
    cedulas disponiveis;
    //Inicialização da quantidade de cédulas:
    ced(&disponiveis);
    char novaop  = 's';
    //Cadastro de clientes no início da execução. 
    cadastro(cadastros);
    printf("%d\n", disponiveis.maxcem);
    do{
        operacao(&disponiveis, cadastros);
        printf("Deseja realizar outra operação?\n[s/n] ");
        getchar();
        scanf("%c", &novaop);
        limpatela();
        printf("Terminal encerrado.\n\n");
    }while(novaop == 's' || novaop == 'S');
    return 0;
}

//Dados utilizados para testes de execução do programa:
/*
Joao
Silva
53268382223
34511
123
123
10000
s
Maria
Santos
37272873060
49820
123
123
10000
s
Jose
Souza
36173373335
12344
123
123
10000
n

CPF Inválido
73276618834

Conta inválida
58920
*/