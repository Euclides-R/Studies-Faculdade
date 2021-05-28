// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string>

using namespace std;


void Alterar(int&);
int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

int idade=20;
Alterar(idade);
cout<<idade;
}

void Alterar(int &paramIdade){
	paramIdade=100;
}

