#include <iostream>
using namespace std;

// Prot�tipo da fun��o
int Alterar(int&);

int main(void){
	int Idade=20;
	int IdadeAlterada=Alterar(Idade);
	cout << Idade <<endl;
	cout << IdadeAlterada <<endl;
}

//fun��o
int Alterar(int &paramIdade){
	paramIdade = 100;
	return paramIdade;
}


