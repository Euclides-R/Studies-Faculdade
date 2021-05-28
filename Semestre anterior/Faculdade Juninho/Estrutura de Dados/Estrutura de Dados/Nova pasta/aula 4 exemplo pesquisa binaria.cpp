 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>
 //#include <stdio.h>
 //#include <string>
 //#include <math.h>

using namespace std;
const int QTDE=5;

void insertionSort(int vetor[], int QTDE){
	
	int i, j, atual;
	for (i=1;i<QTDE;i++){
		atual=vetor[i];
		j=i-1;
		
		while (j>=0 && vetor[j]>atual){
			vetor[j+1]=vetor[j];
			j=j-1;
		}
		vetor[j+1]=atual;
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


int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

	int vetor[]={12, 99, 23, 5, 1};
	int busca;
	insertionSort(vetor, QTDE);
	print(vetor);
	cout<<"Digite o valor de busca"<<endl;
	cin>>busca;
	cout<<"A posição do número é: "<<pesquisaBinaria(vetor,QTDE,busca);
	
return 0;
}

