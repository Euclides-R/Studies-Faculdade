 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <cstdlib>
 #include <string>
 #include <math.h>

using namespace std;

const int QTDE=5;

	struct lista{
	int id;
	string nome;
};

void bubbleSort(int vetor[]){
	int i, j, temp;
	int n=5;
	for(i=1;i<n;i++){
		for(j=0;j<(n-1);++j){
			if(vetor[j]>vetor[j+1]){
				temp=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=temp;
			}
		}
	}
}

int pesquisaBinaria(int vetor[], int QTDE, int valorBusca){
	
	int inf=0;
	int sup=QTDE-1;
	int meio;
	
	while (inf<=sup){
		meio=(inf+sup)/2;
		if (valorBusca==vetor[meio]){return meio;}
		else if (valorBusca<vetor[meio]){sup=meio-1;}
		else {inf=meio+1;}
		}
	return -1;		
	}

void print(int vetor[]){
	for (int i=0;i<QTDE;i++){
		cout<<vetor[i]<<"\t";
	}
	cout<<endl;
}

int main (){

_tsetlocale(LC_ALL,_T("portuguese"));

	int busca;
	
struct lista lista1[5];

	lista1[0].id=5;
	lista1[1].id=7;
	lista1[2].id=2;
	lista1[3].id=11;
	lista1[4].id=6;

	lista1[0].nome="José";
	lista1[1].nome="Maria";
	lista1[2].nome="Carlos";
	lista1[3].nome="Ana";
	lista1[4].nome="Bia";
	
	bubbleSort(lista1.id);

	print(lista1);
	cout<<"Digite o valor de busca"<<endl;
	cin>>busca;
	cout<<"A posição no vetor do ID "<<busca<<"é: "<<pesquisaBinaria(lista1,QTDE,busca);

return 0;}

