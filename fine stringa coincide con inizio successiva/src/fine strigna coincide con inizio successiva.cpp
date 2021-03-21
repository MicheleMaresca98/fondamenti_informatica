//===================================================================================================================
// Name        : fine.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Si realizzi un programma nel linguaggio C che, data da standard input una sequenza di 12 stringhe,
//               facendo uso di una funzione di nome f_stringhe, calcoli il sottoinsieme di stringhe date tali che:
//               – il primo carattere inizia con l’ultimo carattere dell’ultima stringa sequenza; e
//               – la lunghezza sia minore delll’ultima stringa della sequenza
//               Il programma, una volta terminata la chiamata di f_stringhe, dovra` stampare la sequenza data e
//               il sottoinsieme ottenuto.
//====================================================================================================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void riempi(string sequenza[], int dim);
void riemp2(string seq1[], string seq2[], int dim);
void stampa(string sequenza[], int dim);
int main() {
	const int dim = { 12 };
	string seq1[dim];
	string seq2[dim];

	riempi(seq1, dim);
	cout << "vettore:" << endl;
	stampa(seq1, dim);
	riemp2(seq1, seq2, dim);
	cout << "sotto vettore:" << endl;
	stampa(seq2, dim);

	return 0;
}

void riempi(string sequenza[], int dim) {
	string inserimento;
	for (size_t i = 0; i < dim; i++) {
		cout << "inserisci " << i + 1<<" : ";
		cin >> inserimento;
		sequenza[i] = inserimento;
	}
}
void stampa(string sequenza[], int dim) {
	for (size_t i = 0; i < dim; i++) {
		cout << sequenza[i] << setw(4);
	}
	cout<<endl;
}

void riemp2(string seq1[], string seq2[], int dim) {
	for (size_t i = 0; i < dim-1; i++) {
		if ((seq1[i].back()) == (seq1[i + 1].front())
				and (seq1[i].length() > seq1[i + 1].length())) {
			seq2[i] = seq1[i + 1];
		}
	}
}

