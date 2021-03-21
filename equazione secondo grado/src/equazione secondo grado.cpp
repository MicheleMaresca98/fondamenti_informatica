//============================================================================
// Name        : equazione.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Equazione Secondo grado
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
void equazione (double a,double b,double c,double &x1 ,double &x2);

int main() {
double a,b,c;
double x1={0};
double x2={0};
cout<<" inserisci i coefficienti"<<endl;
cout<<"a: ";
cin>>a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	equazione(a, b, c, x1, x2);
	cout << "le soluzioni sono:" << endl;
	cout << x1 << " e " << x2 << endl;
	return 0;
}

void equazione(double a, double b, double c, double &x1, double &x2) {
	int Delta;
	Delta = b * b - 4 * a * c;
	if (Delta >= 0) {
		x1 = (-b + sqrt(Delta)) / (2 * a);
		x2 = (-b - sqrt(Delta)) / (2 * a);
	} else
		cout << "impossibile";

}
