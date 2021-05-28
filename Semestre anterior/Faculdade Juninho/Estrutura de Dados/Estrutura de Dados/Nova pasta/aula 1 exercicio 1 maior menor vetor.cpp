#include <iostream>
#include <tchar.h>

using namespace std;

int main (){
	
	_tsetlocale(LC_ALL,_T("portuguese"));
	
	int i, numero[5], maior=0, menor=0, vetor[5];
	
	cout<<"Digite os 5 números do vetor\n\n";
	for(i=0;i<5;i++){
		
		cin>>numero[i];
		vetor[i]=numero[i];
	}
	menor=numero[0];
	maior=numero[0];
	
	for(i=0;i<5;i++){
		if(numero[i]>maior){maior=numero[i];}
		if(numero[i]<menor){menor=numero[i];}
		}
	cout<<"\nO maior número é: "<<maior<<endl;
	cout<<"O menor número é: "<<menor<<endl;

return 0;	
}

