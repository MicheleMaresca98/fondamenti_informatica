//============================================================================
// Name        : Vettore.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;
void assegnamento(int *aPtr,int *a2Ptr, int DIM);
void stampa(int *a2Ptr, int DIM);
int main() {
int *aPtr;
int *a2Ptr;
const int DIM={3};
int array[DIM]={4,5,6};
int array2[DIM];
aPtr= &array[0];
a2Ptr= &array2[0];
assegnamento(aPtr,a2Ptr,DIM);

cout<<"vettore2: "<<endl;
stampa(a2Ptr,DIM);


	return 0;
}
void assegnamento(int *aPtr,int *a2Ptr, int DIM){
	for(size_t i=0;i<DIM;i++){
	a2Ptr[i]=aPtr[i];
	}
}
void stampa(int *a2Ptr, int DIM)
{
	for(size_t i=0;i<DIM;i++){
			cout<<a2Ptr[i]<<setw(4);
		}
}
