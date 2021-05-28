// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <tchar.h>

using namespace std;

void insertionSort(int vetor[], int n){
	
	int i, j, atual;
	for (i=1;i<n;i++){
		atual=vetor[i];
		j=i-1;
		
		while (j>=0 && vetor[j]>atual){
			vetor[j+1]=vetor[j];
			j=j-1;
		}
		vetor[j+1]=atual;
	}
}

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

	int vetor[]={12, 44, 23, 5, 1};

	insertionSort (vetor, 5);

	for (int i=0;i<5;i++){
		cout<<vetor[i]<<"\t";
	}

return 0;}

