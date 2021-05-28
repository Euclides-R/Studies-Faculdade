 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>

using namespace std;

double soma=0;

double somarElementosPares(double vet[], int n){

	int conv;

	for(int i=0;i<n;i++){
		conv=(int)vet[i];
		if (conv%2==0){
			soma=soma+vet[i];
			}
	}
return soma;
}

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

double vetor[10];
cout<<"Digite 10 valores num�ricos\n";


for(int i=0;i<10;i++){
	cout<<"Digite o valor para a posi��o "<<i+1<<" :";
	cin>>vetor[i];
}

somarElementosPares(vetor,10);

cout<<"\n\nSoma dos valores pares �: "<<soma;

return 0;}
