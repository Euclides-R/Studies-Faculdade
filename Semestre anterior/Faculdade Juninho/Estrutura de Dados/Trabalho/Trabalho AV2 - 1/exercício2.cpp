#include <iostream>
#include <tchar.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int const MAXTAM=1000;

int Frente, Tras;
int Fila[MAXTAM];

void Fila_construtor(){
	Frente=0;
	Tras=-1;
}

bool Fila_Vazia(){
	if(Frente>Tras){
		return true;
	}else{
		return false;
	}
	//return frente > tras
}

bool Fila_Cheia(){
	if(Tras==MAXTAM-1){
		return true;
	}else{
		return false;
	}
}

bool Fila_Enfileirar(int valor){
	if (Fila_Cheia()){
		return false;
	}else{
		Tras++;
		Fila[Tras]=valor;
		return true;
	}
}


bool Fila_Desinfileirar(int &valor){
	if (Fila_Vazia()){
		return false;
	}else{
		valor=Fila[Frente];
		Frente++;
		return true;
	}
}

bool Fila_Get(int &valor){
	if (Fila_Vazia()){
		return false;
	}else{
		valor=Fila[Frente];
		return true;
	}
}

int Fila_tamanho(){
	return (Tras - Frente)+1;
}

int main (){
	int Valor;
	Fila_construtor();
	
	Fila_Enfileirar(5);
	Fila_Enfileirar(2);
	Fila_Enfileirar(7);
	
	cout<<"\nTamanho: "<<Fila_tamanho()<<"\n";
	
	while(Fila_Desinfileirar(Valor)){
		cout<<"\n\nValor: "<<Valor<<"\n";
	}
	
	cout<<"\n\nTamanho: "<<Fila_tamanho()<<"\n";
	
	/*
	if (Fila_Desinfileirar(Valor)){
		cout<<"\n\nValor: "<<Valor<<endl;
	}else{
		cout<<"\n\nFila Vazia!!\n\n";
	}
	*/	
	
	system("pause");
	return 0;
}
