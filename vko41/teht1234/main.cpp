//#include "Koulutusohjelma.h";
#include "Koulu.h"
#include <iostream>



int main() {

	using std::cout;
	using std::endl;
	using std::endl;

	Koulutusohjelma tite("TiTe");
	Koulutusohjelma raksa("Rakennus");
	//tite.lisaaOpettaja();
	//tite.lisaaOpettaja();
	//tite.lisaaOpiskelija();
	//tite.lisaaOpiskelija();

	//tite.tulostaOpettajat();
	//tite.tulostaOpiskelija(); 


	Koulu tamk;
	
	tamk.lisaaKoulutusOhjelmaanOpiskelija();
	tamk.lisaaKoulutusOhjelmaanOpiskelija();
	tamk.lisaaKoulutusOhjelmaanOpiskelija();

	tamk.tulostaKoulutusOhjelmat();

	tamk.tulostaKoulutusOhjelmienMaara();

	

	system("pause");
	return 0;
}