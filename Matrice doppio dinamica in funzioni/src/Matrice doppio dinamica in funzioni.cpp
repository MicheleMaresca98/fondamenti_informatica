//============================================================================
// Name        : Matrice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include  <iomanip>
using namespace std;
void riempi(int **matrice,int righe,int colonne);
void stampa(int **matrice,int righe,int colonne);
void media(int **matrice,int righe,int colonne);
void ricerca(int **matrice,int righe,int colonne,int key);
int main() {
int **matrice;
int righe,colonne,key;
 cout<<"inserisci numero righe: ";
 cin>>righe;
 cout<<"inserisci numero colonne: ";
 cin>>colonne;
 matrice= new int *[righe];
 for(size_t i=0;i<righe;i++){
	 matrice[i]=new int[colonne];
 }
 riempi(matrice,righe,colonne);
 stampa(matrice,righe,colonne);
 cout<<endl;
 media(matrice,righe,colonne);
 cout<<endl;
 cout<<"inserisci valore da ricercare: ";
 cin>>key;
 ricerca(matrice,righe,colonne,key);
	return 0;
}

void riempi(int **matrice,int righe,int colonne){
	int inserimento;
	for(size_t i=0;i<righe;i++){
		for(size_t j=0;j<colonne;j++){
			cout<<"inserisci in ["<<i<<"]["<<j<<"]: ";
			cin>>inserimento;
			matrice[i][j]=inserimento;
		}
	}
}
void stampa(int **matrice,int righe,int colonne){
	for(size_t i=0;i<righe;i++){
			for(size_t j=0;j<colonne;j++){
				cout<<setw(4)<<matrice[i][j];
			}
		}
}
void media(int **matrice,int righe,int colonne){
	int somma={0};
	int numero={0};
	int media;
	for(size_t i=0;i<righe;i++){
			for(size_t j=0;j<colonne;j++){
				somma=somma+matrice[i][j];
				numero++;
			}
		}
	media=somma/numero;
	cout<<"la media della matrice è: ";
	cout<<media;
}
void ricerca(int **matrice,int righe,int colonne,int key){
	int a=0;
	for(size_t i=0;i<righe;i++){
			for(size_t j=0;j<colonne;j++){
				if(key==matrice[i][j]){
					cout<<"valore trovato in ["<<i<<"]["<<j<<"] "<<endl;
					a=1;
				}
			}

		}
	if(a==0){
					cout<<"il valore non è presente"<<endl;
				}
}

