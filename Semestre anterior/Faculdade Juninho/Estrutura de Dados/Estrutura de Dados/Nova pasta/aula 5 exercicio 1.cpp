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

int A, B, C;
int *ptrA, *ptrB, *ptrC;

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

ptrA=&A;
ptrB=&B;
ptrC=&C;

cout<<"Digite o valor de A: ";
cin>>A;
cout<<"Digite o valor de B: ";
cin>>B;

*ptrC=*ptrB;
*ptrB=*ptrA;
*ptrA=*ptrC;

cout<<"Novo valor de A: "<<A<<endl;
cout<<"Novo valor de B: "<<B<<endl;

return 0;}

