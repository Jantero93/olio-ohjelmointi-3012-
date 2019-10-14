#pragma once
#include "Koulutusohjelma.h";

class Koulu :
public Koulutusohjelma
{
public:
	
	Koulu();
	Koulu(const string& nimi);
	~Koulu();

	void lisaaKoulutusOhjelma();

	string annaNimi() const;
	void asetaNimi(const string& nimi);

	void tulostaKoulutusOhjelmat() const;
	void tulostaKoulutusOhjelmienMaara() const;
	void lisaaKoulutusOhjelmaanOpettaja();
	void tulostaKoulutusOhjelmanOpettajat() const;
	void lisaaKoulutusOhjelmaanOpiskelija();
	void tulostaKoulutusOhjelmanOpiskelijat() const;

private:
	string nimi_;
	vector <Koulutusohjelma> koulutusohjelmat_;
};

