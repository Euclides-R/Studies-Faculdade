#include <stdio.h>
#include <stdlib.h>

typedef struct dadosAlunos{
	int informacao;
	struct dadosAlunos *proximo;
}dado;

int main(){
	// Declara��es
	   dado *pLista;
	   int opcao = 0;
	// Fun��es
	   void initLista(dado **pRecebido);
	   void insertLista(dado **pRecebido);
	   void buscaDado(dado **pRecebido);
	   void removerDado(dado **pRecebido);
	   int entradaDado(int *dadoRecebido);
	// Instru��es
	   pLista = (dado *)malloc(sizeof(struct dadosAlunos));
	   initLista(&pLista);
	   for(;;){
	      printf("\n1 - Inserir : ");
	      printf("\n2 - Consultar: ");
	      printf("\n3 - Remover");
	      printf("\n4 - Sair\n");
	      scanf("%d", &opcao);
	      opcao = entradaDado(&opcao);
	      switch(opcao)
	      {
	         case 1:
		    insertLista(&pLista);
		    break;
		 case 2:
		    buscaDado(&pLista);
		    break;
		 case 3:
		   removerDado(&pLista);
		   break;
		 case 4:
		   exit(0);
	     }
	  }
	  return 0;
}

void initLista(dado **pRecebido){
   (*pRecebido)->proximo = NULL;
}

void insertLista(dado **pRecebido){

	   dado *temporario;
	   int valor;

	   printf("\nInforme um Dado a ser Inserido : ");
	   scanf("%d", &valor);
	   temporario = (dado *)malloc(sizeof(dado));
	   temporario->informacao = valor;
	   temporario->proximo = (*pRecebido)->proximo;
	   (*pRecebido)->proximo = temporario;
}

void buscaDado(dado **pRecebido){

	   dado *temporario;

	   if((*pRecebido)->proximo == NULL){
	      printf("Lista Vazia!\n");
	   }
	   else{
	      temporario = (dado *)malloc(sizeof(dado));
	      temporario = (*pRecebido)->proximo;
	      while(temporario != NULL){
	         printf("Valor : %d\n", temporario->informacao);
	         temporario = temporario->proximo;
	      }
	   }
}

void removerDado(dado **pRecebido){

	   dado *temporario;

	   if((*pRecebido)->proximo == NULL){
	      printf("\nLista Vazia!");
	   }
	   else{
	      temporario = (*pRecebido)->proximo;
	      (*pRecebido)->proximo = temporario->proximo;
	      free(temporario);
	   }
}

int entradaDado(int *dadoRecebido){
	   while((*dadoRecebido > 4) || (*dadoRecebido < 1)){
	      printf("Opcao Invalida. Informe novamente : \n");
	      scanf("%d", &(*dadoRecebido));
	   }
	   return(*dadoRecebido);
}
