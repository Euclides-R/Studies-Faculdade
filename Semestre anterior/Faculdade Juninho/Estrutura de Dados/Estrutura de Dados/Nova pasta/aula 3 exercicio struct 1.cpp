// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string.h>

using namespace std;

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

struct Carro{
	char Cor[10], Placa[8];
	int QuantidadePessoas;
};

struct Carro carro1;

carro1.QuantidadePessoas=5;
strcpy(carro1.Cor,"Azul");
strcpy(carro1.Placa, "AAA-9999");

cout<<"Cor: "<<carro1.Cor<<endl;
cout<<"Placa: "<<carro1.Placa<<endl;
cout<<"Quantidade de pessoas: "<<carro1.QuantidadePessoas;

return 0;}

