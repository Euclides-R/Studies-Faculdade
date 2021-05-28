 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>
 //#include <fstream>
 //#include <stdio.h>
 //#include <stdlib.h>
 //#include <cstdlib>
 //#include <string>
 //#include <math.h>
 //#include <conio.h>
 //#include <windows.h>
 //#include <time.h>


using namespace std;


int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));


int temp, x=0, opcao, max=1, inicio=0, final=0, qtd=0;
int fila[max];


while(x==0){
	
final=max-1;
qtd=final-inicio;

system("cls");

cout<<"\n1 => Enfileirar\n2 => Desenfileirar\n3 => Exibir Início\n4 => Exibir Quantidade\n5 => Esvaziar\n9 => Encerrar\n=> ";
cin>>opcao;

	switch (opcao){

			case 1:
				
				cout<<"\nDigite o Elemento a ser incluído no final da Fila: ";
				cin>>temp;
				fila[max]=temp;
				max++;

				break;

			case 2:
				
				inicio++;

				break;
				
			case 3:
				
				cout<<"Posição Inicial: "<<fila[inicio]<<"\n";
				system("PAUSE");
				

				break;
				
			case 4:
				
				if(qtd==1)cout<<"1 Elemento na fila\n";
				else cout<<qtd<<" Elementos na fila\n";
				system("PAUSE");

				break;
				
			case 5:
				
				inicio=final;

				break;
				
			case 9:

				x=1;

				break;
				
			default:

				cout<<"Opção Incorreta ";
				system("PAUSE");

				break;
				
	}
}

return 0;}

