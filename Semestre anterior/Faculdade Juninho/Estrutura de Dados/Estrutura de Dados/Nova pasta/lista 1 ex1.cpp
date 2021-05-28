 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>

using namespace std;

struct ret{
int largura;
int comprimento;
float area;
};

bool isEven();

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

struct ret retangulo[5];

cout<<"Digite os dados do Retângulo"<<endl;
	
	for (int i=0;i<5;i++){
		cout<<"Largura do Retângulo "<<i+1<<":";
		cin>>retangulo[i].largura;
		cout<<"Comprimento do Retângulo "<<i+1<<":";
		cin>>retangulo[i].comprimento;
		retangulo[i].area=retangulo[i].largura*retangulo[i].comprimento;
}

int i, j, controle;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if (retangulo[i].area > retangulo[j].area){
				controle=retangulo[i].area;
				retangulo[i].area=retangulo[j].area;
				retangulo[j].area=controle;
				}
			}
		}
		
cout<<"Áreas em Ordem Decrescente: \n";

for(i=5;i>0;i--){cout<<retangulo[i-1].area<<endl;}

return 0;}




