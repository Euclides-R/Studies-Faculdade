#include <iostream>
using namespace std;

// Prot�tipo da fun��o
void Alterar(int&);

int main(void){
	int Idade=20;
	Alterar(Idade);
	cout << Idade;
}

//fun��o
void Alterar(int &paramIdade){
	paramIdade = 100;
}


