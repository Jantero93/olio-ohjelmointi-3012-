#pragma once
#include "Tyontekija.h"
class Opettaja : public Tyontekija
{
public:
	Opettaja(); //oletus
	//parametrinen
	Opettaja(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero, const string& palkka, const string& tunnus, const string& opetusala);
	Opettaja(const Opettaja& alkup);
	//sijoitusoperator
	Opettaja& operator=(const Opettaja& ope);

		//getteri
	string annaOpetusala() const;
		//setteri
	void asetaOpetusala(string& opetusala);
		//muu
	void kysyTiedot();
	void tulosta() const;

private:
	string opetusala_;
};

