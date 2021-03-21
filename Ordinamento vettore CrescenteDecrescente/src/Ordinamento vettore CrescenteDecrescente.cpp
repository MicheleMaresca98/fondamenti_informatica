//============================================================================
// Name        : Ordinamento.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Ordinamento di un vettore in modo crescente e decrescente
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;
void ordCresc(int vettore[],int dim);
void ordDecresc(int vettore[],int dim);
void stampa(const int vettore[],int dim);

int main() {
	const int dim={5};
int vettore[dim]={5,4,6,14,10};
cout<<"vettore iniziale: "<<endl;
stampa(vettore,dim);

ordCresc(vettore,dim);
cout<<endl;
cout<<"vettore crescente: "<<endl;
stampa(vettore,dim);
cout<<endl;
ordDecresc(vettore,dim);
cout<<"vettore decrescente: "<<endl;
stampa(vettore,dim);

	return 0;
}



void ordCresc(int vettore[],int dim){
	int temp=0;
	for(size_t pass=0;pass<dim-1 ;pass++){
			for(size_t i=0;i<dim-1;i++){
			if(vettore[i]>vettore[i+1]){
				temp=vettore[i];
				vettore[i]=vettore[i+1];
				vettore[i+1]=temp;
			}
		}
	}
}
void ordDecresc(int vettore[],int dim){
	int temp=0;
		for(size_t pass=0;pass<dim-1;pass++){
				for(size_t i=0;i<dim-1;i++){
				if(vettore[i]<vettore[i+1]){
					temp=vettore[i];
					vettore[i]=vettore[i+1];
					vettore[i+1]=temp;
				}
			}
		}
}
void stampa(const int vettore[],int dim){
	for(size_t i=0;i<dim;i++){
		cout<<vettore[i]<<setw(4);
	}
}




