 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>

using namespace std;

#define q 5
int V1[5];
int V2[5];

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

	cout<<"Vetor Invertido = {";
	for (int i=0;i<n;i++){
		if(i<n-1)cout<<V2[i]<<", ";
		else cout<<V2[i];
		}
	cout<<"}\n";

	cout<<"\nMaior valor do Vetor é: "<<cont;
}

void multiplica_escalar(int *v1, int *v2, int x, int n){
	
	for (int i=0;i<n;i++)v1[i]=v2[i]*x;
}


int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

for (int i=0;i<q;i++){
	cout<<"Digite o valor para a posição "<<i<<" do Vetor 1: ";
	cin>>V1[i];
	cout<<endl;
}

inverte_vetor(V1, V2, q);

int x;
cout<<"\n\nDigite o valor para a multiplicação escalar: ";
cin>>x;

multiplica_escalar(V2, V1, x, q);

	cout<<"\nVetor Resultante = {";
	for (int i=0;i<q;i++){
		if(i<q-1)cout<<V2[i]<<", ";
		else cout<<V2[i];
		}
	cout<<"}";
	
return 0;}

