#include <iostream>
using namespace std;

//prototipo da fun��o
string Texto(); 
void Teste(void);

// programa principal
int main (void){
	cout<<Texto()<<endl;
	Teste();
}

//fun��o
string Texto(){
	return "texto";
}

void Teste(void){
	cout<<123<<endl;	
}



