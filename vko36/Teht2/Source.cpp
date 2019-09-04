#include <iostream>
using std::cout; using std::endl;

int main() {
	double kulutustaulukko[]{ 7.8, 8.1, 8.05, 7.7, 7.9, 8.21 };

	cout << "Normikulutuslukemat (l/100) ovat:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << i+1 << ". Lukema: " << kulutustaulukko[i] << endl;
	}

	system("pause");
	return 0;
}
