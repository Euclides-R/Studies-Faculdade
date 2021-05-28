#include <iostream>
using namespace std;

int main (void){

	int i, j, aux, numero[3][3];
	int soma=0;
	int qtde=0;
 
  	for(i=0; i<3; i++){
  		for(j=0; j<3; j++){
        	cout<<"Digite o valor na posicao ["<<i<<"]["<<j<<"]"<<endl;
        	cin>>numero[i][j];
        	
        	if ((numero[i][j])%2==0){
        		soma=soma+numero[i][j];
        		qtde++;
			}
    	}
	}

	cout<<"Calculo da media = "<<soma/qtde<<endl;
	
	for(i=0; i<3; i++){
  		for(j=0; j<3; j++){
  			cout<<"O valor na posicao ["<<i<<"]["<<j<<"] e = "<<numero[i][j]<<endl;
        	}
	}
	

	return 0;
}


