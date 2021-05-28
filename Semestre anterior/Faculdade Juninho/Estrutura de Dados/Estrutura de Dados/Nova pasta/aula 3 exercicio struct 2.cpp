// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string.h>

using namespace std;

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

int controle, i, w=1;
char cor;
struct Carro{
char Cor[10], Placa[8];
int QuantidadePessoas;};

struct Carro carro1[5];

for (i=0; i<5; i++){
	
	carro1[i].QuantidadePessoas=0;
	strcpy(carro1[i].Cor,"0");
	strcpy(carro1[i].Placa, "0");
	}
	
while (w==1){
	
	cout<<"Digite 0 para finalizar e apresentar os resultados\n";
	cout<<"Em qual posição deseja armazenar os valores? (1-5) :";
	cin>>controle;
	if (controle==0)w=0;
	cout<<"Quantidade de Pessoas: ";
	cin>>carro1[controle-1].QuantidadePessoas;
	cout<<"Cor: ";
	cin>>carro1[controle-1].Cor;
	cout<<"Placa: ";
	cin>>carro1[controle-1].Placa;
	}
	system("cls");
for (i=0; i<5; i++){
	
	cout<<"Carro "<<i+1<<endl;
	cout<<"Cor: "<<carro1[i].Cor<<endl;
	cout<<"Placa: "<<carro1[i].Placa<<endl;
	cout<<"Quantidade de pessoas: "<<carro1[i].QuantidadePessoas<<endl<<endl;
	}

return 0;}

