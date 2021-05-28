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
 //#include <time.h>

using namespace std;

#define qtd 2

struct Aluno{
	int id;
	char nome[100], status[10];
	float nota[3], media;
}cadastro[qtd];


int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

float nota1=3, nota2=1, nota3=2;
int n;

	float nota[3];
	nota[0]=nota1;
	nota[1]=nota2;
	nota[2]=nota3;
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(nota[i]<nota[j]){
				int controle=nota[i];
				nota[i]=nota[j];
				nota[j]=controle;
				}
			}
		}
	cout<<endl<<nota[0];
	cout<<endl<<nota[1];
	cout<<endl<<nota[2];
	
	float media1, media2;
	media1=nota[0]+nota[1];
	cout<<endl<<media1;
	media2=media1/2;
	cout<<endl<<media2;
	cadastro[n].media=media2;
	cout<<cadastro[n].media;




return 0;}

