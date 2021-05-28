#include <iostream>
//#include <string>
using namespace std;

int main (void){
	struct Carro{
		string cor;
		string placa;
		int qtdePessoas;
	};

	struct Carro carro1;
	carro1.cor="Azul";
	carro1.placa="AAA-9966";
	carro1.qtdePessoas=5;
	cout<<carro1.cor<<endl;
	cout<<carro1.placa<<endl;
	cout<<carro1.qtdePessoas<<endl;
}

