#include "Tyontekija.h"
#include <iostream>

Tyontekija::Tyontekija() : Henkilo(), palkka_(), tunnus_()
{
}

Tyontekija::Tyontekija(const string & etunimi, const string & sukunimi, const string & osoite, const string & puhelinnumero, const string & palkka, const string & tunnus) :
	Henkilo(etunimi, sukunimi, osoite, puhelinnumero), palkka_(palkka), tunnus_(tunnus)
{
}

Tyontekija::Tyontekija(const Tyontekija & alkup): Henkilo(alkup), palkka_(alkup.palkka_), tunnus_(alkup.tunnus_)
{

}

Tyontekija::~Tyontekija()
{
}

Tyontekija & Tyontekija::operator=(const Tyontekija & tyo)
{
	if (this != &tyo) {
		Henkilo::operator=(tyo);
		palkka_ = tyo.palkka_;
		tunnus_ = tyo.tunnus_;
	}

	return *this;
}

string Tyontekija::annaPalkka() const
{
	return palkka_;
}

string Tyontekija::annaTunnus() const
{
	return tunnus_;
}

void Tyontekija::asetaPalkka(string & palkka)
{
	palkka_ = palkka;
}

void Tyontekija::asetaTunnus(string & tunnus)
{
	tunnus_ = tunnus; 
}

void Tyontekija::kysyTiedot()
{
	Henkilo::kysyTiedot();
	std::cout << "Anna palkka: ";
	getline(std::cin, palkka_);
	std::cout << "Anna tunnus: ";
	getline(std::cin, tunnus_);
}

void Tyontekija::tulosta() const
{
	Henkilo::tulosta();
	std::cout << palkka_ << " " << tunnus_ << " ";
}
