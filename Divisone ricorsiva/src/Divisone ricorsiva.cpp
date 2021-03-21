//============================================================================
// Name        : Divisone.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int divisione(int a,int b);

int main() {
//dichiarazioni
	int a,b;
	do{
	cout<<"immetti due interi maggiori di uno : ";
	cin>>a>>b;
	}while(a<0||b<0);
	cout<<"il risultato è: "<<divisione(a,b)<<endl;
	return 0;
}

int divisione(int a,int b)
{
	if(a == 0){
	return 0;
	}else{
		return 1+divisione(a-b,b);
	}

}
