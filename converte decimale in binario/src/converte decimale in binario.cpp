//============================================================================
// Name        : converte.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
int a;
int vettore[8];
int x;
int i=0;
cout<<"inserisci numero in base 10: "<<endl;
cin>>a;
for(size_t j=0;j<8;j++){
	vettore[j]=0;
}
while(a>=2){
	x=a/2;
	vettore[i]=(a%2);
	i++;
	vettore[i]=x;
	a=x;
}

cout<<"numero in base 2: "<<endl;
for(size_t j=8;j>0;j--){
	cout<<vettore[j-1];
}
	return 0;
}
