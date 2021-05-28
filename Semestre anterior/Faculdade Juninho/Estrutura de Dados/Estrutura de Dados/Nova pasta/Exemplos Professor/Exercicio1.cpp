#include <iostream>
using namespace std;

int main (void){
	
	int valores[5];
	int maiorNumero=0,
		menorNumero=9999;
			
	for (int i=0;i<5;i++){
		cout<<"Digite o valor "<<i+1<<": ";
		cin>>valores[i];
	
		if (menorNumero>valores[i])
			menorNumero=valores[i];
		if (maiorNumero<valores[i])
			maiorNumero=valores[i];
	}
	
	cout<<"Menor valor: "<<menorNumero<<endl;
	cout<<"Maior valor: "<<maiorNumero;
	return 0;
}


