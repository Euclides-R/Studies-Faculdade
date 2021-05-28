// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778

#include <iostream>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;

const int QTDE=5;

struct lista{
    int id;
    string nome;
};

void bubbleSort(lista vetor[]){

    int i, j, temp;
    int n=5;
    for(i=1;i<n;i++){
        for(j=0;j<(n-1);++j){
            if(vetor[j].id > vetor[j+1].id){
                temp=vetor[j].id;
                vetor[j].id = vetor[j+1].id;
                vetor[j+1].id = temp;
            }
        }
    }
}

int pesquisaBinariaId(lista vetor[], int QTDE, int valorBusca){

    int inf=0;
    int sup=QTDE-1;
    int meio;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (valorBusca==vetor[meio].id){return meio;}
        else if (valorBusca<vetor[meio].id){sup=meio-1;}
        else {inf=meio+1;}
        }
    return -1;
    }
    
int pesquisaBinariaString(lista vetor[], int QTDE, int valorBusca){

    int inf=0;
    int sup=QTDE-1;
    int meio;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (valorBusca==vetor[meio].id){return meio;}
        else if (valorBusca<vetor[meio].id){sup=meio-1;}
        else {inf=meio+1;}
        }
    return -1;
    }    

void print(lista vetor[]){
    for (int i=0;i<QTDE;i++){
        cout<<vetor[i].id<<"\t";
    }
    cout<<endl;
}

int main (int argc, char *argv[]){

 _tsetlocale(LC_ALL,_T("portuguese"));

    int busca;

    struct lista lista1[5];

    lista1[0].id=5;
    lista1[1].id=7;
    lista1[2].id=2;
    lista1[3].id=11;
    lista1[4].id=6;

    lista1[0].nome="José";
    lista1[1].nome="Maria";
    lista1[2].nome="Carlos";
    lista1[3].nome="Ana";
	lista1[4].nome="Bia";

    
    bubbleSort(lista1);

    print(lista1);
    cout << "Digite o valor de busca" << endl;
    cin >> busca;
    cout << "A posição do número é: " << pesquisaBinariaId(lista1, QTDE, busca) << endl;

    return 0;
}
