// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string>

using namespace std;

bool aposentadoria(int nascimento, int ingresso){

	if ((2018-nascimento)>=65||((2018-ingresso)>=30)||((2018-nascimento)>=60)&&((2018-ingresso)>=25)){return true;}
	else {return false;}
	}

int main (int argc, char *argv[]){
_tsetlocale(LC_ALL,_T("portuguese"));

int nascimento, ingresso;

cout<<"Digite o ano de nascimento do empregado: ";
cin>>nascimento;

cout<<"Digite o ano de ingresso do funcionário na empresa: ";
cin>>ingresso;

if (aposentadoria(nascimento, ingresso)){cout<<"Atende os requisitos para requerer aposentadoria";}
else {cout<<"Não atende os requisitos para requerer aposentadoria";}

return 0;}


