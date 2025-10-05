#ifndef CLASS_CLIENTE_HPP
#define CLASS_CLIENTE_HPP

#include <string>

class Cliente{
private:
	std::string nome, cpf;
public:
	// construrores
	Cliente();
	Cliente(std::string nome_cliente,std::string cpf_cliente);

	// metodo set
	std::string get_nome();
	std::string get_cpf();
};
#endif 