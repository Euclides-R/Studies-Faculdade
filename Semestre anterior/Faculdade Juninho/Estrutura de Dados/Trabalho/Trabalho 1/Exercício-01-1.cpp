#include <iostream>
#include <stdlib.h>
using namespace std;

void area(float val[]) {
	float aux;

	for (int i=0; i<5; i++) {
		for(int j=0; j<5-i; j++) {
			if(val[j] < val[j+1]) {
				aux = val[j];
				val[j] = val[j+1];
				val[j+1] = aux ;
			}
		}
	}

	for (int i=0; i<5; i++) {
		cout<<"A area corresponde "<<val[i]<<"m2\t"<<endl;
	}
}


int main() {

	float v1[5];
	float b, h;
	for (int i=0; i<=4; i++) {
		cout<<"Insira o valor da base: ";
		cin>>b;
		cout<<"Insira o valor da altura: ";
		cin>>h;
		v1[i] = b*h;
	}

	area(v1);

}
