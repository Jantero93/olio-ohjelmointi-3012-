#include "Koulutusohjelma.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;



Koulutusohjelma::Koulutusohjelma():nimi_(),
opiskelijat_(), opettajat_()
{
}

Koulutusohjelma::Koulutusohjelma(const string& nimi):nimi_(nimi),
opiskelijat_(), opettajat_()
{
}


Koulutusohjelma::~Koulutusohjelma()
{
}

string Koulutusohjelma::annaNimi() const
{
	return nimi_;
}

void Koulutusohjelma::asetaNimi(const string & nimi)
{
	nimi_ = nimi;
}

void Koulutusohjelma::lisaaOpettaja()
{
	Opettaja temp;
	temp.kysyTiedot();
	opettajat_.push_back(temp);
}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija temp;
	temp.kysyTiedot();
	opiskelijat_.push_back(temp);
}

void Koulutusohjelma::tulostaOpettajat() const
{
	for (unsigned int i = 0; i < opettajat_.size(); i++)
	{
		opettajat_[i].tulosta();
	}
}

void Koulutusohjelma::tulostaOpiskelija() const
{
	for (unsigned int i = 0; i < opiskelijat_.size(); i++) {
		opiskelijat_[i].tulosta();
	}
}

void Koulutusohjelma::poistaOpiskelija()
{
	int indeksi = etsiOppilas();

	if (indeksi == -1)
		cout << "Opiskelijaa ei loytynyt" << endl;

	else {
		opiskelijat_.erase(opiskelijat_.begin() + indeksi);
		cout << "Opiskelija poistettu!" << endl;
	}

}

void Koulutusohjelma::poistaOpettaja()
{
	int indeksi = etsiOpettaja();

	if (indeksi == -1) {
		cout << "Opettajaa ei loytynyt" << endl;
	}

	else {
		opettajat_.erase(opettajat_.begin() + indeksi);
		cout << "Opettaja poistettu!" << endl;
	}

}

void Koulutusohjelma::paivitaOpiskelija()
{
	int indeksi = etsiOppilas();

	if (indeksi == -1) {
		cout << "Opiskelijaa ei loytynyt" << endl;
	}

	else {
		cout << "Anna uudet tiedot" << endl;
		opiskelijat_[indeksi].kysyTiedot();
	}
}

void Koulutusohjelma::paivitaOpettaja()
{
	int indeksi = etsiOpettaja();

	if (indeksi == -1) {
		cout << "Opettajaa ei loytynyt" << endl;
	}

	else {
		cout << "Anna uudet tiedot" << endl;
		opettajat_[indeksi].kysyTiedot();
	}
	
}

//etsintä rutiini
int Koulutusohjelma::etsiOpettaja() const
{
	string temp;
	cout << "Anna opettajan tunnus: ";
	getline(cin, temp);

	for (unsigned int i = 0; i < opettajat_.size(); i++) {

		if (temp == opettajat_[i].annaTunnus()) {
			return i;
		}
	}

	return -1; /* Ei löytynyt, palauta -1 */
}

int Koulutusohjelma::etsiOppilas() const
{
	string temp;
	cout << "Anna opiskelijanumero ";
	getline(cin, temp);

	for (unsigned int i = 0; i < opiskelijat_.size(); i++) {

		if (temp == opiskelijat_[i].annaOpiskelijanumero())
			return i;
	}

	return -1; /* Ei löytynyt, palauta -1 */
}

