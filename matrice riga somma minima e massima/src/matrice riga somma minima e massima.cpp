//==================================================================================
// Name        : matrice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Per un'assegnata matrice determinare la riga
//               con la somma di elementi massima e quella con la somma minima.
//               Effettuare lo scambio tra le righe precedentemente determinate.
//==================================================================================

#include <iostream>
#include <iomanip>
using namespace std;
int somma(int matrice[][3],int righe,int colonne,int a);
void stampa(int matrice[][3],int righe,int colonne);
void scambio(int matrice[][3],int righe,int colonne,int hold,int ric);
int main() {
	const int righe={3};
	const int colonne={3};
	int hold={0};
	int ric={0};
	int minsomma={999};
	int a;
int matrice[righe][colonne]={{7,8,9},{4,5,6},{1,2,3}};
int maxsomma={0};
int s={0};
for(int i=0;i<righe;i++){
	a=i;
	s=somma(matrice,righe,colonne,a);
	if(s>maxsomma){
		hold=i;
		maxsomma=s;
	}
	if(s<minsomma){
			ric=i;
			minsomma=s;
		}

}

cout<<"la riga che presenta la somma massima è "<<hold<<endl;
cout<<"la riga che presenta la somma minima è "<<ric<<endl;

cout<<"matrice iniziale:"<<endl;
stampa(matrice,righe,colonne);
scambio(matrice,righe,colonne,hold,ric);
cout<<endl;
cout<<"matrice dopo modifica:"<<endl;
stampa(matrice,righe,colonne);
	return 0;
}

int somma(int matrice[][3],int righe,int colonne,int a){
	int add=0;
	for(int j=0;j<colonne;j++){
			add=add+matrice[a][j];
		}
	return add;
}

void stampa(int matrice[][3],int righe,int colonne){
	for(size_t i=0;i<righe;i++){
		for(size_t j=0;j<colonne;j++){
			cout<<matrice[i][j]<<setw(4);
		}
	}
}

void scambio(int matrice[][3],int righe,int colonne,int hold,int ric){
	int temp[righe];
	for(size_t i=0;i<righe;i++){
			for(size_t j=0;j<colonne;j++){
				temp[i]=matrice[ric][j];
				matrice[ric][j]=matrice[hold][j];
				matrice[hold][j]=temp[i];
			}
		}


}
