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
	
	string nimi;
	cout << "Anna lisattavan koulutusohjelman nimi: ";
	getline(cin, nimi);
	Koulutusohjelma temp;
	temp.asetaNimi(nimi);
	koulutusohjelmat_.push_back(temp);
	/* Tai: koulutusohjelmat_.push_back(Koulutusohjelma(nimi)) */
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
	//string temp;
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++)
	{
	/*temp = */	koulutusohjelmat_[i].annaNimi();
	//	cout << temp << " ";
	}
}

void Koulu::tulostaKoulutusOhjelmienMaara() const
{	
	cout << koulutusohjelmat_.size() << std::endl;
}

void Koulu::lisaaKoulutusOhjelmaanOpettaja()
{
	/*
	string tempNimi;
	getline(cin, tempNimi);

	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++)
	{
		if (tempNimi == koulutusohjelmat_[i].annaNimi())
		{
			koulutusohjelmat_[i].lisaaOpettaja();
			break;
		}
		else
		{
			cout << "Ei ole\n";
		}
		break;
	}
	*/

	string temp;
	cout << "Lisaa opettaja koulutusohjelmaan ";
	getline(cin, temp);

	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {

		if (temp == koulutusohjelmat_[i].annaNimi()) {
			koulutusohjelmat_[i].lisaaOpettaja();
		}

	}
}

void Koulu::tulostaKoulutusOhjelmanOpettajat() const
{

	cout << "Minka koulutusalan opettajat tulostetaan: ";
	string tempNimi;
	getline(cin, tempNimi);

	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++)
	{
		if (tempNimi == koulutusohjelmat_[i].annaNimi())
		{
			koulutusohjelmat_[i].tulostaOpettajat();
			break;
		}
		else
		{
			cout << "Ei ole (bugi)\n"; /* Tulostaa aina jos ei ole ensimmäisessä alkiossa */
		}
		break;
	}

	/*
	int indeksi = etsiKoulutusohjelma();
	if (indeksi ==	-1) {
		cout << "Koulutusohjelmaa ei loytynyt" << endl;
	}

	else {
		koulutusohjelmat_[indeksi].tulostaOpettajat();
	}
	*/
}

void Koulu::lisaaKoulutusOhjelmaanOpiskelija()
{
	cout << "Lisaa opiskelija koulutusohjelmaan: ";
	string laitaNimi;
	getline(cin, laitaNimi);

	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++)
	{
		if (laitaNimi == koulutusohjelmat_[i].annaNimi())
		{
			koulutusohjelmat_[i].lisaaOpiskelija();
			break;
		}
		else
		{
			cout << "Ei ole(bugi)\n"; /* Tulostaa aina jos ei ole ensimmäisessä alkiossa */
		}
	}
}


//etsintä rutiini
int Koulu::etsiKoulutusohjelma() const
{
	string temp;
	cout << "Etsi koulutusohjelma: ";
	getline(cin, temp);

	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {

		if (temp == koulutusohjelmat_[i].annaNimi()) {
			return i;
		}

	}

	return -1; /* Ei löytynyt */
}

void Koulu::tulostaKoulutusOhjelmanOpiskelijat() const
{
	cout << "Minka koulutusalan opiskelijat tulostetaan: ";
	string onimi;
	getline(cin, onimi);


	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++)
	{
		if (onimi == koulutusohjelmat_[i].annaNimi())
		{
			koulutusohjelmat_[i].tulostaOpiskelija();
			break;
		}
		else
		{
			cout << "Ei ole(bugi)\n"; /* Tulostaa aina jos ei ole ensimmäisessä alkiossa */
		}
		break;
	}
}
