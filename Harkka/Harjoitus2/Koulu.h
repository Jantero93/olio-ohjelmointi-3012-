#pragma once
#include "Koulutusohjelma.h"
#include <vector>
#include <string>
#include <fstream>


class Koulu 
{
public:

	Koulu();
	Koulu(const string& nimi);
	~Koulu();

	string annaNimi() const;
	void asetaNimi(const string& nimi);

	int annaKoulutuohjelmienMaara();

	void tulostaKoulutusOhjelmat() const;
	void tulostaKoulutusOhjelmienMaara() const;
	void tulostaKoulutusOhjelmanOpiskelijat() const;
	void tulostaKoulutusOhjelmanOpettajat() const;
	void lisaaKoulutusOhjelma();
	void lisaaKoulutusOhjelmaanOpettaja();
	void lisaaKoulutusOhjelmaanOpiskelija();
	void poistaKoulutusOhjelma();
	void poistaKoulutusOhjelmastaOpettaja();
	void poistaKoulutusOhjelmastaOpiskelija();
	void paivitaKoulutusOhjelmanNimi();
	void paivitaOpettajanTiedot();
	void paivitaOppilaanTiedot();


	void tallennaTiedot();
	void lueTiedot();

private:
	int etsiKoulutusohjelmaTIEDOSTO(string&) const;
	int etsiKoulutusohjelma() const;	
	string nimi_;
	vector <Koulutusohjelma> koulutusohjelmat_;
};

