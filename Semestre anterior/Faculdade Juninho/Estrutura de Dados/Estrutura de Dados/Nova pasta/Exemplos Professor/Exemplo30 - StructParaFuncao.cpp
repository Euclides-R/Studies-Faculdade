#include <iostream>
using namespace std;

struct Pag{		
	int codigo;
	float valor;
};

void GerarValores(struct Pag PagtoM[], float VlrPagto){
	for(int i = 0; i < 12; i++){
		PagtoM[i].codigo = i;
		PagtoM[i].valor = VlrPagto+i;
	}
}

int main(void){
	struct Pag PagtoMes[12];
	GerarValores(PagtoMes, 150.80);
	for(int i = 0; i < 12; i++){
		cout << PagtoMes[i].codigo << ": " << PagtoMes[i].valor << endl;
	}
}








