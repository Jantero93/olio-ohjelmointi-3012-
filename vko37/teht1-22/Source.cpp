#include "Paivays.h";


int main() {
	Paivays tanaan; //
//	Paivays huomenna(6, 6, 1999);// parametrinen
	Paivays huomenna(tanaan); //kopio
	Paivays karkausvuosi(30, 7, 2003);
	Paivays mikakuukausi(1, 12, 2003);
	//tänään
	//tanaan.asetaPaiva(11);
	//tanaan.asetaKuukausi(9);
	//tanaan.asetaVuosi(2019);

	tanaan.tulostaPaivays();

	//huomenna
	//huomenna.asetaPaiva(12);
	//huomenna.asetaKuukausi(9);
	//huomenna.asetaVuosi(2019);
	
	std::cout << "Tanaan on paiva: " << tanaan.annaKuukausi() << "/" << tanaan.annaPaiva() << "/" << tanaan.annaVuosi() << std::endl;
	std::cout << "(kopiokone) on paiva: " << huomenna.annaKuukausi() << "/" << huomenna.annaPaiva() << "/" << huomenna.annaVuosi() << std::endl;

	std::cout << "montako paivaa kuukaudessa" << std::endl << std::endl;

	mikakuukausi.montakoPaivaaKuukaudessa();

	for (int i = 0; i < 2000; i++) {
		huomenna.lisaaPaiva();
		huomenna.tulostaPaivays();
	}
	
	
	system("pause");
	return 0;
	
}
