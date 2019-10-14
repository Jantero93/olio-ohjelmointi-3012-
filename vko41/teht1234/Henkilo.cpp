#include <iostream>
#include "Henkilo.h"

using std::cout; using std::cin; using std::endl;

//oletus
Henkilo::Henkilo():etunimi_(), sukunimi_(), osoite_(), puhelinnumero_()
{
}
//parametri
Henkilo::Henkilo(const string & etunimi, const string & sukunimi, const string & osoite, const string & puhelinnumero):
	etunimi_(etunimi), sukunimi_(sukunimi), osoite_(osoite), puhelinnumero_(puhelinnumero)
{
}

//kopio
Henkilo::Henkilo(const Henkilo & alkup):etunimi_(alkup.etunimi_), sukunimi_(alkup.sukunimi_), osoite_(alkup.osoite_), puhelinnumero_(alkup.puhelinnumero_)
{
}


Henkilo::~Henkilo()
{
}

string Henkilo::annaEtunimi() const
{
	return etunimi_;
}

string Henkilo::annaSukunimi() const
{
	return sukunimi_;
}

string Henkilo::annaOsoite() const
{
	return osoite_;
}

string Henkilo::annaPuhelinnumero() const
{
	return puhelinnumero_;
}

void Henkilo::asetaEtunimi(const string & etunimi)
{
	etunimi_ = etunimi;
}

void Henkilo::asetaSukunimi(const string & sukunimi)
{
	sukunimi_ = sukunimi;
}

void Henkilo::asetaOsoite(const string & osoite)
{
	osoite_ = osoite;
}

void Henkilo::asetaPuhelinnumero(const string & puhelinnumero)
{
	puhelinnumero_ = puhelinnumero;
}

void Henkilo::kysyTiedot()
{
	cout << "Anna etunimi: ";
	getline(cin, etunimi_);
	cout << "Anna sukunimi: ";
	getline(cin, sukunimi_);
	cout << "Anna osoite: ";
	getline(cin, osoite_);
	cout << "Anna puhelinnumero: ";
	getline(cin, puhelinnumero_);
}

void Henkilo::tulosta() const
{
	cout << etunimi_ << " " << sukunimi_ << " " << osoite_ << " " << puhelinnumero_ << " ";
}
