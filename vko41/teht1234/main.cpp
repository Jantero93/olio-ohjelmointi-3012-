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
	cout << "Lisaa koulutusohjelma \n";
	amk.lisaaKoulutusOhjelma();
	cout << "Lisaa opettaja\n";
	amk.lisaaKoulutusOhjelmaanOpettaja();
	cout << "Lisaa opiskelija\n";
	amk.lisaaKoulutusOhjelmaanOpiskelija();

	cout << "Tulosta koulutusohjelmat \n"; 
	amk.tulostaKoulutusOhjelmat();
	cout << "Tulosta koutusohjelman opettajat\n";
	amk.tulostaKoulutusOhjelmanOpettajat();
	cout << "Tulosta koulutusohjelmat opiskelijat\n";
	amk.tulostaKoulutusOhjelmanOpiskelijat();

	system("pause");
	return 0;
}