#include <iostream>
#include <tchar.h>
using namespace std;
int main (){_tsetlocale(LC_ALL,_T("portuguese"));
int vetor[3][5]={{5,10,15,20,25},{7,14,21,28,15},{9,15,27,36,45}};
int i,j, media=0, controle_media=0;
for(i=0;i<3;i++){for(j=0;j<5;j++){if (vetor[i][j]==15)cout<<"Posição "<<i<<"x"<<j<<" possui o valor 15.\n";}}cout<<endl;
for(i=0;i<3;i++){for(j=0;j<5;j++){if (vetor[i][j]%5==0)cout<<"Posição "<<i<<"x"<<j<<" possui o valor "<<vetor[i][j]<<" que é multiplo de 5\n";}}cout<<endl;
for(i=0;i<3;i++){for(j=0;j<5;j++){if (vetor[i][j]%2!=0){media=media+vetor[i][j];controle_media++;}}}
cout<<"Média aritmética dos valores ímpares é: "<<media/controle_media<<endl<<endl;
cout<<"Novo valor da Matriz é: "<<endl<<endl;
for(i=0;i<3;i++){for(j=0;j<5;j++){if (vetor[i][j]%2!=0){vetor[i][j]=vetor[i][j]+1;}
cout<<vetor[i][j];
if ((i==0&&j==4)||(i==1)&&(j==4)||(i==2)&&(j==4));
else cout<<",";
if ((i==0&&j==4)||(i==1&&j==4)||(i==2&&j==4)){cout<<endl;}}}
return 0;}
