//============================================================================
// Name        : Moltiplicazione.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int mystery(int,int); //protipo fi funzione per moltiplicare due interi maggiori dfi 1

int main() { //programma principale coordinatore
	int x={0};
	int y={0};
	do{
	cout<<"immetti due interi maggiori di uno : ";

	cin>>x>>y;
}while(x<0||y<0);
	cout<<"il risultato è: "<<mystery(x,y)<<endl;
	return 0;
}

int mystery(int a, int b){ //dichiarazione funzione (a,b parametri formali)
if(1==b){                 //caso base
	return a;
}else{
	return a+mystery(a,b-1); //asserto induttivo
}
}
