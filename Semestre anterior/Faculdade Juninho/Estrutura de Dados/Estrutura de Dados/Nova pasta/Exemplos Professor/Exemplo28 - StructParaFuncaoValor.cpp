#include <iostream>
using namespace std;

struct Pag{		
	int codigo;
	float valor;
};

void GerarValores(Pag PagtoM){
	PagtoM.codigo = 100;
	PagtoM.valor = 200.2;
	cout << PagtoM.codigo << " : " << PagtoM.valor << endl;	
}

int main(void){
	struct Pag PagtoMes = {10,20.1};
	GerarValores(PagtoMes);
	cout << PagtoMes.codigo << " : " << PagtoMes.valor << endl;
}








