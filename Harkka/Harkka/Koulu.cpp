#include "Koulu.h"
#include <iostream>
using std::cout; using std::cin; using std::endl;


Koulu::Koulu():nimi_()
{
}

Koulu::Koulu(const string& nimi):nimi_(nimi)
{
}


Koulu::~Koulu()
{
}

void Koulu::lisaaKoulutusOhjelma()
{
	//toimii
	cout << "Anna koulutusohjelman nimi: ";
	string koulutusohjelma;
	getline(cin, koulutusohjelma);
	koulutusohjelmat_.push_back(koulutusohjelma);
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
	//toimii
	
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++)
	{
		cout << koulutusohjelmat_[i].annaNimi() << " ";
	}
}

void Koulu::tulostaKoulutusOhjelmienMaara() const
{
	//toimii
	cout << koulutusohjelmat_.size();
}

void Koulu::lisaaKoulutusOhjelmaanOpettaja()
{
	//toimii
	cout << "Anna koulutusohjelman nimi: ";
	string koulutusohjelma;
	getline(cin, koulutusohjelma);
	koulutusohjelmat_.push_back(koulutusohjelma);
	
	Koulutusohjelma temp;
	temp.lisaaOpettaja();
}

void Koulu::tulostaKoulutusOhjelmanOpettajat() const
{

	//toimii
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
		koulutusohjelmat_[i].tulostaOpettajat();
	}
}

void Koulu::lisaaKoulutusOhjelmaanOpiskelija()
{
	//toimii
	cout << "Anna koulutusohjelman nimi: ";
	string koulutusohjelma;
	getline(cin, koulutusohjelma);
	koulutusohjelmat_.push_back(koulutusohjelma);
	
	Koulutusohjelma temp;
	temp.lisaaOpiskelija();
}

void Koulu::tulostaKoulutusOhjelmanOpiskelijat() const
{
	//toimii
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
		koulutusohjelmat_[i].tulostaOpiskelija();
	}
}
