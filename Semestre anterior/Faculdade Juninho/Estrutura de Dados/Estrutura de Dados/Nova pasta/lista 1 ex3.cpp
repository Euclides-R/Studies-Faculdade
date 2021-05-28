 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>
 #include <string>

using namespace std;

struct Livro{
	int codigo;
	char titulo[30],autor[30], categoria[20];
};
 
struct Livro cadastro[3];

void listar(Livro v[], int n){

	for (int i=0;i<n;i++){
		cout<<"Código: "<<v[i].codigo<<endl;
		cout<<"Título: "<<v[i].titulo<<endl;
		cout<<"Autor: "<<v[i].autor<<endl;
		cout<<"Categoria: "<<v[i].categoria<<endl<<endl;
		}	
}


int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

cadastro[0].codigo=1;
strcpy(cadastro[0].titulo,"Livro 1");
strcpy(cadastro[0].autor,"Michelangelo");
strcpy(cadastro[0].categoria,"Suspense");

cadastro[1].codigo=2;
strcpy(cadastro[1].titulo,"Livro 2");
strcpy(cadastro[1].autor,"Leonardo");
strcpy(cadastro[1].categoria,"Sci Fi");

cadastro[2].codigo=3;
strcpy(cadastro[2].titulo,"Livro 3");
strcpy(cadastro[2].autor,"Rafael");
strcpy(cadastro[2].categoria,"Romance");

listar(cadastro, 3);

return 0;}

