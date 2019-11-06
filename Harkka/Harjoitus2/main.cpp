#include "Koulu.h"
#include "Koulutusohjelma.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "funktiot.h"

using namespace std;

int main() {
	Koulu TAMK;
	string valinta;
		
	do {
		clear();
		valinta = menu();

		if (valinta == "1") {
			clear();
			TAMK.lisaaKoulutusOhjelma();
			cout << "Lisatty!" << endl;
			system("pause");
		}

		if (valinta == "2") {
			clear();
			TAMK.tulostaKoulutusOhjelmat();
			system("pause");
		}

		if (valinta == "3") {
			clear();
			TAMK.tulostaKoulutusOhjelmienMaara();
			system("pause");
		}

		if (valinta == "4") {
		clear();
		TAMK.lisaaKoulutusOhjelmaanOpettaja();
		cout << "Lisatty!" << endl;
		system("pause");
		}

		if (valinta == "5") {
			clear();
			TAMK.tulostaKoulutusOhjelmanOpettajat();
			system("pause");
		}

		if (valinta == "6") {
			clear();
			TAMK.lisaaKoulutusOhjelmaanOpiskelija();
			cout << "Lisatty!";
			system("pause");
		}

		if (valinta == "7") {
			clear();
			TAMK.tulostaKoulutusOhjelmanOpiskelijat();
			system("pause");
		}

			
		

	} while (valinta != "0");

	return 0;
}