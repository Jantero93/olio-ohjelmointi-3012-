#include "Paivays.h";


int main() {
	Paivays tanaan;
	Paivays huomenna(6, 6, 1999);

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
	std::cout << "Huomenna on paiva: " << huomenna.annaKuukausi() << "/" << huomenna.annaPaiva() << "/" << huomenna.annaVuosi() << std::endl;

	
	//system("pause");
	return 0;
}
