#include "Kalenterimerkinta.h";
using namespace std;

int main() {
	//Kalenterimerkinta esimerkki;
//	esimerkki.kysyTiedot();
	
	/*
	std::cout << std::endl << "TULOSTA KYSYTYT" << std::endl;

	esimerkki.tulosta();
	
	std::cout << std::endl;
	Kalenterimerkinta oletus; //oletusrakentaja
	Kalenterimerkinta kopio(oletus); //kopiorakentaja
	Kalenterimerkinta parametrinen(Paivays(30, 3, 1993), Kello(12, 16, 22), "Halytys", true); //parametrinen rakentaja
	std::cout << "parametrinen rakentaja testaus" << std::endl;
	parametrinen.tulosta();

	std::cout << std::endl << std::endl;
	printf("Kysely\n");
	esimerkki.kysyTiedot();
	esimerkki.tulosta();
	*/

	try {
		Paivays tanaan(-6, -12, -2019);
		tanaan.tulostaPaivays();
	}
	catch (const std::exception& e) {
		cerr << "Virhe!" << e.what() << endl;
	}

	system("pause");
	return 0;
}