#include <iostream>
using namespace std;

//prototipo da fun��o
void Teste(void);
//variaveis globais
int _global1=100;

// programa principal
int main (void){
	int local1=10;
	Teste();
	cout<<_global1<<endl;
	cout<<local1<<endl;
}
//fun��es
void Teste(void){
	int local2=20;
	cout<<_global1<<endl;	
	cout<<local2<<endl;
}



