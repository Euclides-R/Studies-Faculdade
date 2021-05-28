// Autor: Bruno Nunes Serrano
// Cel: +55 41 99681 6778
#include <iostream>
#include <tchar.h>

using namespace std;

int opcao, vezes, w=1;
float total;
bool b;

aVista(float total){
	float valor=total*0.1;
	float final=total-valor;
	system("cls");
	cout<<"Valor da compra R$"<<total<<endl;
	cout<<"� Vista com 10% de desconto: R$"<<final<<endl;
	cout<<"Desconto de R$"<<valor;
}

duasVezes(float total){
	float valor=total/2;
	system("cls");
	cout<<"Duas parcelas de: R$"<<valor;
	cout<<"Total R$"<<total;
}

parcelado(int vezes, float total){
	float juro=total*0.03*vezes;
	total += juro;
	float parcela=total/vezes;
	cout<<vezes<<" Parcelas de: R$"<<parcela<<endl;
	cout<<"Total com juros R$"<<total;
}

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

cout<<"Valor total da compra? ";
cin>>total;

cout<<"Op��o 1: � Vista com 10% de desconto.\n";
cout<<"Op��o 2: Duas vezes (pre�o de etiqueta).\n";
if (total>100){cout<<"Op��o 3: 3 a 10 vezes com 3% de juros ao m�s.\n";
	b=true;
}

while (w==1){
	cout<<"=> ";
	cin>>opcao;
	if ((b==false)&&(opcao==3)){opcao++;}
switch (opcao){

	case 1:
		aVista(total);
		w=0;
		break;
	
	case 2:
		duasVezes(total);
		w=0;
		break;
		
	case 3:
		cout<<"N�mero de Parcelas: ";
		cin>>vezes;
		parcelado(vezes, total);
		w=0;
		break;
		
	default:
		cout<<"Op��o Inv�lida\n";
		break;	
		}
}

return 0;}

