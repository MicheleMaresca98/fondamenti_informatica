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
void stampa(int matrice[][3], int righe, int colonne) ;
void trasposta(int matrice[][3], int righe, int colonne) ;

int main() {
	const int righe = { 3 };
	const int colonne = { 3 };
	int matrice[righe][colonne] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	cout << "matrice: " << endl;
	stampa(matrice, righe, colonne);
	trasposta(matrice, righe, colonne);
	//cout << "matrice trasposta: " << endl;
	//stampa(matrice, righe, colonne);
	return 0;
}
void stampa(int matrice[][3], int righe, int colonne) {
	for (unsigned int i = 0; i < righe; i++) {
		cout << "\t";
		for (unsigned int j = 0; j < colonne; j++) {
			cout << matrice[i][j] << setw(4);
		}
		cout << endl;
	}
}

void trasposta(int matrice[][3], int righe, int colonne) {
cout<<"Matrice trasposta: "<<endl;
	//int mem;
	for (unsigned int i = 0; i < righe; i++) {
		cout << "\t";
		for (unsigned int j = 0; j < colonne; j++) {
			//mem = matrice[i][j];
			//matrice[i][j] = matrice[j][i];
			//matrice[j][i] = mem;
			cout << matrice[j][i] << setw(4);
		}
		cout << endl;
	}
}
