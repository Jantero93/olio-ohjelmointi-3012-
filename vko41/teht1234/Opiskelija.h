#pragma once
#include "Henkilo.h"
class Opiskelija :
public Henkilo
{
public:
	//oletus
	Opiskelija();
	//parametri
	Opiskelija(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero, const string& opiskelijanumero);
	//kopio
	Opiskelija(const Opiskelija& alkup);
	~Opiskelija();

	//getteri
	string annaOpiskelijanumero() const;

	//setteri
	void asetaOpiskelijanumero(const string& opiskelijanumero);

	//extra
	void tulosta() const;
	void kysyTiedot();

private:
	string opiskelijanumero_;
};

