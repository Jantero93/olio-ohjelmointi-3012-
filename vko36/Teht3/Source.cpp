#include <iostream>
using std::cout; using std::cin; using std::endl;
//opiskelijam‰‰r‰
const int SIZE = 50;

int main() {

	int index = 0;
	int kaikkiarvosanat[6]{ 0, 0, 0, 0, 0, 0 };
	int arvosana;

	do {			
		cout << "Anna arvosana: "; 
		cin >> arvosana;

		if (arvosana >= 0 && arvosana <= 5) {
			kaikkiarvosanat[arvosana]++;
		}

	} while (arvosana >= 0);
	
	//Tulostus
	cout << "Arvosana Lkm Histogrammi" << endl;

	for (int i = 0; i < 6; i++) {

		cout << i << " " << kaikkiarvosanat[i] << " ";

		for (int j = 0; j < kaikkiarvosanat[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}

	system("pause");
	EXIT_SUCCESS;
}	