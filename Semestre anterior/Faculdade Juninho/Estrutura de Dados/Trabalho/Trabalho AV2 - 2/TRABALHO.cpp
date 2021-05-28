#include <iostream>
#include <tchar.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

#define qtd 5

typedef struct DADOS_ALUNO{
	int number;
	struct DADOS_ALUNO *link;
}dado;


int main(){
	dado *pLista;
	int opcao=0;
	void nulo(dado **pR);
	void inserir(dado **pR);
	void verificar(dado **pR);
	void remover(dado **pR);

	pLista = (dado *)malloc(sizeof(struct DADOS_ALUNO));
	nulo(&pLista);

	for(int y=0;y<qtd;y++){
		cout<<"\n1 - Inserir: ";
		cout<<"\n2 - Verificar: ";
		cout<<"\n3 - Remover: ";
		cout<<"\n5 - Esvaziar: ";
		cout<<"\n5 - Sair: "<<endl;
		cout<<"Selecione uma das opcoes: ";
		cin>>opcao;
		switch (opcao) {
			case 1:
				inserir(&pLista);
			break;
			case 2:
				verificar(&pLista);
			break;
			case 3:
				remover(&pLista);
			break;
			case 4:

			break;
			case 5:
				exit(0);
			break;
		}
	}

	return 0;
}

int nulo(dado **pR){
	(*pR)->link=NULL;
}

void inserir(dado **pR){
	dado *temporario;
	int valor;

	cout<<"Valor: ";
	scanf("%d", &valor);
	temporario = (dado *)malloc(sizeof(dado));
	temporario->number=valor;
	temporario->link=(*pR)->link;
	(*pR)->link = temporario;
}

void verificar(dado **pR){
	dado *temporario;

	if((*pR)->link==NULL){
		cout<<"Lista Vazia!!!\n";
	}
	else {
		temporario = (dado *)malloc(sizeof(dado));
		temporario = (*pR)->link;
		while(temporario!=NULL){
			cout<<"Valor: "<<temporario->number<<endl;
			temporario = temporario->link;
		}
	}
}

void remover(dado **pR){

	dado *temporario;

	if((*pR)->link==NULL){
		cout<<"Lista vazia!!!"<<endl;
	}
	else {
		temporario = (
		*pR)->link;
		(*pR)->link = temporario->link;
		free(temporario);
	}
}
