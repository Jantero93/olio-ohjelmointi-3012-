#include "Opettaja.h"
#include "Tyontekija.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

Opettaja::Opettaja() : Tyontekija(), opetusala_()
{
}

Opettaja::Opettaja(const string & etunimi, const string & sukunimi, const string & osoite, const string & puhelinnumero, const string & palkka, const string & tunnus, const string & opetusala):
	Tyontekija(etunimi, sukunimi, osoite, puhelinnumero, palkka, tunnus), opetusala_(opetusala)
{
}

Opettaja::Opettaja(const Opettaja & alkup):Tyontekija(alkup), opetusala_(alkup.opetusala_)
{
}

Opettaja& Opettaja::operator=(const Opettaja& ope)
{
	if (this != &ope) {
		Tyontekija::operator=(ope);
		opetusala_ = ope.opetusala_;
	}

	return *this;
}

string Opettaja::annaOpetusala() const
{
	return opetusala_;
}

void Opettaja::asetaOpetusala(string & opetusala)
{
	opetusala_ = opetusala;
}

void Opettaja::kysyTiedot()
{
	Tyontekija::kysyTiedot();
	std::cout << "Anna opetusala: ";
	getline(std::cin, opetusala_);
}

void Opettaja::tulosta() const
{
	Tyontekija::tulosta();
	std::cout << opetusala_ << std::endl;
}


//etsintä rutiini
/*
int Opettaja::etsiOpettaja() const
{
	string temp;
	cout << "Etsi koulutusohjelma: ";
	getline(cin, temp);

	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {

		if (temp == koulutusohjelmat_[i].annaNimi()) {
			return i;
		}

	}

	return -1; /* Ei löytynyt, palauta -1 
}
*/