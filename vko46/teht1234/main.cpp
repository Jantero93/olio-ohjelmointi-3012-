//#include "Koulu.h"
//#include "Koulutusohjelma.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "funktiot.h"
#include <fstream>
#include <vector>
#include <string>
#include "Opettaja.h"

using std::endl;
using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::ofstream;
using std::ifstream;

int main() {
	
	vector <Opettaja> opettajat;
	opettajat.push_back(Opettaja("etunimi", "sukunimi", "osoiteååå", "puhelinnumero", "paljonpalkkaa", "tunnus1", "tietokone"));
	opettajat.push_back(Opettaja("jaska", "jokunen", "tie", "020202ää", "4000", "opettajantunnus", "kone"));
	opettajat.push_back(Opettaja("matti", "kukkaroäää", "tietietie", "040123123", "2393", "tunnus1", "sahko"));

	for (unsigned int i = 0; i < opettajat.size(); i++) {
		opettajat[i].tulosta();
	}

	
	ofstream k_tied;
	k_tied.open("opettaja.csv");

	if (k_tied.is_open()) {
		for (unsigned int i = 0; i < opettajat.size(); i++) {

			k_tied << opettajat[i].annaEtunimi() << ";";
			k_tied << opettajat[i].annaSukunimi() << ";";
			k_tied << opettajat[i].annaOsoite() << ";";
			k_tied << opettajat[i].annaPuhelinnumero() << ";";
			k_tied << opettajat[i].annaPalkka() << ";";
			k_tied << opettajat[i].annaTunnus() << ";";
			k_tied << opettajat[i].annaOpetusala() << endl;

		}
	}

	else {
		cout << "Tiedosto ei aukea!" << endl;
	}
	
	k_tied.close();
		
		
	vector <Opettaja> opettajat_taas;
	ifstream l_tied;

	string etunimi, sukunimi, osoite, puhelinnumero, palkka, tunnus, opetusala;

	l_tied.open("opettaja.csv");

	if (l_tied.is_open()) {

		while (l_tied.peek() != EOF) {

			getline(l_tied, etunimi, ';');
			getline(l_tied, sukunimi, ';');
			getline(l_tied, osoite, ';');
			getline(l_tied, puhelinnumero, ';');
			getline(l_tied, palkka, ';');
			getline(l_tied, tunnus, ';');
			getline(l_tied, opetusala);	

			opettajat_taas.push_back(Opettaja(etunimi, sukunimi, osoite, puhelinnumero, palkka, tunnus, opetusala));			
		}
	}

	else {
		cout << "Tiedosto ei aukea!" << endl;
	}

	l_tied.close();

	for (unsigned int i = 0; i < opettajat_taas.size(); i++) {
		opettajat_taas[i].tulosta();
	}

	system("pause");
	return 0;
}