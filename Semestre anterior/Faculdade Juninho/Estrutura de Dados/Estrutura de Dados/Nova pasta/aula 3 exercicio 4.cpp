// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <tchar.h>

using namespace std;

float media=0, nota1=0, nota2=0, nota3=0, nota4=0, nota5=0;

void calculaMedia(float nota1, float nota2, float nota3, float nota4, float nota5, float &media){
	media=(nota1+nota2+nota3+nota4+nota5)/5;
	
	
	
	}

int main (int argc, char *argv[]){
_tsetlocale(LC_ALL,_T("portuguese"));

cout<<"Digite a Primeira Nota: ";
cin>>nota1;
cout<<"Digite a Segunda Nota: ";
cin>>nota2;
cout<<"Digite a Terceira Nota: ";
cin>>nota3;
cout<<"Digite a Quarta Nota: ";
cin>>nota4;
cout<<"Digite a Quinta Nota: ";
cin>>nota5;

calculaMedia(nota1, nota2, nota3, nota4, nota5, media);

cout<<endl<<"Média = "<<media;

return 0;}

