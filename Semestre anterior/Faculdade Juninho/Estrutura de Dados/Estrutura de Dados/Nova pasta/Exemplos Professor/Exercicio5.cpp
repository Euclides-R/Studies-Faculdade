#include <iostream>
//#include <string>
using namespace std;

struct Carro{
		
		string cor;
		string placa;
		int qtdePessoas;
};
	
int main (void){

	struct Carro carros[10];
	int posicao=0;
	
	for (int i=0;i<10;i++){	
		carros[i].cor="";
		carros[i].placa="";
		carros[i].qtdePessoas=0;
	}
	
	cout<<"Qual carro deseja cadastrar"<<endl;
	cin>>posicao;

	carros[posicao].cor="Azul";
	carros[posicao].placa="AAA-9966";
	carros[posicao].qtdePessoas=5;
	for (int i=0;i<10;i++){	
		cout<<carros[i].cor<<" "<<carros[i].placa<<" "<<carros[i].qtdePessoas<<endl;
	}
}

