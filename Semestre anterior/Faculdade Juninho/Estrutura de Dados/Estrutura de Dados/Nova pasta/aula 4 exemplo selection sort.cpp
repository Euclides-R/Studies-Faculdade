// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <tchar.h>

using namespace std;

void selectionSort(int vetor[], int n){
	int i, j, indice, temp, minimo;
	
	for(i=0;i<n-1;i++){
		minimo=vetor[i];
		indice=i;
		for(j=i+1;j<n;j++){
			if(minimo>vetor[j]){
				minimo=vetor[j];
				indice=j;
			}
		}
		temp=vetor[i];
		vetor[i]=vetor[indice];
		vetor[indice]=temp;
	}
}


int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

	int vetor[]={12, 44, 23, 5, 1};

	selectionSort(vetor, 5);
	for (int i=0;i<5;i++){
		cout<<vetor[i]<<"\t";
	}

return 0;}

