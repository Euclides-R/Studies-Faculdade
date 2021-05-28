 // Autor: Bruno Nunes Serrano
 // Cel: +55 41 99681 6778
 #include <iostream>
 #include <tchar.h>
 #include <fstream>

using namespace std;

#define qtd 5

struct Aluno{
	int id;
	char nome[100];
	string status;
	float nota[3], media;
}cadastro[qtd];

float maioresNotas[qtd];
int idMaioresNotas[qtd];

float calculaMedia(float nota1, float nota2, float nota3){

	float nota[3],media;
	nota[0]=nota1;
	nota[1]=nota2;
	nota[2]=nota3;
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(nota[i]<nota[j]){
				float controle=nota[i];
				nota[i]=nota[j];
				nota[j]=controle;
				}
			}
		}
	media=(nota[0]+nota[1])/2;
	return media;
}

string status(float media, string status){
	if (media>=6)status="APROVADO";
	else status="REPROVADO";
	return status;
}

void maiorNota(float nota[],int n){

		for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(nota[i]<nota[j]){
				float controle=nota[i];
				nota[i]=nota[j];
				nota[j]=controle;
				}
			}
		}
	cout<<"\nMaior Nota foi: "<<nota[0];
	maioresNotas[n]=nota[0];
	idMaioresNotas[n]=n+1;

}

void ordenaMedia(float om[],int id[],int n){
	int cont_id;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(om[i]<om[j]){
				float controle=om[i];
				cont_id=id[i];
				om[i]=om[j];
				id[i]=id[j];
				om[j]=controle;
				id[j]=cont_id;
				}
			}
		}
}

int main (int argc, char *argv[]){

_tsetlocale(LC_ALL,_T("portuguese"));

cout<<"\t***CADASTRO DE ALUNOS***\n";

for(int i=0;i<qtd;i++){
	cadastro[i].id=i+1;
	cout<<"\nID: "<<i+1<<endl;
	cout<<"Nome: ";
	cin.getline(cadastro[i].nome,100);
	cout<<"Nota 1:";
	cin>>cadastro[i].nota[0];
	cout<<"Nota 2:";
	cin>>cadastro[i].nota[1];
	cout<<"Nota 3:";
	cin>>cadastro[i].nota[2];
	cadastro[i].media = calculaMedia(cadastro[i].nota[0],cadastro[i].nota[1],cadastro[i].nota[2]);
	cadastro[i].status = status(cadastro[i].media,cadastro[i].status);
	cin.ignore();
	//system("cls");
}

	cout<<"\n  ***Lista dos Alunos Cadastrados***\n";

for(int i=0;i<qtd;i++){

	cout<<"\nID: "<<cadastro[i].id;
	cout<<"\nNome: "<<cadastro[i].nome;
	cout<<"\nNota 1: "<<cadastro[i].nota[0];
	cout<<"\nNota 2: "<<cadastro[i].nota[1];
	cout<<"\nNota 3: "<<cadastro[i].nota[2];
	maiorNota(cadastro[i].nota,i);
	cout<<"\nM�dia das maiores notas: "<<cadastro[i].media;
	cout<<"\nStatus: "<<cadastro[i].status<<endl;
}

float media[qtd];
int id_media[qtd];
char aluno_media[qtd][100];

for(int i=0;i<qtd;i++){
	media[i]=cadastro[i].media;
	id_media[i]=cadastro[i].id;
}

ordenaMedia(media,id_media,qtd);

cout<<"\nM�dias Ordenadas\n";

for(int i=0;i<qtd;i++){
	cout<<"\nID: "<<id_media[i]<<" M�dia: "<<media[i];
}

cout<<endl<<"\nAlunos Reprovados\n";
for(int i=0;i<qtd;i++){
	if(cadastro[i].media<6.0) cout<<"ID: "<<cadastro[i].id<<" Aluno: "<<cadastro[i].nome<<endl;
	}

//***Cria��o do Arquivo de Texto***

ofstream outfile;
outfile.open("Cadastro_Alunos.txt");
outfile<<"\t***CADASTRO DE ALUNOS***\n";

for(int i=0;i<qtd;i++){

	outfile<<"\nID: "<<cadastro[i].id;
	outfile<<"\nNome: "<<cadastro[i].nome;
	outfile<<"\nNota 1: "<<cadastro[i].nota[0];
	outfile<<"\nNota 2: "<<cadastro[i].nota[1];
	outfile<<"\nNota 3: "<<cadastro[i].nota[2];
	outfile<<"\nMaior Nota: "<<maioresNotas[i];
	outfile<<"\nM�dia das maiores notas: "<<cadastro[i].media;
	outfile<<"\nStatus: "<<cadastro[i].status<<endl;

}
	outfile<<"\nM�dias Ordenadas";
	for(int i=0;i<qtd;i++){
		outfile<<"\nID: "<<id_media[i]<<" M�dia: "<<media[i];
	}

	outfile<<endl<<"\nAlunos Reprovados\n";
	for(int i=0;i<qtd;i++){
		if(cadastro[i].media<6) outfile<<"ID: "<<cadastro[i].id<<" Aluno: "<<cadastro[i].nome<<endl;
	}

outfile.close();

return 0;}
