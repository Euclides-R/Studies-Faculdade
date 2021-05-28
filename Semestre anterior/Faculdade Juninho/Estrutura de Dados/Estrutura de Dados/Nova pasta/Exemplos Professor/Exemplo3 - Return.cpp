#include <iostream>
using namespace std;

//prototipo da função
void Teste(void);

// programa principal
int main (void){
	Teste();
}

//função
void Teste(void){
	if (true){ //testar com false
		return;	
	}	
	cout<<"ola"<<endl;	
}



