#include <iostream>
using namespace std;

//prototipo da função
string Texto(); 
void Teste(void);

// programa principal
int main (void){
	cout<<Texto()<<endl;
	Teste();
}

//função
string Texto(){
	return "texto";
}

void Teste(void){
	cout<<123<<endl;	
}



