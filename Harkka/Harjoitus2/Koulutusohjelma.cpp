#include "Koulutusohjelma.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;



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

void Koulutusohjelma::tallennaOpettajat()
{
	ofstream tiedosto;
	tiedosto.open("opettajat.csv", std::ios::app);

	if (tiedosto.is_open()) {
		
		for (unsigned int i = 0; i < opettajat_.size(); i++) {
			tiedosto << annaNimi() << ";"; /* koulutusohjelman nimi */
			tiedosto << opettajat_[i].annaEtunimi() << ";";
			tiedosto << opettajat_[i].annaSukunimi() << ";";
			tiedosto << opettajat_[i].annaOsoite() << ";";
			tiedosto << opettajat_[i].annaPuhelinnumero() << ";";
			tiedosto << opettajat_[i].annaPalkka() << ";";
			tiedosto << opettajat_[i].annaTunnus() << ";";
			tiedosto << opettajat_[i].annaOpetusala() << endl;
		}
	}
	else {
		cout << "Tiedosto ei aukea!" << endl;
	}
	tiedosto.close();

}

void Koulutusohjelma::tallennaOppilaat()
{
	ofstream tiedosto;
	tiedosto.open("oppilaat.csv", std::ios::app);

	if (tiedosto.is_open()) {

		for (unsigned int i = 0; i < opiskelijat_.size(); i++) {
			tiedosto << annaNimi() << ";"; /* koulutusohjelman nimi */
			tiedosto << opiskelijat_[i].annaEtunimi() << ";";
			tiedosto << opiskelijat_[i].annaSukunimi() << ";";
			tiedosto << opiskelijat_[i].annaOsoite() << ";";
			tiedosto << opiskelijat_[i].annaPuhelinnumero() << ";";
			tiedosto << opiskelijat_[i].annaOpiskelijanumero() << endl;
		}
	}
	else {
		cout << "Tiedosto ei aukea!" << endl;
	}
	tiedosto.close();

}

int Koulutusohjelma::montakoOpiskelijaaKoulutusohjelmassa()
{
	int temp = opiskelijat_.size();
	return temp;
}

int Koulutusohjelma::montakoOpettajaaKoulutusohjelmassa()
{
	int temp = opettajat_.size();
	return temp;
}

void Koulutusohjelma::lueOpettajat(string& etunimi, string& sukunimi, string& osoite, string& puhelinnumero, string& palkka, string& tunnus, string& opetusala)
{
	opettajat_.push_back(Opettaja(etunimi, sukunimi, osoite, puhelinnumero, palkka, tunnus, opetusala));
	
}

void Koulutusohjelma::lueOpiskelijat(string& nimi, string& sukunimi, string& osoite, string& puhelinnumero, string& opiskelijanumero)
{
	opiskelijat_.push_back(Opiskelija(nimi, sukunimi, osoite, puhelinnumero, opiskelijanumero));
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

