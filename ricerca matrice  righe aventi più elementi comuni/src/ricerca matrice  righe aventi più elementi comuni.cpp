//=========================================================================================
// Name        : ricerca.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Scrivere un programma atto alla ricerca, in una matrice assegnata,
//               delle righe aventi più elementi comuni per uno stesso indice di colonna.
//==========================================================================================

#include <iostream>
using namespace std;
//void ricerca(int array[][3],const int righe,const int colonne);
int main() {
	const int righe = { 3 };
	const int colonne = { 3 };
	int array[righe][colonne] = { { 3, 3, 3 }, { 1, 3, 3 }, { 1, 4, 2 } };
	//ricerca(array,righe,colonne);
	//return 0;
//}
//void ricerca(int array[][3],const int righe,const int colonne){
	int hold = 0;
	int ricorda;
	for (size_t i = 0; i < righe; i++) {
		int a = 0;
		for (size_t q = 0; q < colonne - 1; q++) {
			if (array[i][q] == array[i][q + 1]) {
				a++;
			}
		}
		if (a > hold) {
			hold = a;
			ricorda = i;
		}
	}
	cout << "la riga che possiede più elementi uguali è la " << ricorda;

	return 0;
}
//}
