#include <iostream>
using namespace std;

//prototipo da fun��o
float CalcPerimetroCircunferencia(float); 

// programa principal
int main (void){
	cout<<CalcPerimetroCircunferencia(3);
}

//fun��o
float CalcPerimetroCircunferencia(float raio){
	float Perimetro;
	Perimetro = 2 * 3.14 * raio ;
	return Perimetro;
}
