 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>
 //#include <stdio.h>
 //#include <string>
 //#include <math.h>

using namespace std;

int pesquisaSequencial(int vetor[], int qtde, int valorBusca){
	for(int i=0;i<qtde;i++){
		if(vetor[i]==valorBusca){return i;}
	}
return -1;
}

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

int vetor[]={12,44,3,5,1};
cout<<pesquisaSequencial(vetor, 5, 3);

return 0;}

