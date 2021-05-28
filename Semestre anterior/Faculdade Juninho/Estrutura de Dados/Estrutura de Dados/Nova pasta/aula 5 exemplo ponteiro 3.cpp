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
	float *ptrNota;
	
	Nota[0]=7.8;
	Nota[1]=9.0;
	Nota[2]=7.0;
	Nota[3]=9.5;
	
	ptrNota=Nota; //Inicializa o vetor
	// ptrNota=Nota; é o mesmo que ptrNota=&Nota[0];
	cout<<"Nota 1° Bimestre: "<<ptrNota[0]<<endl;
	cout<<"Nota 2° Bimestre: "<<ptrNota[1]<<endl;
	cout<<"Nota 3° Bimestre: "<<ptrNota[2]<<endl;
	cout<<"Nota 4° Bimestre: "<<ptrNota[3]<<endl;
	
	cout<<"Endereço Nota: "<<&Nota<<endl;
	cout<<"Endereço Ponteiro: "<<&ptrNota<<endl;
	
return 0;}

