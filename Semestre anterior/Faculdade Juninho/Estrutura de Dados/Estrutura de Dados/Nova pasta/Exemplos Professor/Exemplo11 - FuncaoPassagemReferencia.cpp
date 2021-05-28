#include <iostream>
using namespace std;

// Protótipo da função
int Alterar(int&);

int main(void){
	int Idade=20;
	int IdadeAlterada=Alterar(Idade);
	cout << Idade <<endl;
	cout << IdadeAlterada <<endl;
}

//função
int Alterar(int &paramIdade){
	paramIdade = 100;
	return paramIdade;
}


