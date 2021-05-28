// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string>

using namespace std;
char letra[5];

void inverte(char letra[]){
	
	char cont[5];	
	int j=4;
	for (int i=0;i>=4;i++){
			cont[j]=letra[i];
			j--;
		}
		letra=cont;
		
}

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

cout<<"Digite 5 caractéres: ";
cin>>letra[0];
cin>>letra[1];
cin>>letra[2];
cin>>letra[3];
cin>>letra[4];

inverte (letra);
cout<<letra;



return 0;}

