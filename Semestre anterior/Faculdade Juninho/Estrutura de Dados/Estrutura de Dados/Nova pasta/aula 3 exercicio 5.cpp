// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <tchar.h>
#include <math.h>

using namespace std;

float d=0;
struct ponto{
	int x;
	float y;
};

float distancia (ponto ponto1, ponto ponto2){
	float d = sqrt((pow((ponto2.x-ponto1.x),2))+(pow((ponto2.x-ponto1.x),2)));
	return d;
}

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));


struct ponto ponto1, ponto2;

cout<<"Entre com o ponto X1: ";
cin>> ponto1.x;
cout<<"Entre com o ponto Y1: ";
cin>> ponto1.y;
cout<<"Entre com o ponto X2: ";
cin>> ponto2.x;
cout<<"Entre com o ponto Y2: ";
cin>> ponto2.y;

distancia(ponto1, ponto2);

cout<<distancia(ponto1, ponto2);

return 0;}

