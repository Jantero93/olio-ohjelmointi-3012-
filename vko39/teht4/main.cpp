#include "Kalenterimerkinta.h";
int main() {
	Kalenterimerkinta esimerkki;
	esimerkki.kysyTiedot();
	
	std::cout << std::endl << "TULOSTA KYSYTYT" << std::endl;

	esimerkki.tulosta();
	
	printf("\n");
	Kalenterimerkinta oletus;
	Kalenterimerkinta kopio(oletus);
	

	system("pause");
	return 0;
}