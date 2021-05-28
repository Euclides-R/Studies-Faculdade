#include <iostream>
#include <tchar.h>
#include <string>
#include <stdlib.h>
using namespace std;

struct Livro{
	int codigo;
	char titulo[30], autor[30], categoria[20];
};

void listar(struct Livro liv[]){
	cout<<"<================ Resultado =================>"<<endl;
	for(int i=0;i<3;i++){
		cout<<"<============================================>"<<endl;
		cout<<"Codigo do livro.........: ";
		cout<<liv[i].codigo<<endl;
		cout<<"Nome do livro...........: ";
		cout<<liv[i].titulo<<endl;
		cout<<"Nome do Autor...........: ";
		cout<<liv[i].autor<<endl;
		cout<<"Categoria do livro......: ";
		cout<<liv[i].categoria<<endl;
	}
}

int main() {

	Livro l[3];

	cout<<"<=========Insira os dados dos livros=========>"<<endl;

	for(int j=0;j<3;j++){
		cout<<"\n<============================================>"<<endl;
		cout<<"Nome do livro...........: ";
		cin.getline(l[j].titulo,30);
		cout<<"Nome do autor...........: ";
		cin.getline(l[j].autor,30);
		cout<<"Tipo de categoria.......: ";
		cin.getline(l[j].categoria,30);
		//código é gerado automáticamente pelo algoritmo
		l[j].codigo=rand()%1000;
	}

	listar(l);
}
