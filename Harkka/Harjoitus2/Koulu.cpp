#include "Koulu.h"
#include <iostream>
using std::cout; using std::cin; using std::endl;


Koulu::Koulu() :nimi_(), koulutusohjelmat_()
{
}

Koulu::Koulu(const string& nimi):nimi_(nimi), koulutusohjelmat_()
{
}


Koulu::~Koulu()
{
}

void Koulu::lisaaKoulutusOhjelma()
{	
	Koulutusohjelma temp;
	string nimi;
	cout << "Anna koulutusohjelman nimi: ";
	getline(cin, nimi);	
	
	temp.asetaNimi(nimi);
	koulutusohjelmat_.push_back(temp);
	cout << "Lisatty!" << endl;
	
	//koulutusohjelmat_.push_back(Koulutusohjelma(nimi));
}

string Koulu::annaNimi() const
{
	return nimi_;
}

void Koulu::asetaNimi(const string & nimi)
{
	nimi_ = nimi;
}

void Koulu::tulostaKoulutusOhjelmat() const
{	
	string temp;
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++)
	{
	temp = koulutusohjelmat_[i].annaNimi();
	cout << temp << endl;
	}
}

void Koulu::tulostaKoulutusOhjelmienMaara() const
{	
	cout << "Koulutusohjelmien maara: ";
	cout << koulutusohjelmat_.size() << std::endl;
}

void Koulu::lisaaKoulutusOhjelmaanOpettaja()
{
	
	int indeksi = etsiKoulutusohjelma();
	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].lisaaOpettaja();
		cout << "Lisatty!" << endl;
	}

}

void Koulu::tulostaKoulutusOhjelmanOpettajat() const
{

	int indeksi = etsiKoulutusohjelma();
	if (indeksi ==	-1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].tulostaOpettajat();
	}
	
}

void Koulu::tulostaKoulutusOhjelmanOpiskelijat() const
{

	int indeksi = etsiKoulutusohjelma();
	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].tulostaOpiskelija();
	}

}


void Koulu::lisaaKoulutusOhjelmaanOpiskelija()
{

	int indeksi = etsiKoulutusohjelma();
	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].lisaaOpiskelija();
		cout << "Lisatty!" << endl;
	}

}

void Koulu::poistaKoulutusOhjelma() 
{
	int indeksi = etsiKoulutusohjelma();

	if (indeksi == -1)
		cout << "Koulutusohjelmaa ei loytynyt" << endl;

	else {
		koulutusohjelmat_.erase(koulutusohjelmat_.begin() + indeksi);
		cout << "Poistettu!" << endl;
	}
}

void Koulu::poistaKoulutusOhjelmastaOpettaja(){
	int indeksi = etsiKoulutusohjelma();

	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {		
		koulutusohjelmat_[indeksi].poistaOpettaja();
	}
	
}

void Koulu::poistaKoulutusOhjelmastaOpiskelija()
{
	int indeksi = etsiKoulutusohjelma();

	if (indeksi == -1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].poistaOpiskelija();
	
	}
}


//etsintä rutiini
int Koulu::etsiKoulutusohjelma() const
{
	string temp;
	cout << "Etsi koulutusohjelma: ";
	getline(cin, temp);

	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {

		if (temp == koulutusohjelmat_[i].annaNimi()) 
			return i;
	}

	return -1; /* Ei löytynyt, palauta -1 */
}




