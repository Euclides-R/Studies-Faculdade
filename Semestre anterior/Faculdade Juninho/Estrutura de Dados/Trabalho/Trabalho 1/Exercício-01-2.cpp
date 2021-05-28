#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

void rep(float sea[]) {
	int i;
	for(i=0;i<4;i++){
		for(int j=1;j<4;j++){
			if ((sea[i]==sea[j])&&(i!=j)&&(i<j)){
				cout<<"O vetor "<<i+1<<" e igual ao vetor "<<j+1<<endl;
			}
		}
	}
}


int main() {

	float vetor[4];

	for(int i=0;i<4;i++){
		cout<<"Insira um valor: ";
		cin>>vetor[i];
	}

	rep(vetor);
}
