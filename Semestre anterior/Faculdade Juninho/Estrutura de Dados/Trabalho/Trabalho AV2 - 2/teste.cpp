#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct DADOS_ALUNO{
	int Cod_Aluno;
	char Nome[100];
	int Turma;
	bool Nocabeca;
	struct DADOS_ALUNO *ptrlink;
}dados;

DADOS_ALUNO* CriarLista9(){
	DADOS_ALUNO *ptrCab;

	ptrCab = new DADOS_ALUNO;
	ptrCab->Nocabeca = true;
	ptrCab->ptrlink = ptrCab;

	return ptrCab;
}

bool VerificarListaVazia(DADOS_ALUNO *ptrCab){
	if(ptrCab->ptrLink == ptrCab)
		return true;
	else
		return false;
}

bool Inserir(DADOS_ALUNO *ptrCab, int CodAluno, char Nome[], int
Turma){
DADOS_ALUNO *ptrNovo;
DADOS_ALUNO *ptrAux;
DADOS_ALUNO *ptrAnterior;
int Pos;

ptrNovo = new DADOS_ALUNO;
if (ptrNovo == NULL){
cout << "Memória insulficiente!";
return false;
}
ptrNovo->CodAluno = CodAluno;
strcpy(ptrNovo->Nome, Nome);
ptrNovo->Turma = Turma;
ptrNovo->ptrLinkProx = NULL;
ptrNovo->ptrLinkAnt = NULL;

if( VerificarListaVazia(ptrCab) ){
// Liga o primeiro nó ao nó cabeça
ptrCab->ptrLinkProx = ptrNovo;
ptrNovo->ptrLinkAnt = ptrCab;
return true;

if (PosInserir == 0)
{
// Localiza o último nó
ptrAux = ptrCab->ptrLinkProx;
while(ptrAux->ptrLinkProx != NULL)
ptrAux = ptrAux->ptrLinkProx;
ptrAux->ptrLinkProx = ptrNovo;
ptrNovo->ptrLinkAnt = ptrAux;
return true;
}

ptrAux = ptrCab;
ptrAnterior = ptrCab;
Pos = 0;

while((Pos < PosInserir) && (ptrAux != NULL)){
ptrAnterior = ptrAux;
ptrAux = ptrAux->ptrLinkProx;
Pos++;
}
if(ptrAux == NULL){
cout << "Posição não encontrada!";
return false;
}
ptrNovo->ptrLinkProx = ptrAux;
ptrNovo->ptrLinkAnt = ptrAnterior;
ptrAnterior->ptrLinkProx = ptrNovo;
ptrAux->ptrLinkAnt = ptrNovo;
return true;
}

int PosicaoNo(DADOS_ALUNO *ptrCab, int CodAluno){
DADOS_ALUNO *ptrAux;
int Posicao;
if( VerificarListaVazia(ptrCab) ){
cout << "Lista vazia!";
return false;
}}

void Exibir(DADOS_ALUNO *ptrCab){
DADOS_ALUNO *ptrAux;
int Ind;
ptrAux = ptrCab->ptrLinkProx;
Ind = 1;
while(ptrAux != NULL){
cout << "Nó: " << Ind << endl;
cout << "Código do Aluno: " << ptrAux->CodAluno << endl;
cout << "Nome: " << ptrAux->Nome << endl;
cout << "Turma: " << ptrAux->Turma << endl;
cout << endl << endl;
Ind++;
ptrAux = ptrAux->ptrLinkProx;
}
}

bool Remover(DADOS_ALUNO *ptrCab, int PosRemover){
DADOS_ALUNO *ptrAux;
DADOS_ALUNO *ptrAnterior;
DADOS_ALUNO *ptrProximo;
int Pos;
if( VerificarListaVazia(ptrCab) ){
cout << "Lista vazia!";
return false;
}
if(PosRemover < 1){
cout << "Código do aluno não encontrado!";
return false;
}
ptrAux = ptrCab;
ptrAnterior = ptrCab;
Pos = 0;
170 • capítulo 5
// Localiza a posição a ser inserida
while((Pos < PosRemover) && (ptrAux != NULL)){
ptrAnterior = ptrAux;
ptrAux = ptrAux->ptrLinkProx;
Pos++;
}
if(ptrAux == NULL){
cout << "Código do aluno não encontrado!";
return false;
}
else
{
ptrProximo = ptrAux->ptrLinkProx;
}
ptrAnterior->ptrLinkProx = ptrProximo;
if(ptrProximo != NULL)
ptrProximo->ptrLinkAnt = ptrAnterior;

delete ptrAux;
}

int main(int argc, char const *argv[]) {

	DADOS_ALUNO *aux, *aux1, *aux2, *aux3;

	return 0;
}
