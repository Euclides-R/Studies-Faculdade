#include <iostream>
#include <tchar.h>
using namespace std;
int main (){_tsetlocale(LC_ALL,_T("portuguese"));
int i, j, vetor[5], controle;
cout<<"Digite os 5 números do vetor\n\n";
for(i=0;i<5;i++){cin>>vetor[i];}
for(i=0;i<5;i++){for(j=i+1;j<5;j++){if (vetor[i] > vetor[j]){controle=vetor[i];vetor[i]=vetor[j];vetor[j]=controle;}}}
cout<<"Números em ordem crescente: \n";
for(i=0;i<5;i++){cout<<vetor[i]<<endl;}
return 0;}

