//========================================================================================
// Name        : Trasposta.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Trasposta di una matrice secondo la diagonale principale e secondaria
//=========================================================================================

#include <iostream>
#include <iomanip>
using namespace std;
void stampa(int matrice[][3], int righe, int colonne);
void trasposta(int matrice[][3], int righe, int colonne);

void trasposta2(int matrice[][3], int righe, int colonne);
int main() {
	const int righe = { 3 };
	const int colonne = { 3 };
	int matrice[righe][colonne] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int matrice2[righe][colonne] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	cout << "Matrice prima della trasposta: " << endl;
	stampa(matrice, righe, colonne);
	trasposta(matrice, righe, colonne);
	cout << "Matrice dopo la trasposta: " << endl;
	stampa(matrice, righe, colonne);

	trasposta2(matrice2, righe, colonne);
	cout << "Matrice dopo la trasposta secondaria: " << endl;
	stampa(matrice2, righe, colonne);
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
	int mem;
	for (unsigned int i = 0; i < righe - 1; i++) {
		for (unsigned int j = i + 1; j < colonne; j++) {
			mem = matrice[i][j];
			matrice[i][j] = matrice[j][i];
			matrice[j][i] = mem;
		}
	}
}

void trasposta2(int matrice[][3], int righe, int colonne) {
	int i, j, mem, x, y, h;
	h = colonne;
	y = righe;
	for (i = 0; i < righe - 1; i++) {
		x = i;
		y = y - 1;
		for (j = h - 2; j >= 0; j--) {
			x = x + 1;
			mem = matrice[i][j];
			matrice[i][j] = matrice[x][y];
			matrice[x][y] = mem;
		}
		h = h - 1;
	}
}


