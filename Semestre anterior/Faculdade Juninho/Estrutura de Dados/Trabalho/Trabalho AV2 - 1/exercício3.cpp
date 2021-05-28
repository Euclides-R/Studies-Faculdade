#include <iostream>
#include <tchar.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main () {
	_tsetlocale(LC_ALL,_T("portuguese"));
	int qtd, i, op, x;
	
	int valor=0;
	int starter;

	int filad[qtd];

	while(x==0){

		system("cls");
		cout<<"Esolha o que deseja realizar na filad: "<<endl;
		cout<<"1 -> Inserir valores\n2 -> Mostrar a quantidade de valores\n3 -> Remover o valor\n4 -> Valor do topo\n9 -> Esvaziar filad\n=";
		cin>>op;

		switch (op){

			case 1:
				cout<<"Digite o valor que será inserido na filad: ";
				cin>>filad[qtd];
				qtd++;
			break;

			case 2:
				if(qtd==1)cout<<"1 Elemento na fila\n";
				else cout<<qtd<<" Elementos na fila\n";
				system("PAUSE");
			break;

			case 3:
				filad[valor]=&starter;
				system("PAUSE");
			break;

			case 4:
				cout<<"O Valor "<<filad[qtd-1]<<endl;
				system("PAUSE");
			break;

			case 9:
				qtd=0;
				system("PAUSE");
			break;

			default:
					cout<<"Opção Incorreta ";
					system("PAUSE");
			break;
		}
	}
}

