//============================================================================
// Name        : Matrici.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


//Programma	per	la somma delle diagonali parallele	a	quella	principali	in	ordine	crescente	e	decrescente
//utilizzando	un	array	bidimensionale	di	interi 7
#include	<iostream>
using	namespace	std;
int	main(){
	const int maxriga=3;
	const int maxcolonna=3;
	const int maxsomma=2*maxriga-1;
	int	matrix[maxriga][maxcolonna]={{1,1,1},{1,1,1},	{1,1,1}};//array matrice	per	l'immissione	dei	voti
	int	somma[maxsomma]	={0};//somma delle diagonali
	int	sommadec[maxsomma]={0}; //	Fase di	calcolo	e visualizzazione dei risultati
	for	(int i=0;i<=maxriga-1;i++) {
		for	(int j=0;j<=maxcolonna-1;j++){
			somma[maxriga-i+j-1]=somma[maxriga-i+j-1]+matrix[i][j];
			sommadec[maxriga-i+j-1]=sommadec[maxriga-i+j-1]+matrix[j][i];
		}
	} for	(int	k=	0;	k	<	maxsomma;	k++)	{
		cout	<<		"La	somma delle	diagonali"<<somma[k]<<endl;
	}
	cout<<endl<<"La somma delle diagonali in senso decrescente"<<endl;
	for	(int k=0;k<maxsomma;k++){
		cout<<"La somma delle diagonali"<<sommadec[k]<<endl;
	}
	return	0;
}
