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

int idade;        //variavel inteiro
int *ptrA, *ptrB; //variável ponteiro para inteiro

idade=25;
ptrA=&idade;  //aponta ptrA para idade
ptrB=ptrA;    //ptrB aponta para o mesmo endereço que ptrA

cout<<"Idade: "<<idade<<endl<<endl;
cout<<"Endereço de ptrA: "<<ptrA<<endl;
cout<<"Valor de ptrA: "<<*ptrA<<endl<<endl;
cout<<"Endereço de ptrB: "<<ptrB<<endl;
cout<<"Valor de ptrB: "<<*ptrB<<endl<<endl;
cout<<"Endereço ptrA: "<<&ptrA<<endl;
cout<<"Endereço ptrB: "<<&ptrB;
return 0;}

