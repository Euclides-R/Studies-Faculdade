// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <tchar.h>

using namespace std;

void bubbleSort(int vetor[], int n){
	int i, j, temp;
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

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

	int vetor[]={12, 44, 0, 5, 1};
	
	bubbleSort(vetor, 5);
	for (int i=0;i<5;i++){
		cout<<vetor[i]<<"\t";
	}
	
return 0;}

