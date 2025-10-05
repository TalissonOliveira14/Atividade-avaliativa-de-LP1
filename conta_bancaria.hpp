#ifndef CLASS_CONTA_BANCARIA_HPP
#define CLASS_CONTA_BANCARIA_HPP
#include "cliente.hpp"
#include <string>

class Conta_bancaria {
private:
	int numero;
	double saldo;
	Cliente titular;
public:

	// construtores 

	Conta_bancaria(int num,Cliente cliente_titular); 
	Conta_bancaria(int num,Cliente cliente_titular, double valor);

	//metodo sacar e depositar
	
	void sacar(double valor);
	void depositar(double valor);

	//sobrecarga tranferir
	void transferir(double valor, Conta_bancaria &cliente);

	void transferir(double valor, Conta_bancaria &cliente1, Conta_bancaria &cliente2);

	//imprimir informações
	void exibir_saldo();
	void exibir_informacoes();

	// metodo get ok
	double get_saldo(); 
	int get_numero(); 
	
	//metodo set
};
#endif