#pragma once
#include "Henkilo.h"
class Tyontekija :
public Henkilo
{
public:
	Tyontekija(); //oletus
	Tyontekija(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero, const string& palkka, const string& tunnus); //parametrinen
	Tyontekija(const Tyontekija& alkup); //kopiorakentaja
	~Tyontekija(); // tuhoaja

	//getteri
	string annaPalkka() const;
	string annaTunnus() const;

	//setteri
	void asetaPalkka(string& palkka);
	void asetaTunnus(string& tunnus);

	//extra
	void kysyTiedot();
	void tulosta() const;

private:
	string palkka_;
	string tunnus_;
};

