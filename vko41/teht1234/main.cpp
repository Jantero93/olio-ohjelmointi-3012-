#include "Koulu.h"
#include "Koulutusohjelma.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "funktiot.h"

using namespace std;

int main() {
	Koulu TAMK;
	int valinta;
		
	do {
		clear();
		valinta = menu();
		
		switch (valinta)
		{

		case 1:
				clear();
				TAMK.lisaaKoulutusOhjelma();
				cout << "Lisatty!" << endl;
				tauko();
				break;

		case 2:
				clear();
				TAMK.tulostaKoulutusOhjelmat();
				system("pause");
				break;

		case 3:
				clear();
				TAMK.tulostaKoulutusOhjelmienMaara();
				system("pause");
				break;

		case 4:
				clear();
				TAMK.lisaaKoulutusOhjelmaanOpettaja();
				cout << "Lisatty!" << endl;
				tauko();
				break;

		case 5:
				clear();
				TAMK.tulostaKoulutusOhjelmanOpettajat();
				tauko();
				break;

		case 6:
				clear();
				TAMK.lisaaKoulutusOhjelmaanOpiskelija();
				cout << "Lisatty!";
				break;

		case 7:
				clear();
				TAMK.tulostaKoulutusOhjelmanOpiskelijat();
				system("pause");
				break;

			
		}

	} while (valinta != 0);

	return 0;
}