//============================================================================
// Name        : fusione_vettore.cpp
// Author      : Michele Maresca
// Version     :
// Copyright   : Your copyright notice
// Description : Esame Fondamenti Informatica: vettore fusione
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;
void leggi( int *vettA, int dimA, int *vettB , int dimB);
void fondi( int *vettA, int dimA, int *vettB, int dimB);

int main() {
	int *vettA;
	int *vettB;
	int dimA;
	int dimB;

	cout<<"inserisci dimensione del primo vettore:"<<endl;
	cin>>dimA;
	cout<<"inserisci dimensione del secondo vettore:"<<endl;
	cin>>dimB;
	vettA=new int[dimA];
	vettB=new int[dimB];



	leggi( vettA, dimA, vettB, dimB );
    fondi( vettA, dimA, vettB, dimB );
   delete vettA;
    delete vettB;
    return 0;
}


void leggi( int *vettA, int dimA, int *vettB, int dimB)
{
	cout<<"primo vettore:"<<endl;
	for( int i = 0; i < dimA; i++)
	 {
	  cout << "Inserisci il valore del " << i+1 << "° elemento del vettore: ";
	  cin >> vettA[ i ];
	 }
	cout<<endl;
cout<<"secondo vettore:"<<endl;
	for(int i = 0; i < dimB; i++)
	 {
	  cout << "Inserisci il valore del " << i+1 << "° elemento del vettore: ";
	  cin >> vettB[ i ];
     }

	int hold,j;

	for(int i = 0; i < dimA-1; i++ )
	  for( j = 0; j < dimA-1; j++ )
	   if( vettA[ j ] > vettA[ j+1 ] )
	   {
	    hold = vettA[ j ];
	    vettA[ j ] = vettA[ j+1 ];
	    vettA[ j+1 ] = hold;
	   }
	cout<<endl;
//    cout << "Il primo vettore ordinato in senso crescente :"<<endl;
//    for (int i = 0; i < dimA; i++ )
//        cout<< vettA[ i ]<<setw(5);


	for(int i = 0; i < dimB-1; i++ )
		  for( j = dimB-1; j > 0; j-- )
		   if( vettB[ j ] > vettB[ j-1 ] )
		   {
		    hold = vettB[ j ];
		    vettB[ j ] = vettB[ j-1 ];
		    vettB[ j-1 ] = hold;
		   }
	cout<<endl;
//	cout << "Il secondo vettore ordinato in senso decrescente :"<<endl;
//	for (int i = 0; i < dimB; i++ )
//	    cout << vettB[ i ]<<setw(5);
}


void fondi( int *vettA, int dimA, int *vettB, int dimB )
{
	int  j = 0;
	int q = dimB - 1;
	int vettfondi[ dimA + dimB ];
	for (int i = 0; i < dimA + dimB; i++) {
		if (vettA[j] < vettB[q]) {
			vettfondi[i] = vettA[j];
			j++;
		} else {
			vettfondi[i] = vettB[q];
			q--;
		}
	}
	cout<<endl;
	cout << "Il vettore fusione è :" << endl;
	for (int i = 0; i < dimA + dimB; i++)
		cout << vettfondi[i] << setw(5);
	cout << endl;
	cout << "Esso ha cardinalità : " << dimA + dimB;
}
