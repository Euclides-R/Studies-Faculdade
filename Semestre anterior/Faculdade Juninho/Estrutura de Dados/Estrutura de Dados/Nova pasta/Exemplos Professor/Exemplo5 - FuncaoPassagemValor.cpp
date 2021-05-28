#include <iostream>
using namespace std;

void Beep(int); // Protótipo da função

int main(void){
	Beep(10); // Chama a função a ser executada
}

//função
void Beep(int NroVezes){
	for(int i = 0; i < NroVezes; i++) {
		cout << '\x07';
	}
}



