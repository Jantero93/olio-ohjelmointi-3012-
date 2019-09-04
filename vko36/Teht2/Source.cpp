#include <iostream>
using std::cout; using std::endl;

int main() {
	double taulukko[]{ 7.8, 8.1, 8.05, 7.7, 7.9, 8.21 };

	cout << "Normikulutuslukemat (l/100) ovat:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << i+1 << ". Lukema: " << taulukko[i] << endl;
	}

	system("pause");
	return 0;
}
