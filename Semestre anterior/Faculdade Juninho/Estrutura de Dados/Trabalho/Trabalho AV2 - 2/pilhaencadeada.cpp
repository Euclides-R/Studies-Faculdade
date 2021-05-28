#include <iostream>
using namespace std;

#define MAX_LISTA 5 //Tamanho Máximo da Lista
int Pesquisar(float Lista[], float valor){
	for (int ind=0;ind<MAX_LISTA;ind++){
		if (Lista[ind] == valor){
		return ind;
		}
	}
	return -1;
}

bool RemoverElem(float Lista[], int valor){
	int PosRem = Pesquisar(Lista, valor);
	for (int ind=0;ind<MAX_LISTA;ind++){
		Lista[ind] = Lista[ind+1];
	}
	return true;
}

bool Exibir(float Lista[]){
	for (int ind=0;ind<MAX_LISTA;ind++){
		cout<<"Nota "<<ind+1<<": "<<Lista[ind]<<endl;
	}
	return true;
}

bool Inserir(float Lista[], int PosIns, float valor){
	for (int ind=0;ind<MAX_LISTA;ind++){
		Lista[ind] = Lista[ind-1];
	}
	Lista[PosIns] = valor;
	//Exibir(Lista);
	return true;
}

int main (){
	setlocale(LC_ALL, "Portuguese");

	float ListaNotas[MAX_LISTA];
	bool Ret;
	int Pos;
	float valor;
	int posicao;

	for (int i = 0; i < MAX_LISTA; i++){
		cout<<"Digite o valor para inserção: ";
		cin>>valor;
		cout<<"Digite a posição para inserção: ";
		cin>>posicao;
		Ret = Inserir(ListaNotas, posicao, valor);

		if (Ret == true){
			cout<<"Inserção efetuada com sucesso"<<endl;
		}
	}

	Exibir(valor);
	cout<<"Digite o valor para remoção: ";
	cin>>valor;
	Ret = RemoverElem(ListaNotas, valor);
		if(Ret == true){
			cout<<"Remoção efetuada com sucesso!"<<endl;
		}
	Exibir(ListaNotas);

}
