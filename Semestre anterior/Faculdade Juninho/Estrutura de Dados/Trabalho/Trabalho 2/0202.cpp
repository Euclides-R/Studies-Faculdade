#include <iostream>
#include <tchar.h>
#include <fstream>
#include <locale.h>
using namespace std;

#define q 5
int vetor1[5];
int vetor2[5];

void multiplica_escalar(int *v1, int *v2, int x, int n){
		cout<<"Vetor multiplicado: {";
		for(int y=0;y<q;y++){
			n=x*v1[y];
			v2[y]=n;
			if(y<q-1)cout<<v2[y]<<", ";
			else cout<<v2[y];
			}
		cout<<"}";
}

int inverte_vetor(int *v1, int *v2, int n){
	int i=0, j=n-1, cont=0;

	while(i<n){
		v2[i]=v1[j];
		i++;
		j--;
	}
	for (int i=0;i<q;i++)
		if(v1[i]>cont){
			cont=v1[i];
		}

	cout<<"Vetor invertido: {";
	for (int i=0;i<n;i++){
		if(i<n-1)cout<<vetor2[i]<<", ";
		else cout<<vetor2[i];
		}
	cout<<"}";
	cout<<"\nMaior valor do Vetor é: "<<cont<<endl;
}

int main(int argc, char const *argv[]) {

	_tsetlocale(LC_ALL,_T("portuguese"));

	for(int i=0;i<5;i++){
		cout<<"Coloque um valor no seu vetor = ";
		cin>>vetor1[i];
	}

	inverte_vetor(vetor1, vetor2, q);
	int x;
	cout<<"Digite o valor que deseja multiplicar: ";
	cin>>x;

	multiplica_escalar(vetor1, vetor2, x, q);

	return 0;
}
