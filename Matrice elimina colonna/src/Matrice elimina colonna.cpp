//============================================================================
// Name        : Matrice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
int righe,inserimento;
const int colonne={3};
int (*x)[3];

cout<<"inserisci dimensione righe: "<<endl;
cin>>righe;
x=new int[righe][3];
	int colonnadaeliminare;

for(unsigned int i=0;i<righe;i++){
	for(unsigned int j=0;j<colonne;j++){
		cout<<"inserisci valore in ["<<i<<"]["<<j<<"]: "<<endl;
	cin>>inserimento;
	x[i][j]=inserimento;
	}
	}
cout<<endl;
for(unsigned int i=0;i<righe;i++){
	for(unsigned int j=0;j<colonne;j++){
	cout<<x[i][j]<<",";
	}
	}
cout<<endl;
	cout << "inserisci colonna da eliminare:" << endl;
	cin >> colonnadaeliminare;
	while (colonnadaeliminare < 0 || colonnadaeliminare >= colonne) {
		cout << "errore la colonna non è presente reinserire: " << endl;
		cin >> colonnadaeliminare;
	}
	for (unsigned int i = 0; i < righe; i++) {
		for (unsigned int j = 0; j < colonne; j++) {
			if (x[i][j] == x[i][colonnadaeliminare]) {
				x[i][j] = 0;
			}
		}
	}


	for (unsigned int i = 0; i < righe; i++) {
		for(unsigned int j=0;j<colonne;j++){
		//cout << *(x + i) << ",";
		cout << x[i][j] << ",";
		}
	}
return 0;
}
