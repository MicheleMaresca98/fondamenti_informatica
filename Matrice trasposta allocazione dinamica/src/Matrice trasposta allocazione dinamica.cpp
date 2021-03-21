//============================================================================
// Name        : Matrice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

void riempi (int **matrice,int righe,int colonne);
void stampa (int **matrice,int righe,int colonne);



int main() {

	int **matrice;
	int righe;
	int colonne;

	cout<<"inserisci numero di righe: ";
	cin>>righe;
	cout<<"inserisci numero di colonne: ";
		cin>>colonne;

		matrice=new int *[righe];
		for(size_t i=0;i<righe;i++){
			matrice[i]=new int[colonne];
		}

		riempi(matrice,righe,colonne);
stampa(matrice,righe,colonne);

	return 0;
}
void riempi (int **matrice,int righe,int colonne){
	int inserimento;
	for(size_t i=0;i<righe;i++){
		for(size_t j=0;j<righe;j++){
			cout<<"inserisci in ["<<i<<"]["<<j<<"]: ";
			cin>>inserimento;
		matrice[i][j]=inserimento;
		}
	}
}
void stampa (int **matrice,int righe,int colonne){

}
