#include <iostream>

#include <string>
using namespace std;

struct Carro{
		
		string cor;
		string placa;
		int qtdePessoas;
};
	
int main (void){

	struct Carro carros[5];
	int posicao=0;
	
	for (int i=0;i<5;i++){	
		cout<<"Cadastro do Carro "<<i<<endl;
		cout<<"Digite a cor ";
		cin>>carros[i].cor;
		cout<<"Digite a placa ";
		cin>>carros[i].placa;
		cout<<"Digite a quantidade de pessoas ";
		cin>>carros[i].qtdePessoas;
	}
	

	cout<<"Qual carro deseja consultar?"<<endl;
	cin>>posicao;
	cout<<carros[posicao].cor<<" "<<carros[posicao].placa<<" "<<carros[posicao].qtdePessoas<<endl;

}

