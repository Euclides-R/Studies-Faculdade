// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <tchar.h>

using namespace std;

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

int i, j, x=0;

for (i=0;i<5;i++){
	cout<<endl;
	for (j=0;j<5;j++){		
		if (i==j){cout<<"0\t";}
		else{cout<<x<<"\t";}
		x++;
	}
}
return 0;}


