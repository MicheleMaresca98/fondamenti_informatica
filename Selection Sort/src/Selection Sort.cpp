//============================================================================
// Name        : Selection.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<array>
using namespace std;



const size_t n={10};
int data[n]={12,8,6,10,16,4,18,11,14,2};

void selectionsort(int data[], int n) ;

int main() {
selectionsort(data,n);
return 0;
}

void selectionsort(int data[], int n){
  int i, j, temp;
  int p = 0;
  //indice del minimo.
  //(consideriamo inizialmente il primo elemento come fosse il minimo)

  for (i = 1; i < n; i++)
    if (data[p] > data[i]) p = i;

  temp = data[0];
  data[0] = data[p];
  data[p] = temp;

  //abbiamo messo il minimo nella prima posizione a[0].
  //In questo modo lo useremo come sentinella (per non sforare l'array a sinistra).

  for(i = 2; i < n; i++){
	//partiamo dal 2 indice poichè non c'è bisogno di confrontare
	  //inizialmente già con a[0]
	  //che sappiamo essere il minimo.
    j = i;
    while(data[j] < data[j-1]){
       temp = data[j];
       data[j] = data[j-1];
       data[j-1] = temp;
       j--;
       }
  }
  for(i = 0; i < n; i++){
	  cout<<"il vettore in data["<<i<<"] è:"<<data[i]<<endl;
  }
}
