#include <iostream>
#include <tchar.h>
using namespace std;
int main (){_tsetlocale(LC_ALL,_T("portuguese"));
int vetor[10]={5,10,15,16,20,21,29,10,14,15};
int i, media=0, controle_media=0;
for(i=0;i<10;i++){if (vetor[i]==15)cout<<"Posição "<<i<<" possui o valor 15.\n";}cout<<endl;
for(i=0;i<10;i++){if (vetor[i]%5==0)cout<<"Posição "<<i<<" possui o valor "<<vetor[i]<<" que é multiplo de 5\n";}cout<<endl;
for(i=0;i<10;i++){if (vetor[i]%2!=0){media=media+vetor[i];controle_media++;}}
cout<<"Média aritmética dos valores ímpares é: "<<media/controle_media<<endl<<endl;
cout<<"Novo valor do vetor é: ";
for(i=0;i<10;i++){if (vetor[i]%2!=0){vetor[i]=vetor[i]+1;}cout<<vetor[i];if(i!=9){cout<<",";}}
return 0;}
