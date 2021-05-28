#include <iostream>
using namespace std;
void CalcularPreco(float, float&);

int main(void){
	float VlrProdReal, VlrProdDolar;
	cout << "Digite o valor em Reais: ";
	cin >> VlrProdReal;
	// Chamada da função
	CalcularPreco(VlrProdReal, VlrProdDolar);
	cout << "Valor em Dolar: " << VlrProdDolar << endl;
}

void CalcularPreco(float VlrProdutoReal, float &VlrProdutoDolar){
	VlrProdutoDolar = VlrProdutoReal / 3.8;
}



