#pragma once
#include "Koulutusohjelma.h"
#include <vector>
#include <string>


class Koulu 
{
public:

	Koulu();
	Koulu(const string& nimi);
	~Koulu();

	string annaNimi() const;
	void asetaNimi(const string& nimi);

	void tulostaKoulutusOhjelmat() const;
	void tulostaKoulutusOhjelmienMaara() const;
	void tulostaKoulutusOhjelmanOpiskelijat() const;
	void tulostaKoulutusOhjelmanOpettajat() const;
	void lisaaKoulutusOhjelma();
	void lisaaKoulutusOhjelmaanOpettaja();
	void lisaaKoulutusOhjelmaanOpiskelija();

private:
	int etsiKoulutusohjelma() const;
	string nimi_;
	vector <Koulutusohjelma> koulutusohjelmat_;
};

