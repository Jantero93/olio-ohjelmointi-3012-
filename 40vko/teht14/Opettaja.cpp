#include "Opettaja.h"
#include "Tyontekija.h"
#include <iostream>

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