#include <iostream>
// trabajo 3 

using namespace std;

int main () {
	double a;
	double b;
	double c;
	double x;
	cout << "a es igual a";
	cin >> a;
	cout << "b es igual a";
	cin >> b;
	cout << "c es igual a";
	cin >> c;
	cout << "asignar un numero para x";
	cin >> x;
	
	double funcion= a * (x * x) + b * x + c;
	
	cout << "el resutado de la cuadratica es = " << funcion << endl;
}

// asignar a,b,c en la funcion cuadratica
