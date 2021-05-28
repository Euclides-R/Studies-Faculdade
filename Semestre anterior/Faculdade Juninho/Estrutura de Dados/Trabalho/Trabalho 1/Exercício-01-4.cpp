#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
using namespace std;

double soma=0;

double somarElementosPares(double vt[], int n) {

  int aux;

  for(int i=0;i<10;i++){
    aux = vt[i];
	  if(aux%2==0){
      soma += vt[i];
    }
	}
  return soma;
}

int main (){

	double vetor[10];

  for(int i =0;i<10;i++){
		vetor[i]=rand()%100;
    cout<<"Valor de cada vetor "<<i+1<<": "<<vetor[i]<<"\n"<<endl;
	}

	somarElementosPares(vetor, 10);

  cout<<"Resultado das somas: "<<soma;

  return 0;

}
