#include <iostream>
using namespace std;
void GerarValores(float[], float);

int main(void){
	float PagtoMes[12];
	GerarValores(PagtoMes, 150.80);
	for(int i = 0; i < 12; i++){
		cout << "Pagamento Mes " << i << ": " << PagtoMes[i] << endl;
	}
}

void GerarValores(float PagtoM[], float VlrPagto){
	for(int i = 0; i < 12; i++){
		PagtoM[i] = VlrPagto;
	}
}


