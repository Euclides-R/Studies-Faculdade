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
int *ptrA, *ptrB; //vari�vel ponteiro para inteiro

idade=25;
ptrA=&idade;  //aponta ptrA para idade
ptrB=ptrA;    //ptrB aponta para o mesmo endere�o que ptrA

cout<<"Idade: "<<idade<<endl<<endl;
cout<<"Endere�o de ptrA: "<<ptrA<<endl;
cout<<"Valor de ptrA: "<<*ptrA<<endl<<endl;
cout<<"Endere�o de ptrB: "<<ptrB<<endl;
cout<<"Valor de ptrB: "<<*ptrB<<endl<<endl;
cout<<"Endere�o ptrA: "<<&ptrA<<endl;
cout<<"Endere�o ptrB: "<<&ptrB;
return 0;}

