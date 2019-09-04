#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using std::cout; using std::cin; using std::endl;

const int SIZE = 7;

void vertailu(int player[], int lotto[]) {

	cout << "Pelaajan" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << player[i] << " ";
	}

	cout << endl << endl;

	cout << "Koneen" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << lotto[i] << " ";

	}

	cout << endl;
	int osumat = 0;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {

			if (player[i] == lotto[j]) {
				osumat++;
			}
		}
	}
	cout << endl;
	cout << "Osumia oli: " << osumat << endl;
	return;
}

void arpajaiset(int lotto[]) {
	int arpataulu[39];
	//taulukon täyttö
	for (int i = 0; i < 39; i++) {
		arpataulu[i] = i + 1;
	}

	
	//muuttuja "montako numeroa on jaljella mahdollisia numeroita taulukossa"
	int jaljella = 38;

	for (int i = 0; i < SIZE; i++) {
		// arvotaan suoraan jaljella olevien indeksi numero
		int arvontaindeksi = rand() % jaljella;

		lotto[i] = arpataulu[arvontaindeksi];
		arpataulu[arvontaindeksi] = arpataulu[jaljella];


		jaljella--;
	}

	
	return;
}



void numerokysely (int lottonumerot[]) {
	int input;

	cout << "7 kpl, valilta 1 - 39" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "Anna " << i + 1 << " lottonumero: ";
		
		bool tarkistus = true;

		do {	
			tarkistus = true;
			cin >> input;

			//onko samoja laitettu jo
			for (int i = 0; i < SIZE; i++) {

				if (input == lottonumerot[i]) {
					tarkistus = false;
				}
			}

			if (tarkistus == false) {
				cout << "Numero annettu jo" << endl;
			}

			if (input < 0 || input > 39) {
				cout << "Anna numero valilta 1-39" << endl;
			}

		} while (input < 0 || input > 39 || tarkistus == false);
		lottonumerot[i] = input;
	}

	return;
}

int main() {
	//lottotaulukot
	int player[SIZE];
	int lotto[SIZE];
	//seed
	srand(time(0));

	numerokysely(player);
	//kone arpoo
	arpajaiset(lotto);

	//taulukoiden sorttaus min --> max
	std::sort(player, player + SIZE);
	std::sort(lotto, lotto + SIZE);

	cout << endl;
	vertailu(player, lotto);
	
	system("pause");
	return 0;
}