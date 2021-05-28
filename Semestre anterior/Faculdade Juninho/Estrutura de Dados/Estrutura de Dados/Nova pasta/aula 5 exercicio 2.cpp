 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>
 //#include <stdio.h>
 //#include <stdlib.h>
 //#include <cstdlib>
 //#include <string>
 //#include <math.h>
 //#include <conio.h>
 //#include <windows.h>

using namespace std;

int vetor[5];
int *ptrvetor;
int soma;
int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

ptrvetor=vetor;

	cout<<"Entre com os 5 valores do vetor"<<endl;

for (int i=0;i<5;i++){
	cin>>vetor[i];
}

soma=*ptrvetor+(*ptrvetor+1)+(*ptrvetor+2)+(*ptrvetor+3)+(*ptrvetor+4);

	cout<<"Soma dos valores do vetor: "<<soma;

return 0;}

