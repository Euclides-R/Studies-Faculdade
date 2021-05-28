#include <iostream>
#include <tchar.h>
#include <fstream>
#include <locale.h>

using namespace std;

#define qtd 5

struct Aluno{
	int id;
	char nome[100];
	string status;
	float nota[3], media;
} estudante[qtd];

float mn[qtd];
int idmn[qtd];

float calmedia(float nota1, float nota2, float nota3){
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
	media=(nota[0]+nota[1]+nota[2])/3;
	return media;
}

string status(float media, string status){
	if (media>=6){
		status="APROVADO";
	}
	else {
		status="REPROVADO";
	}
	return status;
}

void mNota(float nota[], int n){
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
	mn[n]=nota[0];
	idmn[n]=n+1;
}

void ordMedia(float om[],int id[],int n){
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


int main(int argc, char *argv[]){

	_tsetlocale(LC_ALL,_T("portuguese"));

	cout<<"<==============CADASTRO DE ALUNOS==============>"<<endl;

	for(int j=0;j<qtd;j++){
		estudante[j].id=j+1.;
		cout<<"\nID: "<<j+1<<endl;
		cout<<"Nome: ";
		cin.getline(estudante[j].nome,100);
		cout<<"Nota 1: ";
		cin>>estudante[j].nota[0];
		cout<<"Nota 2: ";
		cin>>estudante[j].nota[1];
		cout<<"Nota 3: ";
		cin>>estudante[j].nota[2];
		estudante[j].media = calmedia(estudante[j].nota[0], estudante[j].nota[1], estudante[j].nota[2]);
		estudante[j].status = status(estudante[j].media, estudante[j].status);
		cin.ignore();
	}

	cout<<"<==============Alunos Cadastrados==============>"<<endl;

	for(int i=0;i<qtd;i++){
		cout<<"\nID: "<<estudante[i].id;
		cout<<"\nNome: "<<estudante[i].nome;
		cout<<"\nNota 1: "<<estudante[i].nota[0];
		cout<<"\nNota 2: "<<estudante[i].nota[1];
		cout<<"\nNota 3: "<<estudante[i].nota[2];
		mNota(estudante[i].nota,i);
		cout<<"\nMédia das maiores notas: "<<estudante[i].media;
		cout<<"\nStatus: "<<estudante[i].status<<endl;
	}

	float media[qtd];
	int idm[qtd];
	char alunom[qtd][100];

	for (int i=0;i<qtd;i++){
		media[i]=estudante[i].media;
		idm[i]=estudante[i].id;
	}

	ordMedia(media,idm,qtd);

	for (int i=0;i<qtd;i++){
		cout<<"\nID: "<<idm[i]<<" Média: "<<media[i];
	}

	cout<<endl<<"\nAlunos Reprovados\n";
	for(int i=0;i<qtd;i++){
		if(estudante[i].media<6.0) cout<<"ID: "<<estudante[i].id<<" Aluno: "<<estudante[i].nome<<endl;
		}

		ofstream outfile;
		outfile.open("Cadastro_Alunos.txt");
		outfile<<"\t***CADASTRO DE ALUNOS***\n";

		for(int i=0;i<qtd;i++){
			outfile<<"\nID: "<<estudante[i].id;
			outfile<<"\nNome: "<<estudante[i].nome;
			outfile<<"\nNota 1: "<<estudante[i].nota[0];
			outfile<<"\nNota 2: "<<estudante[i].nota[1];
			outfile<<"\nNota 3: "<<estudante[i].nota[2];
			outfile<<"\nMaior Nota: "<<mNota[i];
			outfile<<"\nMédia das maiores notas: "<<estudante[i].media;
			outfile<<"\nStatus: "<<estudante[i].status<<endl;
		}
		outfile<<"\nMédias Ordenadas";
		for (int i=0;i<qtd;i++){
			cout<<"\nID: "<<idm[i]<<" Média: "<<media[i];
		}

		cout<<endl<<"\nAlunos Reprovados\n";
		for(int i=0;i<qtd;i++){
			if(estudante[i].media<6.0) cout<<"ID: "<<estudante[i].id<<" Aluno: "<<estudante[i].nome<<endl;
		}
		outfile.close();
return 0;
}
