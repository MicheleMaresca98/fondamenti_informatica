//============================================================================
// Name        : TargetCoincideProva.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int lunghezza={10};
int Segmento[lunghezza]={0,1,2,3,4,5,6,7,8,9};
double target;
cout<<"inserisci target: "<<endl;
cin>>target;
if(target>=Segmento[0] and target<=Segmento[9])
{
	for(size_t i=0;i<lunghezza;++i){
		if(target==Segmento[i])
		{
			cout<<"il target coincide con la posizione "<<i<<" del segmento."<<endl;
		}else{
			if(target>Segmento[i-1] and target<Segmento[i])
			{
				cout<<"il target si trova tra "<<i-1<<" e "<<i<<endl;
			}
		}
		}

}else{
	cout<<"target non fa parte del segmento."<<endl;
}
	return 0;
}
