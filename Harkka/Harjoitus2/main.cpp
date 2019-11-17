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

	/* 
	Saman nimisiä olioita mahdollista tehdä --> lukee monta kertaa tiedoston niin tuplaoliot
	*/
		
	do {
		clear();

		try {
			valinta = menu(); /* kokeile menuvalinta*/
		}

		catch (const std::exception &e) { /* korjausliike virheelliseen menu valintaan */
			clear();
			cerr << "Virhe! " << e.what() << endl;
			system("pause");
			clear();
		}

		if (valinta == "1") {
			clear();
			TAMK.lisaaKoulutusOhjelma();
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
			system("pause");
		}

		if (valinta == "7") {
			clear();
			TAMK.tulostaKoulutusOhjelmanOpiskelijat();
			system("pause");
		}

		if (valinta == "8") { /* Poista koulutusohjelma */
			clear();
			TAMK.poistaKoulutusOhjelma();
			system("pause");
		}

		if (valinta == "9") { /* Poista Opettaja */
			clear();
			TAMK.poistaKoulutusOhjelmastaOpettaja();
			system("pause");
		}

		if (valinta == "10") { /* Poista opiskelija */
			clear();
			TAMK.poistaKoulutusOhjelmastaOpiskelija();
			system("pause");
		}

		if (valinta == "11") { /* Paivita koulutusohjelman nimi */
			clear();
			TAMK.paivitaKoulutusOhjelmanNimi();
			system("pause");
		}

		if (valinta == "12") { /* Paivita opettajan tiedot */
			clear();
			TAMK.paivitaOpettajanTiedot();
			system("pause");
		}

		if (valinta == "13") { /* Paivita oppilaan tiedot */
			clear();
			TAMK.paivitaOppilaanTiedot();
			system("pause");
		}
			
		if (valinta == "14") { /* Hae tiedot filusta */
			TAMK.lueTiedot();
			clear();
			cout << "Tiedot haettu!" << endl;
			system("pause");
		}

		if (valinta == "15") { /* Tallenna tiedot filuun */
			TAMK.tallennaTiedot();
			clear();
			cout << "Tiedot tallennettu!" << endl;
			system("pause");
		}		

	} while (valinta != "0");

	return 0;
}