#include <stdio.h>

typedef struct{
    int a;
}teste;

int func2(teste *est){
    est->a = 40 * 11;
}

int func1(teste *est){
    func2(est);

}

int main(){
    teste est;
    est.a = 10;
    func1(&est);
    printf("%d\n", est.a);
}

int notas(cedulas *disponiveis, int valor){
    short cem, cinq, vin, dez, cinc, dois;
    cem = cinq = vin = dez = cinc = dois = 0;
    //Condicionais para valores impares que normalmente precisariam de moedas de R$ 1,00;
    //  Se retornarem 0 é por que o valor nao está disponível;
    if(valor % 10 == 3 && disponiveis->maxdois >= 4 && disponiveis->maxcinc >= 1){    
        dois += 4;
        disponiveis->maxdois -= 4;
        cinc += 1;
        disponiveis->maxcinc--;
        valor -= 13;
    }
    else{
        printf("1\n");
        return 0;
    }
    if(valor % 10 == 1){
        dois += 3;
        disponiveis->maxdois -= 3;
        cinc += 1;
        disponiveis->maxcinc--;
        valor -= 13;
    }
    else{
        printf("2\n");
        return 0;
    }
    //laços retiram notas de uma a uma da pilha e incrementam na variável de saída(impressao):
    while(disponiveis->maxcem-- && valor >= 100){
        cem++;
        valor -= 100;
    }
    while(disponiveis->maxcinq-- && valor >= 50){
        cinq++;
        valor -= 50;
    }
    while(disponiveis->maxvin-- && valor >= 20){
        vin++;
        valor -= 20;
    }
    while(disponiveis->maxdez-- && valor >= 10){
        dez++;
        valor -= 10;
    }
    while(disponiveis->maxcinc-- && valor >= 5){
        cinc++;
        valor -= 5;
    }
    while(disponiveis->maxdois-- && valor >= 2){
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