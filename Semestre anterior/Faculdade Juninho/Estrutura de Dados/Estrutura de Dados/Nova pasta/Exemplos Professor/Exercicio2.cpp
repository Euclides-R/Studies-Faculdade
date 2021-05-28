#include <iostream>
using namespace std;

int main (void){

	int i, j, aux, numero[5];
 
  	for(i=0; i<5; i++){
        cout<<"Digite o valor "<<i+1<<": ";
        cin>>numero[i];
    }

    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
    	    if(numero[i] > numero[j]){
        		aux = numero[i];
                numero[i] = numero[j];
                numero[j] = aux;
            }
        }
	}
    
	cout<<"Ordenado:\n";
	for(i=0;i<=4;i++){
		cout<<numero[i]<<endl;
    }     
	
	return 0;
}


