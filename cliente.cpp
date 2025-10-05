#include "cliente.hpp"
#include <string>

//Contrutor de Cliente sem todos os atributos da conta, nome e cpf
Cliente::Cliente(){
	nome = "";
	cpf = "";
}
//Construtor com todos os atributos da conta, nome e cpf
Cliente::Cliente(std::string nome_cliente,std::string cpf_cliente){
	nome = nome_cliente;
	cpf = cpf_cliente;	
}

//Retorna o nome
std::string Cliente::get_nome(){
	return nome;
}

//Retorna o CPF
std::string Cliente::get_cpf(){
	return cpf;
}
