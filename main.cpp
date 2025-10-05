#include "cliente.hpp"
#include "conta_bancaria.hpp"
#include <iostream>
using namespace std;

void organizar(){
	cout << endl;
	cout << "========================================" << endl;
	cout << endl;
}

int main(){

    Cliente cliente1("Michael Jackson ", "111.222.333-44");
    Cliente cliente2("MC Daleste", "555.666.777-88");
    Cliente cliente3("P. Diddy", "999.888.777-66");
    
    // Contas para os clientes
    Conta_bancaria conta1(1001, cliente1, 1250.75);
    Conta_bancaria conta2(1002, cliente2, 850.50);
    Conta_bancaria conta3(1003, cliente3, 2100.00);

    //exibir saldos das contas 

    organizar();
   	conta1.exibir_saldo();
   	conta2.exibir_saldo();
   	conta3.exibir_saldo();
   	organizar();

   	//tranferir contas
   	conta1.transferir(110, conta3);
   	conta2.transferir(200, conta3);
   	conta3.transferir(500, conta1, conta2);
   	organizar();

   	// Deposita valor nas contas

   	conta1.depositar(1000);
   	conta3.depositar(300.24);
   	conta2.depositar(0.99);


   	//exibe as informações das contas;
    conta1.exibir_informacoes();
    conta2.exibir_informacoes();
    conta3.exibir_informacoes();

    return 0;
}
