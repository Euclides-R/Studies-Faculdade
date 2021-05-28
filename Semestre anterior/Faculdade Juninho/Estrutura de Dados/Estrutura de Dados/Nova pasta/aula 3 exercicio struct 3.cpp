// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
//#include <stdio.h>
#include <tchar.h>
#include <string>

using namespace std;

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

int controle, i;
struct Carro{
char Cor[10], Placa[8];
int QuantidadePessoas;};

struct Carro carro1;

carro1.QuantidadePessoas=0;
strcpy(carro1.Cor,"0");
strcpy(carro1.Placa, "0");
		
	cout<<"Digite os dados do Carro\n\n";
	cout<<"Quantidade de Pessoas: ";
	cin>>carro1.QuantidadePessoas;
	cout<<"Cor: ";
	cin>>carro1.Cor;
	cout<<"Placa: ";
	cin>>carro1.Placa;
	
	system("cls");
	
	cout<<"Qual dado do carro deseja verificar?\n 1-Cor\n 2-Placa\n 3-Quantidade de Pessoas\n\n ->";
	cin>>controle;
	if(controle==1)cout<<"Cor: "<<carro1.Cor<<endl;
	else if(controle==2)cout<<"Placa: "<<carro1.Placa<<endl;
	else if(controle==3)cout<<"Quantidade de pessoas: "<<carro1.QuantidadePessoas<<endl;

return 0;}

