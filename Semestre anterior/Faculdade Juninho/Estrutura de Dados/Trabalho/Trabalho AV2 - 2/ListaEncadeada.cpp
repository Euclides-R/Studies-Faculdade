#include <iostream>
#include <tchar.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

#define qtd 5

struct CRIAR_LISTA{
	int codigo;
	char nome[100];
	int turma;

	struct CRIAR_LISTA * ptrlink;
};

bool inserirvl(float valor[], int posi, float nm){
	for (int x = qtd; x < posi; x--){
		valor[x] = valor [x-1];
	}
	valor[posi] = nm;
	return true;
}

bool verificar(float valor[]){
	int aux;
	for(int x = 0; x < qtd; x++){
		aux= aux+valor[x];
	}

	if (aux!=0){
		cout<<"LISTA VAZIA!"<<endl;
	}
	else {
		cout<<"LISTA COM ELEMENTOS"<<endl;
	}
}

bool exibir(float valor[]){
	for(int x = 0; x < qtd; x++){
		cout<<"Elemento "<<x+1<<": "<<valor[x+1]<<endl;
	}
	return true;
}

int main() {

	CRIAR_LISTA *cabeca, *primeiroN, *segundoN, *aux;

	cabeca = new CRIAR_LISTA;

	cabeca->ptrlink=NULL;

	primeiroN = new CRIAR_LISTA;

	primeiroN->codigo = 10;

	strcpy(primeiroN->nome, "Jose");

	primeiroN->turma=250;

	primeiroN->ptrlink = NULL;

	cabeca->ptrlink = primeiroN;

	primeiroN->ptrlink=segundoN;

	aux = cabeca->ptrlink;

	int x=1;

	while(aux!=NULL){

		cout<<"No:\t\t "<<x<<endl;
		cout<<"Codigo do aluno: "<<aux->codigo<<endl;
		cout<<"Nome:\t\t "<<aux->nome<<endl;
		cout<<"Turma:\t\t "<<aux->turma<<endl;
		cout<<endl<<endl;

		x++;
		aux=aux->ptrlink;
	}

	/*float number[qtd];
	int p, n;
	bool aux;

	verificar(number);

	for(int y;y < qtd; y++){
		cout<<"Insera um valor: ";
		cin>>n;
		cout<<"Insira posição que deseja inserir: ";
		cin>>p;
		aux = inserirvl(number, p, n);

		if (aux==true){
			cout<<"insercao efetuada com sucesso!"<<endl;
		}
	}

	aux = exibir(number);
	if(aux==false){
		cout<<"Não foi possível exibir lista!"<<endl;
	}
*/


	return 0;
}
