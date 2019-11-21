#include <iostream>
#include "Suorakaide.h"
#include "Ympyra.h"
using std::cout;
using std::cin;
using std::endl;

int main() {

	//Kuvio k; ei toimi, ei sallittu
	Ympyra y(10);
	Suorakaide s(3, 4);

	Kuvio* y_p = &y;
	Kuvio* s_p = &s;

	
	cout << y.pintaAla() << endl;
	cout << s.pintaAla() << endl;

	cout << y_p -> pintaAla() << endl;
	cout << s_p -> pintaAla() << endl;

	system("pause");
	return 0;
}