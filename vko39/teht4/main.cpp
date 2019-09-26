#include "Kalenterimerkinta.h";
int main() {
	Kalenterimerkinta esimerkki;
	esimerkki.kysyTiedot();
	
	std::cout << std::endl << "TULOSTA KYSYTYT" << std::endl;

	esimerkki.tulosta();
	
	std::cout << std::endl;
	Kalenterimerkinta oletus; //oletusrakentaja
	Kalenterimerkinta kopio(oletus); //kopiorakentaja
	Kalenterimerkinta parametrinen(Paivays(30, 3, 1993), Kello(12, 16, 22), "Halytys", true); //parametrinen rakentaja
	std::cout << "parametrinen rakentaja testaus" << std::endl;
	parametrinen.tulosta();

	

	system("pause");
	return 0;
}