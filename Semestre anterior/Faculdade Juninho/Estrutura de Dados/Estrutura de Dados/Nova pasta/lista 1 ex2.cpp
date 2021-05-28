 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>


using namespace std;

int *vetor = new int;


void comparacao (int vetor[]){
	cout<<endl;
	for (int i=0;i<4;i++){
		for(int j=1;j<4;j++){
			if ((vetor[i]==vetor[j])&&(i!=j)&&(i<j)){
			
				cout<<"Posição "<<i+1<<" é igual a posição "<<j+1<<endl;
			}
		}
	}
}



int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));


for (int i=0;i<4;i++){
	cout<<"Digite o valor da posição "<<i+1<<": ";
	cin>>vetor[i];
}

comparacao(vetor);

return 0;}

