#pragma once
#include <string>;
#include "Kello.h";
#include "Paivays.h";

using std::string;

class Kalenterimerkinta
{

public:
	Kalenterimerkinta(); // oletus rakentaja
	Kalenterimerkinta(Paivays pvm, Kello klo, string asia, bool muistutus); // parametrinen rakentaja
	Kalenterimerkinta(const Kalenterimerkinta &alkup); //kopiorakenne
	~Kalenterimerkinta(); //purkaja
	
	//Getterit
	Paivays annaPvm();
	Kello annaKlo();
	string annaAsia();
	bool annaMuistutus();

	//Setterit
	void asetaPvm(Paivays pvm); //arvoparametri eli kopio eli tarvitaan kopiorakentaja
	void asetaKello(Kello klo);
	void asetaAsia(string asia);
	void asetaMuistutus(bool muistutus);

	//extra jutut
	void tulosta();
	void kysyTiedot();

private:
	Paivays pvm_;
	Kello klo_;
	string asia_;
	bool muistutus_;
};

