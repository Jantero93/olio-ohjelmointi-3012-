#include "Opiskelija.h"
#include "Henkilo.h"
#include <iostream>




Opiskelija::Opiskelija() : Henkilo(), opiskelijanumero_()
{
}

Opiskelija::Opiskelija(const string & etunimi, const string & sukunimi, const string & osoite, const string & puhelinnumero, const string & opiskelijanumero):
Henkilo(etunimi, sukunimi, osoite, puhelinnumero), opiskelijanumero_(opiskelijanumero)
{
}


Opiskelija::Opiskelija(const Opiskelija& alkup): Henkilo(alkup), opiskelijanumero_(alkup.opiskelijanumero_)
{
}

Opiskelija::~Opiskelija()
{
}

string Opiskelija::annaOpiskelijanumero() const
{
	return opiskelijanumero_;
}

void Opiskelija::asetaOpiskelijanumero(const string & opiskelijanumero)
{
	opiskelijanumero_ = opiskelijanumero;
}

void Opiskelija::tulosta() const
{
	Henkilo::tulosta(); // kutsutaan kantaluokan tulosta-metodia
	std::cout << opiskelijanumero_ << " " << std::endl;

}

void Opiskelija::kysyTiedot()
{
	Henkilo::kysyTiedot();
	std::cout << "Anna opiskelijanumero: ";
	getline(std::cin, opiskelijanumero_);
}
