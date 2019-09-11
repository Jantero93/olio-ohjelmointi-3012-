#include "Paivays.h";


int main() {
	Paivays tanaan;

	tanaan.asetaPaiva(11);
	tanaan.asetaKuukausi(9);
	tanaan.asetaVuosi(2019);

	tanaan.tulostaPaivays();

	std::cout << tanaan.annaKuukausi() << "/" << tanaan.annaPaiva() << "/" << tanaan.annaVuosi() << std::endl;

	system("pause");
	return 0;
}