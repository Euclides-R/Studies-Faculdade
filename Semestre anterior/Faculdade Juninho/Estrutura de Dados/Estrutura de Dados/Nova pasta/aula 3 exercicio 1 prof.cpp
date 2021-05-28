// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <tchar.h>

using namespace std;

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

int m[5][5], i, j, x=0;

for (i=0;i<5;i++){
	cout<<endl;
	for (j=0;j<5;j++){
	m[i][j]=x;		
		if (i==j){m[i][j]=0;}
		else{m[i][j]=x;}
		cout<<x;
		x++;
	}
}

return 0;}


