#include <iostream>
using namespace std;

// Protótipo da função
void Alterar(int&);

int main(void){
	int Idade=20;
	Alterar(Idade);
	cout << Idade;
}

//função
void Alterar(int &paramIdade){
	paramIdade = 100;
}


