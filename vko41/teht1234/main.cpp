#include "Koulu.h"
#include <iostream>



int main() {

	using namespace std;
	/*
	Koulutusohjelma tite("TiTe");
	Koulutusohjelma raksa("Rakennus");



	Koulu tamk;

	tamk.lisaaKoulutusOhjelma();
	tamk.lisaaKoulutusOhjelma();
	
	tamk.lisaaKoulutusOhjelmaanOpiskelija();
	tamk.lisaaKoulutusOhjelmaanOpiskelija();
	tamk.lisaaKoulutusOhjelmaanOpettaja();

	cout << "tulosta koulutusohjelmat \n";
	tamk.tulostaKoulutusOhjelmat();



	tamk.tulostaKoulutusOhjelmanOpettajat();
	tamk.tulostaKoulutusOhjelmienMaara();
	*/

	Koulu amk("TAMK");
	amk.lisaaKoulutusOhjelma();
	cout << "Lisaa opettaja\n";
	amk.lisaaKoulutusOhjelmaanOpettaja();
	cout << "Lisaa opiskelija\n";
	system("pause");
	amk.lisaaKoulutusOhjelmaanOpiskelija();

	amk.tulostaKoulutusOhjelmat();
	amk.tulostaKoulutusOhjelmanOpettajat();
	amk.tulostaKoulutusOhjelmanOpiskelijat();

	system("pause");
	return 0;
}