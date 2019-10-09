#include "Koulutusohjelma.h";


int main() {

	Koulutusohjelma tite("TiTe");
	tite.lisaaOpettaja();
	tite.lisaaOpettaja();
	tite.lisaaOpiskelija();
	tite.lisaaOpiskelija();

	tite.tulostaOpettajat();
	tite.tulostaOpiskelija(); 

	

		system("pause");
	return 0;
}