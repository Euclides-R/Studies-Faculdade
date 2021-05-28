#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

typedef struct DADOS_ALUNO{
	int info;
	struct DADOS_ALUNO *item;
}dados;

int main(){
	DADOS_ALUNO *vlr, *vlr1, *vlr2, *aux;
	vlr = new DADOS_ALUNO;
	
	vlr->item=NULL;
	
	vlr1 = new DADOS_ALUNO;
	vlr1->info = 10;
	vlr1->item = NULL;
	
	vlr->item = vlr1;
	
	vlr1->item=vlr2;
	
	aux = vlr->item;
	
	cout<<aux->info;
}

