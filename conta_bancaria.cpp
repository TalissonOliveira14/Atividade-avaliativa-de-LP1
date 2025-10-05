#include "conta_bancaria.hpp"
#include <iostream>
using namespace std;

	//Construtores
	
// Construtor que armazena todos os valores da classe
Conta_bancaria::Conta_bancaria(int num,Cliente cliente_titular, double valor){
	numero = num;
	titular = cliente_titular;
	saldo = valor;
}
// Armazenas os valores da classe exeto o saldo, pois não é passado como parametro para o metodo
Conta_bancaria::Conta_bancaria(int num,Cliente cliente_titular){
	numero = num;
	titular = cliente_titular;
	saldo = 0.00;
}



	// Metodos de tranferencia ou saque de valores;

// Soma o valor ao saldo
void Conta_bancaria::depositar(double valor){
	saldo += valor;
}

// Diminui o valor ao saldo
void Conta_bancaria::sacar(double valor) {
    if(saldo >= valor && valor > 0){ //Condição para sacar o valor, se o saldo for maior que o valor pedido ou maior que zero
        saldo -= valor;  //
        cout << "Saque de R$ " << valor << " realizado na conta " << numero << endl;
    }
    else{
        cout << "Não foi possível sacar R$ " << valor 
             << " da conta " << numero << endl 
             << "Saldo disponível: R$ " << saldo << endl;
    }
}

//Transfere um valor de uma conta para outra
void Conta_bancaria::transferir(double valor, Conta_bancaria &cliente){
    if(saldo >= valor && valor > 0){ //Condição se o valor atual da conta é maio que o valor a ser tranferido
        saldo -= valor;               

        cliente.depositar(valor); // faz chamada da função de deposito
        cout << "Transferido: R$ " << valor << " da conta "
        << numero << " para a conta " << cliente.get_numero() << endl;
    }
    else{ //Caso as condição do if pedidas não sejam verdadeiras
        cout << "Não foi possível transferir o valor: " << valor << endl 
                  << "Saldo disponível: " << get_saldo() << endl;
    }
}

//Transfere o valor de uma conta para outra, dividindo o valor entre as duas contas
void Conta_bancaria::transferir(double valor, Conta_bancaria &cliente1, Conta_bancaria &cliente2){
    if(saldo >= valor && valor > 0){ //Mesma condição pedida nos metodos anteriores
        saldo -= valor;            
        cliente1.depositar(valor / 2);
        cliente2.depositar(valor / 2);
        cout << "Transferido: R$ " << valor /2 << " para cada conta ("
             << cliente1.get_numero() << " e " << cliente2.get_numero() << ") da conta " << numero << endl;
    }
    else{ //Caso as condição do if pedidas não sejam verdadeiras
        cout << "Não foi possível transferir o valor: " << valor << endl 
             << "Saldo disponível: " << get_saldo() << endl;
    }
}

	// Metodos de exibir informações;

//Exibe informação do numero da conta e o saldo
void Conta_bancaria::exibir_saldo(){
	cout << "Saldo atual da conta "<< numero <<" : R$ "  << saldo << endl;

}

//Exibe todas as informações da conta, nome, cpf, numero e saldo;
void Conta_bancaria::exibir_informacoes(){
	cout << "Titular: " << titular.get_nome() << ", CPF: " << titular.get_cpf() << endl;
	cout << "Número da Conta: " << numero << ", Saldo: R$ " << saldo << endl;
}
	// Metodos get;

//Retorna o saldo
double Conta_bancaria::get_saldo(){
	return saldo;
}

//Retorna o numero da conta
int Conta_bancaria::get_numero(){
	return numero;
}
	
