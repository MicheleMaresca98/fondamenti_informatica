//============================================================================
// Name        : Diagonale.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void diagonaleP(int*,const int);
void diagonaleS(int*,const int);
int main() {
	const int SIZE={3};
	int* mPtr;
	int m[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	mPtr = &m[0][0]; //significa inizializzare il puntatore all'indirizzo
	// dell'elemento nella prima posizione dell'array
	diagonaleP(mPtr,SIZE);
	diagonaleS(mPtr,SIZE);
	return 0;
}
void diagonaleP(int* mPtr,const int SIZE)
{unsigned int q={0};
	for(unsigned int i=0;i<SIZE;i++)
	{
	cout<<*(mPtr+q)<<endl;
	q=q+(SIZE+1);
}
}

void diagonaleS(int* mPtr,const int SIZE)
{unsigned int q={SIZE-1};
	for(unsigned int i=0;i<SIZE;i++)
	{
	cout<<*(mPtr+q)<<endl;
	q=q+(SIZE-1);
}
}
