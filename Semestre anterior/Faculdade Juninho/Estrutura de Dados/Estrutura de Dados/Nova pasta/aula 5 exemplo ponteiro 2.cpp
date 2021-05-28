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

using namespace std;

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));


	float Nota[4];
	float *ptrPrimBimestre;
	
	Nota[0]=7.8;
	Nota[1]=9.0;
	Nota[2]=7.0;
	Nota[3]=9.5;
	
	ptrPrimBimestre=&Nota[2]; //Inicializa o vetor
	cout<<"Nota 3° Bimestre: "<<*ptrPrimBimestre<<endl;
	
return 0;}

