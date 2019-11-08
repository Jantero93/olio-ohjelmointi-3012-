#pragma once
#include <string>
#include <vector>
#include "Opiskelija.h"
#include "Opettaja.h"



using std::vector;
using std::string;

class Koulutusohjelma
{
public:
	Koulutusohjelma();
	Koulutusohjelma(const string& nimi);
	~Koulutusohjelma();
	//getteri ja setteri
	string annaNimi() const;
	void asetaNimi(const string& nimi);

	void lisaaOpettaja();
	void lisaaOpiskelija();
	void tulostaOpettajat() const;
	void tulostaOpiskelija() const;
	void poistaOpiskelija();
	void poistaOpettaja();
	void paivitaOpiskelija();
	void paivitaOpettaja();

private:
	int etsiOpettaja() const;
	int etsiOppilas() const;
	string nimi_;
	vector <Opiskelija> opiskelijat_;
	vector <Opettaja> opettajat_;
};

