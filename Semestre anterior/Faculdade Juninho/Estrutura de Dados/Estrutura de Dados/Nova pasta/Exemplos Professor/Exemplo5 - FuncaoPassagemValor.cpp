#include <iostream>
using namespace std;

void Beep(int); // Prot�tipo da fun��o

int main(void){
	Beep(10); // Chama a fun��o a ser executada
}

//fun��o
void Beep(int NroVezes){
	for(int i = 0; i < NroVezes; i++) {
		cout << '\x07';
	}
}



