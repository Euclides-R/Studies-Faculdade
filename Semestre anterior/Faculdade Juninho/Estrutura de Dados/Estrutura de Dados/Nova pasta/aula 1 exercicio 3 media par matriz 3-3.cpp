#include <iostream>
#include <tchar.h>
using namespace std;
int main (){_tsetlocale(LC_ALL,_T("portuguese"));
int i, j, matriz[3][3], controle=0, soma=0, media=0;
cout<<"Digite os valores da matriz 3x3\n\n";
for(i=0;i<3;i++){for(j=0;j<3;j++){cin>>matriz[i][j];}}
for(i=0;i<3;i++){for(j=0;j<3;j++){if(matriz[i][j]%2==0){controle++;soma=soma+matriz[i][j];}}}
media=soma/controle;
cout<<"A média dos valores pares é: "<<media;
return 0;}
