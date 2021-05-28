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
	cout<<"À Vista com 10% de desconto: R$"<<final<<endl;
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

cout<<"Opção 1: À Vista com 10% de desconto.\n";
cout<<"Opção 2: Duas vezes (preço de etiqueta).\n";
if (total>100){cout<<"Opção 3: 3 a 10 vezes com 3% de juros ao mês.\n";
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
		cout<<"Número de Parcelas: ";
		cin>>vezes;
		parcelado(vezes, total);
		w=0;
		break;
		
	default:
		cout<<"Opção Inválida\n";
		break;	
		}
}

return 0;}

